#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENavDataGatheringModeConfig : uint8_t {
    Invalid = 0,
    Instant = 1,
    Lazy = 2,
    ENavDataGatheringModeConfig_MAX = 3,
};
#pragma pack(pop)
