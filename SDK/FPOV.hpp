#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FPOV {
    FVector Location; // 0x0
    FRotator Rotation; // 0xc
    float FOV; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
