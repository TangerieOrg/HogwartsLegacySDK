#pragma once
#include <cstdint>
#include "APawn.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
class UAISenseConfig;
class APerceptionPointArea;
#pragma pack(push, 1)
class APerceptionPoint : public APawn {
public:
    FGameplayTag GroupTag; // 0x2a8
    FGameplayTagContainer GroupTagContainer; // 0x2b0
    bool bEnabled; // 0x2d0
    bool bGameEventEnabled; // 0x2d1
    char pad_2d2[0x2];
    int32_t Priority; // 0x2d4
    bool bTargetShareEnabled; // 0x2d8
    bool bPlayerPP; // 0x2d9
    char pad_2da[0x6];
    TArray<UAISenseConfig*> SensesConfig; // 0x2e0
    TArray<APerceptionPointArea*> AttackDistanceScaleAreaList; // 0x2f0
    char pad_300[0x60];
    static APerceptionPoint* StaticClass();
    static void EnablePerception(bool bEnable, TArray<APerceptionPoint*> PerceptionPointList);
    void Enable(bool bEnable);
    void AttackDistanceScaleVolume(float InScale, TArray<APerceptionPointArea*> InAreaList);
}; // Size: 0x360
#pragma pack(pop)
