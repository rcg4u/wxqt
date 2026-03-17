// *****************************************************************************
// * Copyright (c) 2020, 2021, 2022 joshua.tee@gmail.com. All rights reserved.
// *
// * Refer to the COPYING file of the official project for license.
// *****************************************************************************

#include "settings/UtilityLocation.h"
#include <algorithm>
#include "common/GlobalArrays.h"
#include "objects/WString.h"
#include "radar/RadarSites.h"
#include "util/SoundingSites.h"
#include "util/Utility.h"
#include "util/UtilityList.h"
#include "util/WfoSites.h"

LatLon UtilityLocation::getSiteLocation(const string& site, OfficeTypeEnum officeType) {
    string x{"0.0"};
    string y{"0.0"};
    if (officeType == OfficeTypeEnum::RadarSite) {
        const auto latLon = getRadarSiteLatLon(WString::toUpper(site));
        x = latLon.latStr();
        y = latLon.lonStr();
    } else if (officeType == OfficeTypeEnum::Wfo) {
        const auto latLon = getWfoSiteLatLon(WString::toUpper(site));
        x = latLon.latStr();
        y = latLon.lonStr();
    } else if (officeType == OfficeTypeEnum::Sounding) {
        const auto latLon = getSoundingSiteLatLon(WString::toUpper(site));
        x = latLon.latStr();
        y = latLon.lonStr();
    }
    return {x, y};
}

vector<RID> UtilityLocation::getNearestRadarSites(const LatLon& latLon, int count, bool includeTdwr) {
    vector<RID> radarSites;
    for (const auto& radar : GlobalArrays::nexradRadars) {
        const auto labels = WString::split(radar, ":");
        if (RadarSites::radarSiteToLat.find(labels[0]) == RadarSites::radarSiteToLat.end()) {
            continue;
        }
        const auto siteLatLon = getSiteLocation(labels[0], OfficeTypeEnum::RadarSite);
        radarSites.emplace_back(labels[0], siteLatLon, latLon.dist(siteLatLon));
    }
    if (includeTdwr) {
        for (const auto& radar : GlobalArrays::tdwrRadars) {
            const auto labels = WString::split(radar, ":");
            if (RadarSites::radarSiteToLat.find(labels[0]) == RadarSites::radarSiteToLat.end()) {
                continue;
            }
            const auto siteLatLon = getSiteLocation(labels[0], OfficeTypeEnum::RadarSite);
            radarSites.emplace_back(labels[0], siteLatLon, latLon.dist(siteLatLon));
        }
    }
    std::sort(
        radarSites.begin(),
        radarSites.end(),
        [] (const RID &s1, const RID &s2) { return s1.distance < s2.distance; });
    // QVector::mid -- Returns a sub-vector which contains elements from this vector, starting at position pos.
    // If length is -1 (the default), all elements after pos are included; otherwise length elements (or all remaining
    // elements if there are less than length elements) are included. https://doc.qt.io/qt-5/qvector.html#mid
    // return radarSites.mid(0, cnt);
    const auto available = static_cast<int>(radarSites.size());
    return {radarSites.begin(), radarSites.begin() + std::min(count, available)};
}

string UtilityLocation::getNearestOffice(const string& officeType, const LatLon& location) {
    vector<string> officeArray;
    if (officeType == "WFO") {
        officeArray = GlobalArrays::wfos;
    } else {
        officeArray = GlobalArrays::nexradRadars;  // was radars()
    }
    vector<RID> sites;
    for (const auto& office : officeArray) {
        const auto labelArr = WString::split(office, ":");
        if (officeType == "WFO") {
            if (WfoSites::wfoSiteToLat.find(labelArr[0]) == WfoSites::wfoSiteToLat.end()) {
                continue;
            }
            auto latLon = getWfoSiteLatLon(labelArr[0]);
            sites.emplace_back(labelArr[0], latLon, location.dist(latLon));
        } else {
            if (RadarSites::radarSiteToLat.find(labelArr[0]) == RadarSites::radarSiteToLat.end()) {
                continue;
            }
            auto latLon = getRadarSiteLatLon(labelArr[0]);
            sites.emplace_back(labelArr[0], latLon, location.dist(latLon));
        }
    }
    if (sites.empty()) {
        return "";
    }
    std::sort(
        sites.begin(),
        sites.end(),
        [] (const RID &s1, const RID &s2) { return s1.distance < s2.distance; });
    return sites[0].name;
}

// latLon input is all positive numbers
LatLon UtilityLocation::getCenterOfPolygon(const vector<LatLon>& latLons) {
    auto x = 0.0;
    auto y = 0.0;
    for (const auto& latLon : latLons) {
        x += latLon.lat();
        y += latLon.lon();
    }
    auto totalPoints = static_cast<double>(latLons.size());
    x /= totalPoints;
    y /= totalPoints;
    return {x, -1.0 * y};
}

string UtilityLocation::getRadarSiteName(const string& radarSite) {
    const auto it = RadarSites::radarIdToName.find(radarSite);
    return (it != RadarSites::radarIdToName.end()) ? it->second : radarSite;
}

LatLon UtilityLocation::getRadarSiteLatLon(const string& radarSite) {
    const auto itLat = RadarSites::radarSiteToLat.find(radarSite);
    const auto itLon = RadarSites::radarSiteToLon.find(radarSite);
    if (itLat == RadarSites::radarSiteToLat.end() || itLon == RadarSites::radarSiteToLon.end()) {
        return {};
    }
    return {itLat->second, "-" + itLon->second};
}

string UtilityLocation::getRadarSiteX(const string& radarSite) {
    const auto it = RadarSites::radarSiteToLat.find(radarSite);
    return (it != RadarSites::radarSiteToLat.end()) ? it->second : "0.0";
}

string UtilityLocation::getRadarSiteY(const string& radarSite) {
    const auto it = RadarSites::radarSiteToLon.find(radarSite);
    return (it != RadarSites::radarSiteToLon.end()) ? it->second : "0.0";
}

LatLon UtilityLocation::getWfoSiteLatLon(const string& wfo) {
    const auto itLat = WfoSites::wfoSiteToLat.find(wfo);
    const auto itLon = WfoSites::wfoSiteToLon.find(wfo);
    if (itLat == WfoSites::wfoSiteToLat.end() || itLon == WfoSites::wfoSiteToLon.end()) {
        return {};
    }
    return {itLat->second, itLon->second};
}

LatLon UtilityLocation::getSoundingSiteLatLon(const string& wfo) {
    const auto itLat = SoundingSites::soundingSiteToLat.find(wfo);
    const auto itLon = SoundingSites::soundingSiteToLon.find(wfo);
    if (itLat == SoundingSites::soundingSiteToLat.end() || itLon == SoundingSites::soundingSiteToLon.end()) {
        return {};
    }
    return {itLat->second, "-" + itLon->second};
}

string UtilityLocation::getNearest(const LatLon& latLon, const unordered_map<string, LatLon>& sectorToLatLon) {
    vector<RID> sites;
    for (const auto& m : sectorToLatLon) {
        sites.emplace_back(m.first, m.second, latLon.dist(m.second));
    }
    std::sort(
        sites.begin(),
        sites.end(),
        [] (const auto& s1, const auto& s2) { return s1.distance < s2.distance; });
    return sites[0].name;
}
