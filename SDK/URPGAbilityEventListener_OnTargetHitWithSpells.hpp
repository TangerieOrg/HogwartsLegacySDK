#pragma once
#include <cstdint>
#include "FRPGHitTracker.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "HitTrackerTypes.hpp"
#include "URPGAbilityEventListener.hpp"
class AWandTool;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class URPGAbilityEventListener_OnTargetHitWithSpells : public URPGAbilityEventListener {
public:
    HitTrackerTypes TargetChainRule; // 0x98
    HitTrackerTypes SpellChainRule; // 0x99
    bool bResetOnBeingHit; // 0x9a
    bool bResetOnFailedSpell; // 0x9b
    float MaxTimeBetweenHits; // 0x9c
    bool bChanceBased; // 0xa0
    char pad_a1[0x3];
    int32_t NumRequiredHits; // 0xa4
    FRuntimeFloatCurve TriggerChance; // 0xa8
    char pad_130[0x8];
    TArray<FRPGHitTracker> TrackedHits; // 0x138
    AWandTool* Wand; // 0x148
    static URPGAbilityEventListener_OnTargetHitWithSpells* StaticClass();
    void OnDamageReceived(AActor* Target, AActor* Instigator, float Damage, FHitResult& Hit);
}; // Size: 0x150
#pragma pack(pop)
