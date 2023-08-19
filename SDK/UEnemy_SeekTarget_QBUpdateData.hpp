#pragma once
#include <cstdint>
#include "UEnemy_QBUpdateData.hpp"
#pragma pack(push, 1)
class UEnemy_SeekTarget_QBUpdateData : public UEnemy_QBUpdateData {
public:
    float IdleTriggerTime; // 0x30
    float NoAttackTriggerTime; // 0x34
    float Timeout; // 0x38
    char pad_3c[0x4];
    static UEnemy_SeekTarget_QBUpdateData* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
