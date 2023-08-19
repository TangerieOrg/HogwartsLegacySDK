#pragma once
#include <cstdint>
#include "FCameraShakeDuration.hpp"
#pragma pack(push, 1)
struct FCameraShakeInfo {
    FCameraShakeDuration Duration; // 0x0
    float BlendIn; // 0x8
    float BlendOut; // 0xc
}; // Size: 0x10
#pragma pack(pop)
