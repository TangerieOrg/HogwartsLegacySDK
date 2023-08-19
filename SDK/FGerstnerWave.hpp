#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FGerstnerWave {
    float Amplitude; // 0x0
    float Wavelength; // 0x4
    FVector2D Direction; // 0x8
    float Phase; // 0x10
    float GravityMultiplier; // 0x14
}; // Size: 0x18
#pragma pack(pop)
