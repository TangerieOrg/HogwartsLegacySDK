#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EIndirectLightingCacheQuality : uint8_t {
    ILCQ_Off = 0,
    ILCQ_Point = 1,
    ILCQ_Volume = 2,
    ILCQ_MAX = 3,
};
#pragma pack(pop)
