#pragma once
#include <cstdint>
#include "FColor.hpp"
#pragma pack(push, 1)
struct FBasicLightBloomDescription {
    float BloomScale; // 0x0
    float BloomThreshold; // 0x4
    FColor BloomTint; // 0x8
}; // Size: 0xc
#pragma pack(pop)
