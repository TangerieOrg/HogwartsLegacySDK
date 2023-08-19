#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsBase.hpp"
class UFXAutoTriggerCustomCompaninonBuilder;
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsCompanionNPC : public UFXAutoTriggerRequiredActorsBase {
public:
    TArray<UFXAutoTriggerCustomCompaninonBuilder*> CustomCompaninonBuilders; // 0x28
    bool bIncludePlayerLeadNPC; // 0x38
    char pad_39[0x7];
    static UFXAutoTriggerRequiredActorsCompanionNPC* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
