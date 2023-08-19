#pragma once
#include <cstdint>
#include "FFinisherData.hpp"
#include "FGameplayTag.hpp"
class UClass;
#pragma pack(push, 1)
struct FFinisherRequirementData {
    TArray<FFinisherData> KillAbilities; // 0x0
    TArray<FFinisherData> NoKillAbilities; // 0x10
    TArray<UClass*> MultiVFXAbilities; // 0x20
    bool bRequireMinDistance; // 0x30
    char pad_31[0x3];
    float MinDistance; // 0x34
    bool bRequireMaxDistance; // 0x38
    char pad_39[0x3];
    float MaxDistance; // 0x3c
    bool bMustBeOnGround; // 0x40
    bool bMustBeInAir; // 0x41
    bool bMustBeArmed; // 0x42
    char pad_43[0x5];
    TArray<FName> RequiredSpellUnlocks; // 0x48
    FGameplayTag FinisherFilterTag; // 0x58
}; // Size: 0x60
#pragma pack(pop)
