#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEngineHDRColorGamut {
    Rec709_sRGB = 0,
    DCI_P3 = 1,
    Rec2020_BT2020 = 2,
    ACES = 3,
    ACEScg = 4,
    EEngineHDRColorGamut_MAX = 5,
};
#pragma pack(pop)
