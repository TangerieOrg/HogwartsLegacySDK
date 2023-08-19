#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UClass;
#pragma pack(push, 1)
class UablCentaurSpawnMunitionTask : public UAblAbilityTask {
public:
    UClass* EquipArrowClass; // 0x70
    UClass* MunitionClass; // 0x78
    FName ArrowSocketName; // 0x80
    float MunitionSocketOffsetX; // 0x88
    FName BlackboardTargetActorKeyName; // 0x8c
    bool bTrackTargetLocation; // 0x94
    char pad_95[0x3];
    static UablCentaurSpawnMunitionTask* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
