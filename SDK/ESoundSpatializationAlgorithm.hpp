#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ESoundSpatializationAlgorithm : uint8_t {
    SPATIALIZATION_Default = 0,
    SPATIALIZATION_HRTF = 1,
    SPATIALIZATION_MAX = 2,
};
#pragma pack(pop)
