#pragma once
#include <cstdint>
#include "FCentaurRepositionDescriptor.hpp"
#include "FGameplayTagContainer.hpp"
#include "UActorComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UCentaurCombatComponent : public UActorComponent {
public:
    FCentaurRepositionDescriptor RepositionDescriptor; // 0xc8
    char pad_e8[0x50];
    bool bUseStanceVariation; // 0x138
    char pad_139[0x3];
    float StanceVariationAPercentage; // 0x13c
    FGameplayTagContainer AAStanceTags_A; // 0x140
    FGameplayTagContainer AAStanceTags_B; // 0x160
    FGameplayTagContainer IAStanceTags_A; // 0x180
    FGameplayTagContainer IAStanceTags_B; // 0x1a0
    TArray<AActor*> PerceivedCombatTargets; // 0x1c0
    char pad_1d0[0x8];
    static UCentaurCombatComponent* StaticClass();
    bool IsUsingStanceA();
}; // Size: 0x1d8
#pragma pack(pop)
