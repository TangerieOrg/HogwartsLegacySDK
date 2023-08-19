#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMissionStatus : uint8_t {
    PreActive = 0,
    Activating = 1,
    Active = 2,
    PostActive = 3,
    Complete = 4,
    Failed = 5,
    Invalid = 6,
    Count = 7,
    EMissionStatus_MAX = 8,
};
#pragma pack(pop)
