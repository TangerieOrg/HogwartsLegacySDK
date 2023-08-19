#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStreamingPlaceholderPriority : uint8_t {
    HardLoad = 0,
    High = 1,
    Normal = 2,
    EStreamingPlaceholderPriority_MAX = 3,
};
#pragma pack(pop)
