#pragma once
#include <cstdint>
#include "UObject.hpp"
class UTriggerEffect;
#pragma pack(push, 1)
class UTriggerEffectManager : public UObject {
public:
    char pad_28[0x8];
    UTriggerEffect* InactiveTriggerEffect; // 0x30
    TArray<UTriggerEffect*> TriggerEffectStack; // 0x38
    static UTriggerEffectManager* StaticClass();
    void ResumeTriggerEffects();
    void PauseTriggerEffects();
    void DeactivateTriggerEffect(UTriggerEffect* TriggerEffect, int32_t ControllerId);
    void ActivateTriggerEffect(UTriggerEffect* TriggerEffect, int32_t ControllerId);
}; // Size: 0x48
#pragma pack(pop)
