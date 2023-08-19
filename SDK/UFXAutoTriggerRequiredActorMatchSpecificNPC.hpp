#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorMatchSpecificNPC : public UFXAutoTriggerRequiredActorsMatchBase {
public:
    FDbSingleColumnInfo NPCKey; // 0x28
    FName NPCKeyName; // 0xb0
    static UFXAutoTriggerRequiredActorMatchSpecificNPC* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
