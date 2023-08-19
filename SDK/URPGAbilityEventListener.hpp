#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "URPGAbilityEventListener_Base.hpp"
class UGameplayPropertyMod;
class URPGTriggerEffect_Base;
class AActor;
class UGameplayModComponent;
class URPGAbilityComponent;
#pragma pack(push, 1)
class URPGAbilityEventListener : public URPGAbilityEventListener_Base {
public:
    bool bTriggerRandom; // 0x28
    char pad_29[0x3];
    float RandomTriggerChance; // 0x2c
    TArray<void*> Abilities; // 0x30
    TArray<UGameplayPropertyMod*> Mods; // 0x40
    TArray<URPGTriggerEffect_Base*> TriggerEffects; // 0x50
    AActor* OwnerActor; // 0x60
    TArray<FGuid> AbilityHandles; // 0x68
    UGameplayModComponent* ModComponent; // 0x78
    URPGAbilityComponent* AbilityComponent; // 0x80
    bool bTriggered; // 0x88
    char pad_89[0xf];
    static URPGAbilityEventListener* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
