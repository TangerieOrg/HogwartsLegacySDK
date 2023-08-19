#pragma once
#include <cstdint>
#include "ETimedAbilityUnit.hpp"
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_AddAbility : public URPGTriggerEffect_Base {
public:
    char pad_40[0x28];
    ETimedAbilityUnit DurationUnit; // 0x68
    char pad_69[0x3];
    float Duration; // 0x6c
    bool bUseIngameSimulationTime; // 0x70
    bool bResetOnDayEnd; // 0x71
    char pad_72[0x6];
    static URPGTriggerEffect_AddAbility* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
