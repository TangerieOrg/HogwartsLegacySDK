#pragma once
#include <cstdint>
#include "EProductionStatus.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FSoftObjectPath.hpp"
#include "FTableRowBase.hpp"
#include "FWorldEventPersistenceInfo.hpp"
#include "FWorldEventTimeSpan.hpp"
class UWorldEventSocketPreview;
class UWorldEventCondition;
#pragma pack(push, 1)
struct FWorldEventDataRow : public FTableRowBase {
    FName WorldEventName; // 0x8
    EProductionStatus ProductionStatus; // 0x10
    char pad_11[0x7];
    FString EventDescription; // 0x18
    FSoftObjectPath WorldEvent; // 0x28
    int32_t NumberOfAllowedActiveInstances; // 0x40
    bool bPersistentEvent; // 0x44
    char pad_45[0x3];
    FWorldEventPersistenceInfo PersistenceInfo; // 0x48
    bool bRepeatable; // 0x50
    bool bCanSpawnAtLocationWithActivity; // 0x51
    char pad_52[0xe];
    FWorldEventTimeSpan EventCooldownTime; // 0x60
    bool bOverrideLocatorCooldown; // 0x70
    char pad_71[0x3];
    FWorldEventTimeSpan LocatorCooldownOverride; // 0x74
    bool bIgnoreStreamoutVolume; // 0x84
    bool bTestMinimumDistanceFromAnotherWorldEvent; // 0x85
    char pad_86[0x2];
    float MinimumDistanceFromAnotherWorldEvent; // 0x88
    int32_t PercentChanceOfBeingSelected; // 0x8c
    FGameplayTagContainer LocationRequiredDescriptors; // 0x90
    FGameplayTagContainer LocationDeniedDescriptors; // 0xb0
    FGameplayTag StartTriggerTag; // 0xd0
    UWorldEventSocketPreview* PreviewData; // 0xd8
    FSoftObjectPath PreviewLevel; // 0xe0
    TArray<UWorldEventCondition*> Conditions; // 0xf8
}; // Size: 0x108
#pragma pack(pop)
