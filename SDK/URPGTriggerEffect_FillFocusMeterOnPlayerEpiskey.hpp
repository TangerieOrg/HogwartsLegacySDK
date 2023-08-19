#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
class AActor;
#pragma pack(push, 1)
class URPGTriggerEffect_FillFocusMeterOnPlayerEpiskey : public URPGTriggerEffect_Base {
public:
    float HealthThresholdBefore; // 0x40
    float HealthToFocusRatio; // 0x44
    AActor* Owner; // 0x48
    static URPGTriggerEffect_FillFocusMeterOnPlayerEpiskey* StaticClass();
    void OnEpiskeyHealing(AActor* Instigator, float InHealthChange, AActor* TargetActor);
}; // Size: 0x50
#pragma pack(pop)
