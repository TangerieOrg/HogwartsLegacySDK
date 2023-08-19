#pragma once
#include <cstdint>
#include "URPGTriggerEffect_ProtegoReflectAttack.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_ProtegoTriggerAbility : public URPGTriggerEffect_ProtegoReflectAttack {
public:
    char pad_50[0x28];
    float LifeTime; // 0x78
    bool bUseIngameSimulationTime; // 0x7c
    char pad_7d[0x3];
    static URPGTriggerEffect_ProtegoTriggerAbility* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
