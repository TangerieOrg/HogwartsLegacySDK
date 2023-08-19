#pragma once
#include <cstdint>
#include "EOverlapEffectsHandlerConditionLogic.hpp"
class UFXAutoTriggerBool;
#pragma pack(push, 1)
struct FOverlapEffectsHandlerConditions {
    UFXAutoTriggerBool* InstigatorCondition; // 0x0
    UFXAutoTriggerBool* VictimCondition; // 0x8
    EOverlapEffectsHandlerConditionLogic Logic; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
