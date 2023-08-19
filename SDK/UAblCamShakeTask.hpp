#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
class UClass;
class UAblTaskCondition;
#pragma pack(push, 1)
class UAblCamShakeTask : public UAblAbilityTask {
public:
    UClass* Shake; // 0x70
    float InnerRadius; // 0x78
    float OuterRadius; // 0x7c
    FVector epicenter; // 0x80
    float Falloff; // 0x8c
    bool bUseActorPositionAsEpicenter; // 0x90
    bool bOrientShakeTowardsEpicenter; // 0x91
    bool bPlayerOnly; // 0x92
    char pad_93[0x5];
    TArray<UAblTaskCondition*> Conditions; // 0x98
    bool bMustPassAllConditions; // 0xa8
    char pad_a9[0x7];
    static UAblCamShakeTask* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
