#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsNPC : public UFXAutoTriggerRequiredActorsBase {
public:
    TArray<FName> ExcludeActorTags; // 0x28
    bool bExcludePlayerCompanions; // 0x38
    bool bExcludePlayerLeadNPC; // 0x39
    char pad_3a[0x6];
    static UFXAutoTriggerRequiredActorsNPC* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
