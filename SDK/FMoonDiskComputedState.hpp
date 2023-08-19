#pragma once
#include <cstdint>
#include "FMoonDiskState.hpp"
#pragma pack(push, 1)
struct FMoonDiskComputedState {
    FMoonDiskState State; // 0x0
    float Distance; // 0x58
    float Size; // 0x5c
    float Brightness; // 0x60
    float Earthshine; // 0x64
    float MoonCosineRadius; // 0x68
}; // Size: 0x6c
#pragma pack(pop)
