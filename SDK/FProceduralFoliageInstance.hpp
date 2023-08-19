#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FVector.hpp"
class UFoliageType;
#pragma pack(push, 1)
struct FProceduralFoliageInstance {
    FQuat Rotation; // 0x0
    FVector Location; // 0x10
    float Age; // 0x1c
    FVector Normal; // 0x20
    float Scale; // 0x2c
    UFoliageType* Type; // 0x30
    char pad_38[0x18];
}; // Size: 0x50
#pragma pack(pop)
