#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolIsSpecificNPC : public UFXAutoTriggerBool {
public:
    FDbSingleColumnInfo NPCKey; // 0x28
    FName NPCKeyName; // 0xb0
    static UFXAutoTriggerBoolIsSpecificNPC* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
