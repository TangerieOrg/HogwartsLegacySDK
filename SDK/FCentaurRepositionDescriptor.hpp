#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FCentaurRepositionDescriptor {
    FVector2D RepositionToTargetRange; // 0x0
    FVector2D HoldPositionTargetRange; // 0x8
    float IdealTargetRange; // 0x10
    FVector2D HeadingToTargetRange; // 0x14
    float RepositionTimeout; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
