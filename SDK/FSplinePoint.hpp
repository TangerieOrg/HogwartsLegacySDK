#pragma once
#include <cstdint>
#include "ESplinePointType\Type.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSplinePoint {
    float InputKey; // 0x0
    FVector Position; // 0x4
    FVector ArriveTangent; // 0x10
    FVector LeaveTangent; // 0x1c
    FRotator Rotation; // 0x28
    FVector Scale; // 0x34
    ESplinePointType::Type Type; // 0x40
    char pad_41[0x3];
}; // Size: 0x44
#pragma pack(pop)
