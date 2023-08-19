#pragma once
#include <cstdint>
#include "EEnemy_ProtegoLevel.hpp"
class UMultiFX2_Base;
class UCurveFloat;
#pragma pack(push, 1)
struct FProtegoEffectsData {
    TArray<EEnemy_ProtegoLevel> ShieldTypes; // 0x0
    TArray<UMultiFX2_Base*> ShieldActivateFX2; // 0x10
    TArray<UMultiFX2_Base*> ShieldLoopFX2; // 0x20
    TArray<UMultiFX2_Base*> ShieldIntensityFX2; // 0x30
    TArray<UMultiFX2_Base*> ShieldDeactivateFX2; // 0x40
    TArray<UMultiFX2_Base*> ShieldWandLoopFX2; // 0x50
    TArray<UMultiFX2_Base*> ShieldHitFX2; // 0x60
    TArray<UMultiFX2_Base*> ShieldFailedFX2; // 0x70
    UCurveFloat* EffectRampInCurve; // 0x80
    FName ShieldSkinEffectName; // 0x88
    float ProtegoShieldFxDelay; // 0x90
    char pad_94[0x4];
}; // Size: 0x98
#pragma pack(pop)
