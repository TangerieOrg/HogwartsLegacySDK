#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
class AActor;
class UObject;
#pragma pack(push, 1)
class URPGTriggerEffect_OnEpiskey : public URPGTriggerEffect_Base {
public:
    float HealthThresholdBefore; // 0x40
    float HealthThresholdAfter; // 0x44
    AActor* Owner; // 0x48
    char pad_50[0x8];
    static URPGTriggerEffect_OnEpiskey* StaticClass();
    void OnHealing(UObject* i_caller, float InHealthChange);
}; // Size: 0x58
#pragma pack(pop)
