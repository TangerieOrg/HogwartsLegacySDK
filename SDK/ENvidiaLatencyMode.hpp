#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENvidiaLatencyMode : uint8_t {
    Off = 0,
    LowLatency = 1,
    LowLatencyWithBoost = 2,
    ENvidiaLatencyMode_MAX = 3,
};
#pragma pack(pop)
