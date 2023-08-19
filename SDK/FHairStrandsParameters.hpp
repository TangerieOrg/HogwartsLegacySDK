#pragma once
#include <cstdint>
#include "EGroomStrandsSize.hpp"
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FHairStrandsParameters {
    EGroomStrandsSize StrandsSize; // 0x0
    char pad_1[0x3];
    float StrandsDensity; // 0x4
    float StrandsSmoothing; // 0x8
    float StrandsThickness; // 0xc
    FRuntimeFloatCurve ThicknessScale; // 0x10
}; // Size: 0x98
#pragma pack(pop)
