#pragma once
#include <cstdint>
#include "ECameraShakeDurationType.hpp"
#pragma pack(push, 1)
struct FCameraShakeDuration {
    float Duration; // 0x0
    ECameraShakeDurationType Type; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
