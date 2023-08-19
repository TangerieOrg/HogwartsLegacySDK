#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENavDataGatheringMode : uint8_t {
    Default = 0,
    Instant = 1,
    Lazy = 2,
    ENavDataGatheringMode_MAX = 3,
};
#pragma pack(pop)
