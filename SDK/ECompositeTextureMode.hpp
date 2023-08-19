#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ECompositeTextureMode {
    CTM_Disabled = 0,
    CTM_NormalRoughnessToRed = 1,
    CTM_NormalRoughnessToGreen = 2,
    CTM_NormalRoughnessToBlue = 3,
    CTM_NormalRoughnessToAlpha = 4,
    CTM_MAX = 5,
};
#pragma pack(pop)
