#pragma once
#include <cstdint>
#include "FTimespan.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UCreatureDefinition : public UObject {
public:
    char pad_28[0xb8];
    static UCreatureDefinition* StaticClass();
    bool IsOffspring();
    bool IsEggLaying();
    bool IsEgg();
    bool IsAdult();
    FName GetTypeID();
    FTimespan GetPregnancyDuration();
    FName GetPreferredToyID();
    float GetPlayWithToyHappinessPercentage();
    bool GetOnlyCapturableWhenNearDeathKneeling();
    FName GetOffspringCreatureTypeID();
    int32_t GetNumCapturingGates();
    bool GetIsCarnivore();
    bool GetIsAggressive();
    FTimespan GetHatchingDuration();
    FName GetEggTypeID();
    TArray<FName> GetConflictTypeIDs();
    int32_t GetCompletedYearForCapture();
    FTimespan GetChildhoodDuration();
    float GetCapturingTime();
    int32_t GetCapturingDistanceMax();
    bool GetCanBeCaptured();
    FName GetByproductID();
    int32_t GetByproductHarvestCount();
    float GetByproductCooldownTimeSec();
    int32_t GetBaseEconomyValue();
    FName GetAdultCreatureTypeID();
    FName GetAchievementForCapturing();
}; // Size: 0xe0
#pragma pack(pop)
