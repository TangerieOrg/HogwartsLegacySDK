#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblRipApartTask : public UAblAbilityTask {
public:
    bool bReinitPose; // 0x70
    char pad_71[0xa7];
    TArray<FName> BodyLegSocketNames; // 0x118
    FName LegFxSocketName; // 0x128
    FGameplayTagContainer LegSocketParticleTags; // 0x130
    FGameplayTagContainer LegParticleTags; // 0x150
    float MinImpulse; // 0x170
    float MaxImpulse; // 0x174
    bool bSpawnActorInstead; // 0x178
    char pad_179[0x3];
    float LegLifetime; // 0x17c
    static UAblRipApartTask* StaticClass();
}; // Size: 0x180
#pragma pack(pop)
