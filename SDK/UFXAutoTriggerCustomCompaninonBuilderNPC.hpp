#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "UFXAutoTriggerCustomCompaninonBuilder.hpp"
class UFXAutoTriggerBool;
#pragma pack(push, 1)
class UFXAutoTriggerCustomCompaninonBuilderNPC : public UFXAutoTriggerCustomCompaninonBuilder {
public:
    char pad_28[0x28];
    UFXAutoTriggerBool* Rule; // 0x50
    FDbSingleColumnInfo NPCKey; // 0x58
    FName NPCKeyName; // 0xe0
    static UFXAutoTriggerCustomCompaninonBuilderNPC* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
