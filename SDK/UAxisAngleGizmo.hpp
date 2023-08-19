#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UInteractiveGizmo.hpp"
#pragma pack(push, 1)
class UAxisAngleGizmo : public UInteractiveGizmo {
public:
    char pad_38[0x50];
    bool bInInteraction; // 0x88
    char pad_89[0x3];
    FVector RotationOrigin; // 0x8c
    FVector RotationAxis; // 0x98
    FVector RotationPlaneX; // 0xa4
    FVector RotationPlaneY; // 0xb0
    FVector InteractionStartPoint; // 0xbc
    FVector InteractionCurPoint; // 0xc8
    float InteractionStartAngle; // 0xd4
    float InteractionCurAngle; // 0xd8
    char pad_dc[0x14];
    static UAxisAngleGizmo* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
