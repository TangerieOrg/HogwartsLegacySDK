#pragma once
#include <cstdint>
#include "URPGTriggerEffect_ActorDamaged.hpp"
class URPGTriggerEffect_Base;
#pragma pack(push, 1)
class URPGTriggerEffect_TriggerOnActorDamaged : public URPGTriggerEffect_ActorDamaged {
public:
    URPGTriggerEffect_Base* TriggerEffect; // 0x58
    static URPGTriggerEffect_TriggerOnActorDamaged* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
