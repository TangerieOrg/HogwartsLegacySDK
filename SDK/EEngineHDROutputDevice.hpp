#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEngineHDROutputDevice {
    sRGB = 0,
    Rec709 = 1,
    ExplicitGammaMapping = 2,
    ACES1000nit_ST2084_DolbyPQ = 3,
    ACES2000nit_ST2084_DolbyPQ = 4,
    ACES1000nit_ScRGB = 5,
    ACES2000nit_ScRGB = 6,
    LinearEXR = 7,
    LinearFinalColor = 8,
    LinearFinalColorToneCurve = 9,
    ACES_SSST_ST2084_DolbyPQ = 10,
    ACES_SSTS_ScRGB = 11,
    EEngineHDROutputDevice_MAX = 12,
};
#pragma pack(pop)
