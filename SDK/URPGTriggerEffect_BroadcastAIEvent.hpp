#pragma once
#include <cstdint>
#include "EGameEvent_Intensity.hpp"
#include "FGameplayTagContainer.hpp"
#include "FMultiFX.hpp"
#include "URPGTriggerEffect_Base.hpp"
class AActor;
class UMultiFX2_Base;
#pragma pack(push, 1)
class URPGTriggerEffect_BroadcastAIEvent : public URPGTriggerEffect_Base {
public:
    AActor* Owner; // 0x40
    FGameplayTagContainer EventTags; // 0x48
    EGameEvent_Intensity EventIntensity; // 0x68
    char pad_69[0x3];
    float Duration; // 0x6c
    float Range; // 0x70
    float TriggerChance; // 0x74
    FMultiFX TriggerFX; // 0x78
    TArray<UMultiFX2_Base*> TriggerFX2; // 0xa8
    static URPGTriggerEffect_BroadcastAIEvent* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
