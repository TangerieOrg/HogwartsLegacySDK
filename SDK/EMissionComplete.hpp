#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMissionComplete : uint8_t {
    Complete = 0,
    NotComplete = 1,
    EMissionComplete_MAX = 2,
};
#pragma pack(pop)
