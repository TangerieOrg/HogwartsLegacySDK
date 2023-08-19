#pragma once
#include <cstdint>
#include "URPGAbilityEventListener.hpp"
class AActor;
#pragma pack(push, 1)
class URPGAbilityEventListener_OnPlayerEpiskeyHealing : public URPGAbilityEventListener {
public:
    float HealthThresholdBefore; // 0x98
    char pad_9c[0x4];
    static URPGAbilityEventListener_OnPlayerEpiskeyHealing* StaticClass();
    void OnEpiskeyHealing(AActor* Instigator, float InHealthChange, AActor* TargetActor);
}; // Size: 0xa0
#pragma pack(pop)
