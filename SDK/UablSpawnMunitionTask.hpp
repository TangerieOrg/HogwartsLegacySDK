#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UClass;
#pragma pack(push, 1)
class UablSpawnMunitionTask : public UAblAbilityTask {
public:
    UClass* MunitionClass; // 0x70
    bool bUseSelfActorAsInstigator; // 0x78
    bool bUseSelfActorAsMunitionOwner; // 0x79
    char pad_7a[0x6];
    static UablSpawnMunitionTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
