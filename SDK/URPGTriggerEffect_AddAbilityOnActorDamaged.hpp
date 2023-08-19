#pragma once
#include <cstdint>
#include "URPGTriggerEffect_ActorDamaged.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_AddAbilityOnActorDamaged : public URPGTriggerEffect_ActorDamaged {
public:
    char pad_58[0x28];
    float LifeTime; // 0x80
    bool bUseIngameSimulationTime; // 0x84
    char pad_85[0x3];
    static URPGTriggerEffect_AddAbilityOnActorDamaged* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
