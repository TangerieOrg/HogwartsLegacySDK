#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ERefractionMode : uint8_t {
    RM_IndexOfRefraction = 0,
    RM_PixelNormalOffset = 1,
    RM_MAX = 2,
};
#pragma pack(pop)
