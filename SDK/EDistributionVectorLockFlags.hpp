#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EDistributionVectorLockFlags : uint8_t {
    EDVLF_None = 0,
    EDVLF_XY = 1,
    EDVLF_XZ = 2,
    EDVLF_YZ = 3,
    EDVLF_XYZ = 4,
    EDVLF_MAX = 5,
};
#pragma pack(pop)
