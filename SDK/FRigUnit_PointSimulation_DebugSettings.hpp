#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_PointSimulation_DebugSettings {
    bool bEnabled; // 0x0
    char pad_1[0x3];
    float Scale; // 0x4
    float CollisionScale; // 0x8
    bool bDrawPointsAsSpheres; // 0xc
    char pad_d[0x3];
    FLinearColor Color; // 0x10
    FTransform WorldOffset; // 0x20
}; // Size: 0x50
#pragma pack(pop)
