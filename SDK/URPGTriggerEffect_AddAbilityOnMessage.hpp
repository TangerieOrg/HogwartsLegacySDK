#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
class AActor;
#pragma pack(push, 1)
class URPGTriggerEffect_AddAbilityOnMessage : public URPGTriggerEffect_Base {
public:
    FString HermesMessage; // 0x40
    char pad_50[0x28];
    float LifeTime; // 0x78
    bool bUseIngameSimulationTime; // 0x7c
    char pad_7d[0xb];
    AActor* Owner; // 0x88
    static URPGTriggerEffect_AddAbilityOnMessage* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
