#pragma once
#include <cstdint>
#include "FAlphaBlend.hpp"
#include "FVector2D.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablJumpAdjustTask : public UAblAbilityTask {
public:
    FVector2D NormalLandingOffset; // 0x70
    FVector2D IdealKneeLandingOffset; // 0x78
    FVector2D IdealWaistLandingOffset; // 0x80
    FVector2D IdealHandLandingOffset; // 0x88
    float MaximumLedgeHeight; // 0x90
    bool bLimitMaxImpulse; // 0x94
    char pad_95[0x3];
    float MaxImpulse; // 0x98
    char pad_9c[0x4];
    FAlphaBlend BlendIn; // 0xa0
    bool bDebugDrawEnabled; // 0xd0
    char pad_d1[0x7];
    static UablJumpAdjustTask* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
