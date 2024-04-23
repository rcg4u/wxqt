// *****************************************************************************
// * Copyright (c) 2020, 2021, 2022 joshua.tee@gmail.com. All rights reserved.
// *
// * Refer to the COPYING file of the official project for license.
// *****************************************************************************

#include "util/UtilityMetarConditions.h"

//# https,//www.weather.gov/forecast-icons
const unordered_map<string, string> UtilityMetarConditions::iconFromCondition{
    {"Mostly Clear", "few"},

    {"Fair", "skc"},
    {"Clear", "skc"},
    {"Fair with Haze", "skc"},
    {"Clear with Haze", "skc"},
    {"Fair and Breezy", "skc"},
    {"Clear and Breezy", "skc"},

    {"A Few Clouds", "few"},
    {"A Few Clouds with Haze", "few"},
    {"A Few Clouds and Breezy", "few"},

    {"Partly Cloudy", "sct"},
    {"Partly Cloudy with Haze", "sct"},
    {"Partly Cloudy and Breezy", "sct"},

    {"Mostly Cloudy", "bkn"},
    {"Mostly Cloudy with Haze", "bkn"},
    {"Mostly Cloudy and Breezy", "bkn"},

    {"Overcast", "ovc"},
    {"Overcast with Haze", "ovc"},
    {"Overcast and Breezy", "ovc"},

    {"Snow", "snow"},
    {"Light Drizzle, Snow And Mist", "snow"},
    {"Light Snow", "snow"},
    {"Heavy Snow", "snow"},
    {"Snow Showers", "snow"},
    {"Light Snow Showers", "snow"},
    {"Heavy Snow Showers", "snow"},
    {"Showers Snow", "snow"},
    {"Light Showers Snow", "snow"},
    {"Heavy Showers Snow", "snow"},
    {"Snow Fog/Mist", "snow"},
    {"Light Snow Fog/Mist", "snow"},
    {"Heavy Snow Fog/Mist", "snow"},
    {"Snow Showers Fog/Mist", "snow"},
    {"Light Snow Showers Fog/Mist", "snow"},
    {"Heavy Snow Showers Fog/Mist", "snow"},
    {"Showers Snow Fog/Mist", "snow"},
    {"Light Showers Snow Fog/Mist", "snow"},
    {"Heavy Showers Snow Fog/Mist", "snow"},
    {"Snow Fog", "snow"},
    {"Light Snow Fog", "snow"},
    {"Heavy Snow Fog", "snow"},
    {"Snow Showers Fog", "snow"},
    {"Light Snow Showers Fog", "snow"},
    {"Heavy Snow Showers Fog", "snow"},
    {"Showers in Vicinity Snow", "snow"},
    {"Snow Showers in Vicinity", "snow"},
    {"Snow Showers in Vicinity Fog/Mist", "snow"},
    {"Snow Showers in Vicinity Fog", "snow"},
    {"Low Drifting Snow", "snow"},
    {"Blowing Snow", "snow"},
    {"Snow Low Drifting Snow", "snow"},
    {"Snow Blowing Snow", "snow"},
    {"Light Snow Low Drifting Snow", "snow"},
    {"Light Snow Blowing Snow", "snow"},
    {"Light Snow Blowing Snow Fog/Mist", "snow"},
    {"Heavy Snow Low Drifting Snow", "snow"},
    {"Heavy Snow Blowing Snow", "snow"},
    {"Thunderstorm Snow", "snow"},
    {"Light Thunderstorm Snow", "snow"},
    {"Heavy Thunderstorm Snow", "snow"},
    {"Snow Grains", "snow"},
    {"Light Snow Grains", "snow"},
    {"Heavy Snow Grains", "snow"},
    {"Heavy Blowing Snow", "snow"},
    {"Blowing Snow in Vicinity", "snow"},
    {"Snow on Ground", "snow"},

    {"Rain Snow", "ra_sn"},
    {"Light Rain Snow", "ra_sn"},
    {"Heavy Rain Snow", "ra_sn"},
    {"Snow Rain", "ra_sn"},
    {"Light Snow Rain", "ra_sn"},
    {"Heavy Snow Rain", "ra_sn"},
    {"Drizzle Snow", "ra_sn"},
    {"Light Drizzle Snow", "ra_sn"},
    {"Heavy Drizzle Snow", "ra_sn"},
    {"Snow Drizzle", "ra_sn"},
    {"Light Snow Drizzle", "ra_sn"},

    {"Rain Ice Pellets", "ra_ip"},
    {"Light Rain Ice Pellets", "ra_ip"},
    {"Heavy Rain Ice Pellets", "ra_ip"},
    {"Drizzle Ice Pellets", "ra_ip"},
    {"Light Drizzle Ice Pellets", "ra_ip"},
    {"Heavy Drizzle Ice Pellets", "ra_ip"},
    {"Ice Pellets Rain", "ra_ip"},
    {"Light Ice Pellets Rain", "ra_ip"},
    {"Heavy Ice Pellets Rain", "ra_ip"},
    {"Ice Pellets Drizzle", "ra_ip"},
    {"Light Ice Pellets Drizzle", "ra_ip"},
    {"Heavy Ice Pellets Drizzle", "ra_ip"},

    {"Freezing Rain", "fzra"},
    {"Freezing Drizzle", "fzra"},
    {"Light Freezing Rain", "fzra"},
    {"Light Freezing Drizzle", "fzra"},
    {"Heavy Freezing Rain", "fzra"},
    {"Heavy Freezing Drizzle", "fzra"},
    {"Freezing Rain in Vicinity", "fzra"},
    {"Freezing Drizzle in Vicinity", "fzra"},
    {"Light Freezing Drizzle, Snow", "fzra"},
    {"Freezing Rain, Ice Pellets", "fzra"},

    {"Freezing Rain Rain", "ra_fzra"},
    {"Light Freezing Rain Rain", "ra_fzra"},
    {"Heavy Freezing Rain Rain", "ra_fzra"},
    {"Rain Freezing Rain", "ra_fzra"},
    {"Light Rain Freezing Rain", "ra_fzra"},
    {"Heavy Rain Freezing Rain", "ra_fzra"},
    {"Freezing Drizzle Rain", "ra_fzra"},
    {"Light Freezing Drizzle Rain", "ra_fzra"},
    {"Heavy Freezing Drizzle Rain", "ra_fzra"},
    {"Rain Freezing Drizzle", "ra_fzra"},
    {"Light Rain Freezing Drizzle", "ra_fzra"},
    {"Heavy Rain Freezing Drizzle", "ra_fzra"},

    {"Freezing Rain Snow", "fzra_sn"},
    {"Light Freezing Rain Snow", "fzra_sn"},
    {"Heavy Freezing Rain Snow", "fzra_sn"},
    {"Freezing Drizzle Snow", "fzra_sn"},
    {"Light Freezing Drizzle Snow", "fzra_sn"},
    {"Heavy Freezing Drizzle Snow", "fzra_sn"},
    {"Snow Freezing Rain", "fzra_sn"},
    {"Light Snow Freezing Rain", "fzra_sn"},
    {"Heavy Snow Freezing Rain", "fzra_sn"},
    {"Snow Freezing Drizzle", "fzra_sn"},
    {"Light Snow Freezing Drizzle", "fzra_sn"},
    {"Heavy Snow Freezing Drizzle", "fzra_sn"},

    {"Light Snow Pellets", "ip"},
    {"Light Snow, Ice Pellets", "ip"},
    {"Ice Pellets", "ip"},
    {"Light Ice Pellets", "ip"},
    {"Heavy Ice Pellets", "ip"},
    {"Ice Pellets in Vicinity", "ip"},
    {"Showers Ice Pellets", "ip"},
    {"Thunderstorm Ice Pellets", "ip"},
    {"Ice Crystals", "ip"},
    {"Hail", "ip"},
    {"Small Hail/Snow Pellets", "ip"},
    {"Light Small Hail/Snow Pellets", "ip"},
    {"Heavy small Hail/Snow Pellets", "ip"},
    {"Showers Hail", "ip"},
    {"Hail Showers", "ip"},

    {"Snow Ice Pellets", "snip"},

    {"Light Rain", "minus_ra"},
    {"Drizzle", "minus_ra"},
    {"Light Drizzle", "minus_ra"},
    {"Heavy Drizzle", "minus_ra"},
    {"Light Rain Fog/Mist", "minus_ra"},
    {"Light Rain Mist", "minus_ra"},
    {"Drizzle Fog/Mist", "minus_ra"},
    {"Light Drizzle Fog/Mist", "minus_ra"},
    {"Heavy Drizzle Fog/Mist", "minus_ra"},
    {"Light Rain Fog", "minus_ra"},
    {"Drizzle Fog", "minus_ra"},
    {"Light Drizzle Fog", "minus_ra"},
    {"Heavy Drizzle Fog", "minus_ra"},

    {"Rain", "ra"},
    {"Heavy Rain", "ra"},
    {"Rain Fog/Mist", "ra"},
    {"Heavy Rain Fog/Mist", "ra"},
    {"Rain Fog", "ra"},
    {"Heavy Rain Fog", "ra"},
    {"Precipitation", "ra"},

    {"Rain Showers", "shra"},
    {"Light Rain Showers", "shra"},
    {"Light Rain and Breezy", "shra"},
    {"Heavy Rain Showers", "shra"},
    {"Rain Showers in Vicinity", "shra"},
    {"Light Showers Rain", "shra"},
    {"Heavy Showers Rain", "shra"},
    {"Showers Rain", "shra"},
    {"Showers Rain in Vicinity", "shra"},
    {"Rain Showers Fog/Mist", "shra"},
    {"Light Rain Showers Fog/Mist", "shra"},
    {"Heavy Rain Showers Fog/Mist", "shra"},
    {"Rain Showers in Vicinity Fog/Mist", "shra"},
    {"Light Showers Rain Fog/Mist", "shra"},
    {"Heavy Showers Rain Fog/Mist", "shra"},
    {"Showers Rain Fog/Mist", "shra"},
    {"Showers Rain in Vicinity Fog/Mist", "shra"},

    {"Showers in Vicinity", "hi_shwrs"},
    {"Showers in Vicinity Fog/Mist", "hi_shwrs"},
    {"Showers in Vicinity Fog", "hi_shwrs"},
    {"Showers in Vicinity Haze", "hi_shwrs"},

    {"Thunderstorm", "tsra"},
    {"Thunderstorm Rain", "tsra"},
    {"Light Thunderstorm Rain", "tsra"},
    {"Heavy Thunderstorm Rain", "tsra"},
    {"Thunderstorm Rain Fog/Mist", "tsra"},
    {"Light Thunderstorm Rain Fog/Mist", "tsra"},
    {"Heavy Thunderstorm Rain Fog and Windy", "tsra"},
    {"Heavy Thunderstorm Rain Fog/Mist", "tsra"},
    {"Thunderstorm Showers in Vicinity", "tsra"},
    {"Light Thunderstorm Rain Haze", "tsra"},
    {"Heavy Thunderstorm Rain Haze", "tsra"},
    {"Thunderstorm Fog", "tsra"},
    {"Light Thunderstorm Rain Fog", "tsra"},
    {"Heavy Thunderstorm Rain Fog", "tsra"},
    {"Thunderstorm Light Rain", "tsra"},
    {"Thunderstorm Heavy Rain", "tsra"},
    {"Thunderstorm Light Rain Fog/Mist", "tsra"},
    {"Thunderstorm Heavy Rain Fog/Mist", "tsra"},
    {"Thunderstorm in Vicinity Fog/Mist", "tsra"},
    {"Thunderstorm in Vicinity Haze", "tsra"},
    {"Thunderstorm Haze in Vicinity", "tsra"},
    {"Thunderstorm Light Rain Haze", "tsra"},
    {"Thunderstorm Heavy Rain Haze", "tsra"},
    {"Thunderstorm Light Rain Fog", "tsra"},
    {"Thunderstorm Heavy Rain Fog", "tsra"},
    {"Thunderstorm Hail", "tsra"},
    {"Light Thunderstorm Rain Hail", "tsra"},
    {"Heavy Thunderstorm Rain Hail", "tsra"},
    {"Thunderstorm Rain Hail Fog/Mist", "tsra"},
    {"Light Thunderstorm Rain Hail Fog/Mist", "tsra"},
    {"Heavy Thunderstorm Rain Hail Fog/Hail", "tsra"},
    {"Thunderstorm Showers in Vicinity Hail", "tsra"},
    {"Light Thunderstorm Rain Hail Haze", "tsra"},
    {"Heavy Thunderstorm Rain Hail Haze", "tsra"},
    {"Thunderstorm Hail Fog", "tsra"},
    {"Light Thunderstorm Rain Hail Fog", "tsra"},
    {"Heavy Thunderstorm Rain Hail Fog", "tsra"},
    {"Thunderstorm Light Rain Hail", "tsra"},
    {"Thunderstorm Heavy Rain Hail", "tsra"},
    {"Thunderstorm Light Rain Hail Fog/Mist", "tsra"},
    {"Thunderstorm Heavy Rain Hail Fog/Mist", "tsra"},
    {"Thunderstorm in Vicinity Hail", "tsra"},
    {"Thunderstorm in Vicinity Hail Haze", "tsra"},
    {"Thunderstorm Haze in Vicinity Hail", "tsra"},
    {"Thunderstorm Light Rain Hail Haze", "tsra"},
    {"Thunderstorm Heavy Rain Hail Haze", "tsra"},
    {"Thunderstorm Light Rain Hail Fog", "tsra"},
    {"Thunderstorm Heavy Rain Hail Fog", "tsra"},
    {"Thunderstorm Small Hail/Snow Pellets", "tsra"},
    {"Thunderstorm Rain Small Hail/Snow Pellets", "tsra"},
    {"Light Thunderstorm Rain Small Hail/Snow Pellets", "tsra"},
    {"Heavy Thunderstorm Rain Small Hail/Snow Pellets", "tsra"},
    {"Light Drizzle With Thunder In The Vicinity", "tsra"},
    {"Thunder", "tsra"},
    {"Rain With Thunder", "tsra"},
    {"Thunder In The Vicinity And Mist", "tsra"},
    {"Mist With Thunder In The Vicinity", "tsra"},
    {"Thunder In The Vicinity And Heavy Rain and Mist", "tsra"},
    {"Heavy Rain With Thunder In The Vicinity", "tsra"},
    {"Light Rain With Thunder In The Vicinity", "tsra"},
    {"Rain With Thunder In The Vicinity", "tsra"},

    {"Freezing With Thunder Rain And Mist", "tsra"},
    {"Heavy Rain With Thunder", "tsra"},
    {"Light Rain With Thunder", "tsra"},

    {"Thunderstorm in Vicinity", "hi_tsra"},
    {"Thunder In The Vicinity", "hi_tsra"},
    {"Thunderstorm in Vicinity Fog", "hi_tsra"},
    {"Lightning Observed", "hi_tsra"},
    {"Cumulonimbus Clouds, Lightning Observed", "hi_tsra"},
    {"Cumulonimbus Clouds, Towering Cumulus Clouds Observed", "hi_tsra"},
    {"Cumulonimbus Clouds Observed", "hi_tsra"},
    {"Towering Cumulus Clouds Observed", "hi_tsra"},

    {"Funnel Cloud", "fc"},
    {"Funnel Cloud in Vicinity", "fc"},
    {"Tornado/Water Spout", "fc"},

    {"Tornado", "tor"},

    {"Hurricane Warning", "hur_warn"},

    {"Hurricane Watch", "hur_watch"},

    {"Tropical Storm Warning", "ts_warn"},

    {"Tropical Storm Watch", "ts_watch"},

    {"Tropical Storm Conditions presently exist w/Hurricane Warning in effect", "ts_nowarn"},

    {"Windy", "wind_skc"},
    {"Breezy", "wind_skc"},
    {"Fair and Windy", "wind_skc"},

    {"A Few Clouds and Windy", "wind_few"},

    {"Partly Cloudy and Windy", "wind_sct"},

    {"Mostly Cloudy and Windy", "wind_bkn"},

    {"Overcast and Windy", "wind_ovc"},

    {"Dust", "du"},
    {"Low Drifting Dust", "du"},
    {"Blowing Dust", "du"},
    {"Blowing Widespread Dust", "du"},
    {"Sand", "du"},
    {"Blowing Sand", "du"},
    {"Low Drifting Sand", "du"},
    {"Dust/Sand Whirls", "du"},
    {"Dust/Sand Whirls in Vicinity", "du"},
    {"Dust Storm", "du"},
    {"Heavy Dust Storm", "du"},
    {"Dust Storm in Vicinity", "du"},
    {"Sand Storm", "du"},
    {"Heavy Sand Storm", "du"},
    {"Sand Storm in Vicinity", "du"},

    {"Smoke", "fu"},

    {"Haze", "hz"},
    {"Haze", "haze"},
    {"Hot", "hot"},

    {"Cold", "cold"},

    {"Blizzard", "blizzard"},

    {"Fog", "fg"},
    {"Fog/Mist", "fg"},
    {"Freezing Fog", "fg"},
    {"Shallow Fog", "fg"},
    {"Partial Fog", "fg"},
    {"Patches of Fog", "fg"},
    {"Fog in Vicinity", "fg"},
    {"Freezing Fog in Vicinity", "fg"},
    {"Shallow Fog in Vicinity", "fg"},
    {"Partial Fog in Vicinity", "fg"},
    {"Patches of Fog in Vicinity", "fg"},
    {"Light Freezing Fog", "fg"},
    {"Heavy Freezing Fog", "fg"},
    {"Precipitation and Mist", "fg"},
};