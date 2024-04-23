// *****************************************************************************
// * Copyright (c) 2020, 2021, 2022 joshua.tee@gmail.com. All rights reserved.
// *
// * Refer to the COPYING file of the official project for license.
// *****************************************************************************

#include "util/WfoSites.h"

const unordered_map<string, string> WfoSites::wfoSiteToLat{
    {"ABC", "60.79278"},
    {"ABQ", "35.1027"},
    {"ABR", "45.45583"},
    {"ABX", "35.14972"},
    {"ACG", "56.85278"},
    {"AEC", "64.51139"},
    {"AFC", "61.2060"},
    {"AFG", "64.8396"},
    {"AHG", "60.725914"},
    {"AIH", "59.46194"},
    {"AJK", "58.3023"},
    {"AKC", "58.67944"},
    {"AKQ", "36.98389"},
    {"ALY", "42.6825"},
    {"AMA", "35.23333"},
    {"AMX", "25.61056"},
    {"APD", "65.03556"},
    {"APX", "44.90722"},
    {"ARX", "43.82278"},
    {"ATX", "48.19472"},
    {"BBX", "39.49611"},
    {"BGM", "42.19972"},
    {"BHX", "40.49833"},
    {"BIS", "46.77083"},
    {"BLX", "45.85389"},
    {"BMX", "33.17194"},
    {"BOI", "43.5994"},
    {"BOU", "40.0107"},
    {"BOX", "41.95583"},
    {"BRO", "25.91556"},
    {"BTV", "44.4686"},
    {"BUF", "42.94861"},
    {"BYX", "24.59694"},
    {"BYZ", "45.7778"},
    {"CAE", "33.94861"},
    {"CAR", "46.85897"},
    {"CBW", "46.03917"},
    {"CBX", "43.49083"},
    {"CCX", "40.92306"},
    {"CHS", "32.7942"},
    {"CLE", "41.41306"},
    {"CLX", "32.65556"},
    {"CRI", "35.2383"},
    {"CRP", "27.78389"},
    {"CTP", "40.7878"},
    {"CXX", "44.51111"},
    {"CYS", "41.15194"},
    {"DAX", "38.50111"},
    {"DDC", "37.76083"},
    {"DFX", "29.2725"},
    {"DGX", "32.28"},
    {"DIX", "39.94694"},
    {"DLH", "46.83694"},
    {"DMX", "41.73111"},
    {"DOX", "38.82556"},
    {"DTX", "42.69972"},
    {"DVN", "41.61167"},
    {"DYX", "32.53833"},
    {"EAX", "38.81028"},
    {"EKA", "40.7852"},
    {"EMX", "31.89361"},
    {"ENX", "42.58639"},
    {"EOX", "31.46028"},
    {"EPZ", "31.87306"},
    {"ESX", "35.70111"},
    {"EVX", "30.56417"},
    {"EWX", "29.70361"},
    {"EYX", "35.09778"},
    {"FCX", "37.02417"},
    {"FDR", "34.36222"},
    {"FDX", "34.63528"},
    {"FFC", "33.36333"},
    {"FGF", "47.9069"},
    {"FGZ", "35.19502"},
    {"FSD", "43.58778"},
    {"FSX", "34.57444"},
    {"FTG", "39.78667"},
    {"FWD", "32.6963"},
    {"FWS", "32.57278"},
    {"GGW", "48.20639"},
    {"GID", "40.9114"},
    {"GJT", "39.0836"},
    {"GJX", "39.06222"},
    {"GLD", "39.36694"},
    {"GRB", "44.49833"},
    {"GRK", "30.72167"},
    {"GRR", "42.89389"},
    {"GSP", "34.88306"},
    {"GUA", "13.45444"},
    {"GUM", "13.484"},
    {"GWX", "33.89667"},
    {"GYX", "43.89139"},
    {"HDX", "33.07639"},
    {"HFO", "21.30256"},
    {"HGX", "29.47194"},
    {"HKI", "21.89417"},
    {"HKM", "20.12556"},
    {"HMO", "21.13278"},
    {"HNX", "36.31417"},
    {"HPX", "36.73667"},
    {"HTX", "34.93056"},
    {"HUN", "34.6448"},
    {"HWA", "19.095"},
    {"ICT", "37.65444"},
    {"ICX", "37.59083"},
    {"ILM", "39.2072"},
    {"ILN", "39.42028"},
    {"ILX", "40.15056"},
    {"IND", "39.7075"},
    {"INX", "36.175"},
    {"IWA", "33.28917"},
    {"IWX", "41.40861"},
    {"JAN", "32.3104"},
    {"JAX", "30.48444"},
    {"JGX", "32.675"},
    {"JKL", "37.59083"},
    {"JUA", "18.1175"},
    {"KEY", "24.5627"},
    {"KJK", "35.92417"},
    {"KSG", "36.95972"},
    {"LBB", "33.65417"},
    {"LBF", "41.1431"},
    {"LCH", "30.125"},
    {"LGX", "47.1158"},
    {"LIX", "30.33667"},
    {"LKN", "40.8396"},
    {"LMK", "38.1722"},
    {"LNX", "41.95778"},
    {"LOT", "41.60444"},
    {"LOX", "34.206965"},
    {"LRX", "40.73972"},
    {"LSX", "38.69889"},
    {"LTX", "33.98917"},
    {"LUB", "33.5850"},
    {"LVX", "37.97528"},
    {"LWX", "38.97628"},
    {"LZK", "34.83639"},
    {"MAF", "31.94333"},
    {"MAX", "42.08111"},
    {"MBX", "48.3925"},
    {"MEG", "35.1491"},
    {"MFL", "25.7744"},
    {"MFR", "42.3294"},
    {"MHX", "34.77583"},
    {"MKX", "42.96778"},
    {"MLB", "28.11306"},
    {"MOB", "30.67944"},
    {"MPX", "44.84889"},
    {"MQT", "46.53111"},
    {"MRX", "36.16833"},
    {"MSO", "46.8685"},
    {"MSX", "47.04111"},
    {"MTR", "37.7213"},
    {"MTX", "41.26278"},
    {"MUX", "37.15528"},
    {"MVX", "47.52806"},
    {"MXX", "32.53667"},
    {"NKX", "32.91889"},
    {"NQA", "35.34472"},
    {"OAX", "41.32028"},
    {"ODN", "26.30194"},
    {"OHX", "36.24722"},
    {"OKX", "40.86556"},
    {"OTX", "47.68056"},
    {"OUN", "35.4449"},
    {"PAH", "37.06833"},
    {"PBZ", "40.53167"},
    {"PDT", "45.69056"},
    {"PHI", "39.9754"},
    {"PIH", "42.8947"},
    {"PLA", "38.73028"},
    {"POE", "31.15528"},
    {"PQR", "45.5031"},
    {"PSR", "33.4050"},
    {"PUB", "38.2641"},
    {"PUX", "38.45944"},
    {"RAH", "35.77399"},
    {"RAX", "35.66528"},
    {"REV", "39.5223"},
    {"RGX", "39.75417"},
    {"RIW", "43.06611"},
    {"RLX", "38.31194"},
    {"RNK", "37.2283"},
    {"RTX", "45.715"},
    {"SEW", "47.4724"},
    {"SFX", "43.10583"},
    {"SGF", "37.23528"},
    {"SGX", "32.7416"},
    {"SHV", "32.45056"},
    {"SJT", "31.37111"},
    {"SJU", "18.4129"},
    {"SLC", "40.7482"},
    {"SOX", "33.81778"},
    {"SRX", "35.29056"},
    {"STO", "38.5678"},
    {"TAE", "30.4293"},
    {"TBW", "27.70528"},
    {"TFX", "47.45972"},
    {"TLH", "30.3975"},
    {"TLX", "35.33306"},
    {"TOP", "39.0134"},
    {"TSA", "36.0961"},
    {"TWC", "32.1965"},
    {"TWX", "38.99694"},
    {"TYX", "43.75583"},
    {"UDX", "44.125"},
    {"UEX", "40.32083"},
    {"UNR", "44.0734"},
    {"VAX", "30.89"},
    {"VBX", "34.83806"},
    {"VEF", "36.1273"},
    {"VNX", "36.74083"},
    {"VTX", "34.41167"},
    {"VWX", "38.26"},
    {"YUX", "32.49528"}
};

const unordered_map<string, string> WfoSites::wfoSiteToLon{
    {"ABC", "-161.87417"},
    {"ABQ", "-106.6276"},
    {"ABR", "-98.41306"},
    {"ABX", "-106.82333"},
    {"ACG", "-135.52917"},
    {"AEC", "-165.295"},
    {"AFC", "-149.7855"},
    {"AFG", "-147.7434"},
    {"AHG", "-151.35146"},
    {"AIH", "-146.30111"},
    {"AJK", "-134.4139"},
    {"AKC", "-156.62944"},
    {"AKQ", "-77.0075"},
    {"ALY", "-73.7899"},
    {"AMA", "-101.70889"},
    {"AMX", "-80.41306"},
    {"APD", "-147.49917"},
    {"APX", "-84.71972"},
    {"ARX", "-91.19111"},
    {"ATX", "-122.49444"},
    {"BBX", "-121.63167"},
    {"BGM", "-75.985"},
    {"BHX", "-124.29194"},
    {"BIS", "-100.76028"},
    {"BLX", "-108.60611"},
    {"BMX", "-86.76972"},
    {"BOI", "-116.2645"},
    {"BOU", "-105.2584"},
    {"BOX", "-71.1375"},
    {"BRO", "-97.41861"},
    {"BTV", "-73.1901"},
    {"BUF", "-78.73694"},
    {"BYX", "-81.70333"},
    {"BYZ", "-108.5429"},
    {"CAE", "-81.11861"},
    {"CAR", "-68.01895"},
    {"CBW", "-67.80694"},
    {"CBX", "-116.23444"},
    {"CCX", "-78.00389"},
    {"CHS", "-79.9419"},
    {"CLE", "-81.86"},
    {"CLX", "-81.04222"},
    {"CRI", "-97.4602"},
    {"CRP", "-97.51083"},
    {"CTP", "-77.8526"},
    {"CXX", "-73.16639"},
    {"CYS", "-104.80611"},
    {"DAX", "-121.67667"},
    {"DDC", "-99.96833"},
    {"DFX", "-100.28028"},
    {"DGX", "-89.98444"},
    {"DIX", "-74.41111"},
    {"DLH", "-92.20972"},
    {"DMX", "-93.72278"},
    {"DOX", "-75.44"},
    {"DTX", "-83.47167"},
    {"DVN", "-90.58083"},
    {"DYX", "-99.25417"},
    {"EAX", "-94.26417"},
    {"EKA", "-124.1540"},
    {"EMX", "-110.63028"},
    {"ENX", "-74.06444"},
    {"EOX", "-85.45944"},
    {"EPZ", "-106.6975"},
    {"ESX", "-114.89139"},
    {"EVX", "-85.92139"},
    {"EWX", "-98.02806"},
    {"EYX", "-117.56"},
    {"FCX", "-80.27417"},
    {"FDR", "-98.97611"},
    {"FDX", "-103.62944"},
    {"FFC", "-84.56583"},
    {"FGF", "-97.0602"},
    {"FGZ", "-111.65310"},
    {"FSD", "-96.72889"},
    {"FSX", "-111.19833"},
    {"FTG", "-104.54528"},
    {"FWD", "-97.0827"},
    {"FWS", "-97.30278"},
    {"GGW", "-106.62417"},
    {"GID", "-98.3601"},
    {"GJT", "-108.5638"},
    {"GJX", "-108.21306"},
    {"GLD", "-101.7"},
    {"GRB", "-88.11111"},
    {"GRK", "-97.38278"},
    {"GRR", "-85.54472"},
    {"GSP", "-82.22028"},
    {"GUA", "144.80833"},
    {"GUM", "144.7967"},
    {"GWX", "-88.32889"},
    {"GYX", "-70.25694"},
    {"HDX", "-106.12222"},
    {"HFO", "-157.84428"},
    {"HGX", "-95.07889"},
    {"HKI", "-159.55222"},
    {"HKM", "-155.77778"},
    {"HMO", "-157.18"},
    {"HNX", "-119.63111"},
    {"HPX", "-87.285"},
    {"HTX", "-86.08361"},
    {"HUN", "-86.6672"},
    {"HWA", "-155.56889"},
    {"ICT", "-97.4425"},
    {"ICX", "-112.86222"},
    {"ILM", "-77.8719"},
    {"ILN", "-83.82167"},
    {"ILX", "-89.33667"},
    {"IND", "-86.28028"},
    {"INX", "-95.56444"},
    {"IWA", "-111.66917"},
    {"IWX", "-85.7"},
    {"JAN", "-90.1890"},
    {"JAX", "-81.70194"},
    {"JGX", "-83.35111"},
    {"JKL", "-83.31306"},
    {"JUA", "-66.07861"},
    {"KEY", "-81.7724"},
    {"KJK", "126.62222"},
    {"KSG", "127.01833"},
    {"LBB", "-101.81361"},
    {"LBF", "-100.7710"},
    {"LCH", "-93.21583"},
    {"LGX", "-124.1069"},
    {"LIX", "-89.82528"},
    {"LKN", "-115.7587"},
    {"LMK", "-85.7162"},
    {"LNX", "-100.57583"},
    {"LOT", "-88.08472"},
    {"LOX", "-119.1385678"},
    {"LRX", "-116.80278"},
    {"LSX", "-90.68278"},
    {"LTX", "-78.42917"},
    {"LUB", "-101.8904"},
    {"LVX", "-85.94389"},
    {"LWX", "-77.48751"},
    {"LZK", "-92.26194"},
    {"MAF", "-102.18889"},
    {"MAX", "-122.71611"},
    {"MBX", "-100.86444"},
    {"MEG", "-90.0151"},
    {"MFL", "-80.1937"},
    {"MFR", "-122.8524"},
    {"MHX", "-76.87639"},
    {"MKX", "-88.55056"},
    {"MLB", "-80.65444"},
    {"MOB", "-88.23972"},
    {"MPX", "-93.56528"},
    {"MQT", "-87.54833"},
    {"MRX", "-83.40194"},
    {"MSO", "-114.0090"},
    {"MSX", "-113.98611"},
    {"MTR", "-122.4369"},
    {"MTX", "-112.44694"},
    {"MUX", "-121.8975"},
    {"MVX", "-97.325"},
    {"MXX", "-85.78972"},
    {"NKX", "-117.04194"},
    {"NQA", "-89.87333"},
    {"OAX", "-96.36639"},
    {"ODN", "127.90972"},
    {"OHX", "-86.5625"},
    {"OKX", "-72.86444"},
    {"OTX", "-117.62583"},
    {"OUN", "-97.5219"},
    {"PAH", "-88.77194"},
    {"PBZ", "-80.21833"},
    {"PDT", "-118.85278"},
    {"PHI", "-75.1386"},
    {"PIH", "-112.4420"},
    {"PLA", "-27.32167"},
    {"POE", "-92.97583"},
    {"PQR", "-122.6251"},
    {"PSR", "-112.0325"},
    {"PUB", "-104.61483"},
    {"PUX", "-104.18139"},
    {"RAH", "-78.64008"},
    {"RAX", "-78.49"},
    {"REV", "-119.8127"},
    {"RGX", "-119.46111"},
    {"RIW", "-108.47667"},
    {"RLX", "-81.72389"},
    {"RNK", "-80.4212"},
    {"RTX", "-122.96417"},
    {"SEW", "-122.3141"},
    {"SFX", "-112.68528"},
    {"SGF", "-93.40028"},
    {"SGX", "-117.1294"},
    {"SHV", "-93.84111"},
    {"SJT", "-100.49222"},
    {"SJU", "-66.0989"},
    {"SLC", "-111.9155"},
    {"SOX", "-117.635"},
    {"SRX", "-94.36167"},
    {"STO", "-121.5007"},
    {"TAE", "-84.2906"},
    {"TBW", "-82.40194"},
    {"TFX", "-111.38444"},
    {"TLH", "-84.32889"},
    {"TLX", "-97.2775"},
    {"TOP", "-95.7071"},
    {"TSA", "-95.9419"},
    {"TWC", "-110.9025"},
    {"TWX", "-96.2325"},
    {"TYX", "-75.68"},
    {"UDX", "-102.82944"},
    {"UEX", "-98.44167"},
    {"UNR", "-103.2259"},
    {"VAX", "-83.00194"},
    {"VBX", "-120.39583"},
    {"VEF", "-115.1712"},
    {"VNX", "-98.1275"},
    {"VTX", "-119.17861"},
    {"VWX", "-87.7247"},
    {"YUX", "-114.65583"}
};