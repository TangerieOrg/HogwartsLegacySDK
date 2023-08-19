#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UInteractiveGizmo.hpp"
#pragma pack(push, 1)
class UAxisPositionGizmo : public UInteractiveGizmo {
public:
    char pad_38[0x50];
    bool bEnableSignedAxis; // 0x88
    bool bInInteraction; // 0x89
    char pad_8a[0x2];
    FVector InteractionOrigin; // 0x8c
    FVector InteractionAxis; // 0x98
    FVector InteractionStartPoint; // 0xa4
    FVector InteractionCurPoint; // 0xb0
    float InteractionStartParameter; // 0xbc
    float InteractionCurParameter; // 0xc0
    float ParameterSign; // 0xc4
    char pad_c8[0x10];
    static UAxisPositionGizmo* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
