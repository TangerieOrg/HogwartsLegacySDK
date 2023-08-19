#pragma once
#include <cstdint>
#include "ECRSimSoftCollisionType.hpp"
#include "EControlRigAnimEasingType.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FCRSimSoftCollision {
    FTransform Transform; // 0x0
    ECRSimSoftCollisionType ShapeType; // 0x30
    char pad_31[0x3];
    float MinimumDistance; // 0x34
    float MaximumDistance; // 0x38
    EControlRigAnimEasingType FalloffType; // 0x3c
    char pad_3d[0x3];
    float Coefficient; // 0x40
    bool bInverted; // 0x44
    char pad_45[0xb];
}; // Size: 0x50
#pragma pack(pop)
