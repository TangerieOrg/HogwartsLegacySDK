#pragma once
#include <cstdint>
#include "FBox2D.hpp"
#include "FVector2D.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStackSecondaryTargetGetter;
#pragma pack(push, 1)
class UCameraStackBehaviorMoveToKeepInFrame : public UCameraStackBehaviorBlend {
public:
    FBox2D ScreenArea; // 0x1b8
    char pad_1cc[0x4];
    TArray<UCameraStackSecondaryTargetGetter*> Targets; // 0x1d0
    bool bConsiderTargetBounds; // 0x1e0
    bool bTruck; // 0x1e1
    bool bPedestal; // 0x1e2
    char pad_1e3[0x1];
    FVector2D DollyLimits; // 0x1e4
    FVector2D TruckLimits; // 0x1ec
    FVector2D PedestalLimits; // 0x1f4
    bool bUseUnblendedStackValues; // 0x1fc
    char pad_1fd[0x1b];
    static UCameraStackBehaviorMoveToKeepInFrame* StaticClass();
}; // Size: 0x218
#pragma pack(pop)
