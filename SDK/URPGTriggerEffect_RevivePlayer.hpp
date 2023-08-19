#pragma once
#include <cstdint>
#include "URPGTriggerEffect_ActorDamaged.hpp"
class URPGTriggerEffect_Base;
class UClass;
class UUserWidget;
#pragma pack(push, 1)
class URPGTriggerEffect_RevivePlayer : public URPGTriggerEffect_ActorDamaged {
public:
    float FadeDelay; // 0x58
    float Delay; // 0x5c
    float RestoreFadeTime; // 0x60
    float Cooldown; // 0x64
    float invulnerableTime; // 0x68
    float RestorePercentHealth; // 0x6c
    URPGTriggerEffect_Base* TriggerEffect; // 0x70
    UClass* UserWidgetSubclass; // 0x78
    char pad_80[0x20];
    UUserWidget* UserWidget; // 0xa0
    static URPGTriggerEffect_RevivePlayer* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
