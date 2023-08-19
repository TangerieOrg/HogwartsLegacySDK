#pragma once
#include <cstdint>
#include "FFXAutoTriggerFXSpawnInfo.hpp"
#include "UFXAutoTriggerCondition.hpp"
class UFXAutoTriggerBool;
#pragma pack(push, 1)
class UFXAutoTriggerConditionBool : public UFXAutoTriggerCondition {
public:
    UFXAutoTriggerBool* Condition; // 0x30
    FFXAutoTriggerFXSpawnInfo SpawnInfo; // 0x38
    bool bUseSpawnInfo; // 0x60
    char pad_61[0x7];
    static UFXAutoTriggerConditionBool* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
