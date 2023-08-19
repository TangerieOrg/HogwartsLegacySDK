#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EDepthOfFieldFunctionValue : uint8_t {
    TDOF_NearAndFarMask = 0,
    TDOF_NearMask = 1,
    TDOF_FarMask = 2,
    TDOF_CircleOfConfusionRadius = 3,
    TDOF_MAX = 4,
};
#pragma pack(pop)
