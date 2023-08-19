#pragma once
#include <cstdint>
#include "FSoftObjectPath.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UCreatureSettings : public UObject {
public:
    float HappinessThresholdForPerkConsideration; // 0x28
    float HappinessStartValueWhenCaptured; // 0x2c
    float HappinessStartValue1stGeneration; // 0x30
    float HappinessStartValue2ndGeneration; // 0x34
    float HappinessCapWhenCaptured; // 0x38
    float HappinessCap1stGeneration; // 0x3c
    float HappinessCap2ndGeneration; // 0x40
    float HappinessGainedWhenFed; // 0x44
    float HappinessGainedWhenInteractedWith; // 0x48
    float HappinessGainedWhenByproductHarvested; // 0x4c
    float MinTimeBetweenHappinessChangesFromDamage; // 0x50
    char pad_54[0x4];
    TArray<float> HappinessForConsecutiveDamage; // 0x58
    float TimeoutForConsecutiveDamageReset; // 0x68
    float HappinessForNeighborDeath; // 0x6c
    float ConflictPreventedDurationSeconds; // 0x70
    FName ByproductProductionLock; // 0x74
    FName ByproductCollectionLock; // 0x7c
    FName NurturingSpaceContextLock; // 0x84
    float FemaleEconomyValuePercent; // 0x8c
    float AlbinoEconomyValuePercent; // 0x90
    float CommonColorVariationEconomyValuePercent; // 0x94
    float HappinessEconomyValuePercent; // 0x98
    int32_t RepopulationTimeHour; // 0x9c
    int32_t RepopulationExpiryTimeMinutes; // 0xa0
    char pad_a4[0x54];
    FName CreatureFeedItemID; // 0xf8
    int32_t DefaultFeedConversionTimeSec; // 0x100
    FName DefaultToyID; // 0x104
    float PreferredGroundSlopeAngleMax; // 0x10c
    float PreferredDistanceToPathMin; // 0x110
    char pad_114[0x4];
    TArray<FSoftObjectPath> PreloadedAssetPaths; // 0x118
    static UCreatureSettings* StaticClass();
}; // Size: 0x128
#pragma pack(pop)
