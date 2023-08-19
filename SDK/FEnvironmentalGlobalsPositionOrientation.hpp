#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FEnvironmentalGlobalsPositionOrientation {
    char pad_0[0x10];
    FVector Position; // 0x10
    char pad_1c[0x4];
    FQuat Rotation; // 0x20
    FVector Direction; // 0x30
    FVector Up; // 0x3c
    FVector Right; // 0x48
    char pad_54[0xc];
}; // Size: 0x60
#pragma pack(pop)
