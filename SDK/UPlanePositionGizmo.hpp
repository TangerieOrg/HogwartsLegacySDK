#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UInteractiveGizmo.hpp"
#pragma pack(push, 1)
class UPlanePositionGizmo : public UInteractiveGizmo {
public:
    char pad_38[0x50];
    bool bEnableSignedAxis; // 0x88
    bool bFlipX; // 0x89
    bool bFlipY; // 0x8a
    bool bInInteraction; // 0x8b
    FVector InteractionOrigin; // 0x8c
    FVector InteractionNormal; // 0x98
    FVector InteractionAxisX; // 0xa4
    FVector InteractionAxisY; // 0xb0
    FVector InteractionStartPoint; // 0xbc
    FVector InteractionCurPoint; // 0xc8
    FVector2D InteractionStartParameter; // 0xd4
    FVector2D InteractionCurParameter; // 0xdc
    FVector2D ParameterSigns; // 0xe4
    char pad_ec[0x14];
    static UPlanePositionGizmo* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
