#pragma once
#include <cstdint>
#include "FEnvironmentalGlobalsPositionOrientation.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FEnvironmentalGlobalsPositionOrientationVelocity : public FEnvironmentalGlobalsPositionOrientation {
    char pad_60[0x4];
    FVector VelocityDir; // 0x64
    float Speed; // 0x70
    char pad_74[0xc];
}; // Size: 0x80
#pragma pack(pop)
