#pragma once
#include <cstdint>
#include "UAblTaskConditionScratchpad.hpp"
class UActorComponent;
#pragma pack(push, 1)
class UAblTaskConditionScratchpad_DamageOverTime : public UAblTaskConditionScratchpad {
public:
    char pad_30[0x10];
    static UAblTaskConditionScratchpad_DamageOverTime* StaticClass();
    void OnDoT_End(UActorComponent* ActorComp);
}; // Size: 0x40
#pragma pack(pop)
