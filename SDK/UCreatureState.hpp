#pragma once
#include <cstdint>
#include "ECreatureNeed.hpp"
#include "ECreaturePregnancyState.hpp"
#include "FCreatureActivityThreshold.hpp"
#include "FDateTime.hpp"
#include "FTimespan.hpp"
#include "UObject.hpp"
class UCreatureDefinition;
#pragma pack(push, 1)
class UCreatureState : public UObject {
public:
    char pad_28[0x120];
    static UCreatureState* StaticClass();
    void SetIsUncapturable(bool bInIsUncapturable);
    void SetCanReturnToWild(bool bInCanReturnToWild);
    void OnHarvestByproduct(FName CollectorID);
    bool IsUnbornCreature();
    bool IsPregnant();
    bool IsNeedMet(ECreatureNeed CreatureNeed);
    bool IsInSanctuary();
    bool IsIncubating();
    bool IsInConflict();
    bool IsHappyEnoughToPlayWithToy();
    bool IsEgg();
    bool IsCreatureCaptured();
    bool IsByproductOnCooldown();
    bool IsAlbino();
    UCreatureState* GetUnbornChildState();
    FName GetTypeID();
    void GetTranslatedCreatureDisplayName();
    FTimespan GetTimeLeftToGrowUp();
    float GetScaleVariation();
    ECreaturePregnancyState GetPregnancyState();
    FDateTime GetPregnancyStartDateTime();
    int32_t GetPenUID();
    FName GetNurturingSpaceID();
    int32_t GetMotherUID();
    bool GetIsUncapturable();
    bool GetIsMount();
    bool GetIsMale();
    bool GetIsByproductReady();
    bool GetIsByproductHarvestableByPlayer(FString& OutErrorKey);
    FDateTime GetIncubationStartDateTime();
    FString GetIconString();
    FTimespan GetHatchingTimeRemaining();
    float GetHappinessCap();
    float GetHappiness();
    FTimespan GetGestationTimeRemaining();
    int32_t GetFatherUID();
    UCreatureDefinition* GetDefinition();
    int32_t GetCreatureUID();
    FString GetCreatureName();
    void GetCreatureDisplayName(FString& OutName, bool& OutIsLocalizationKey);
    FName GetColorVariation();
    bool GetCanReturnToWild();
    bool GetCanRename();
    FTimespan GetByproductCooldownTimeLeft();
    float GetByproductCooldownProgress();
    int32_t GetBreedingGeneration();
    FDateTime GetBirthDateTime();
    FString GetAdultIconString();
    TArray<FCreatureActivityThreshold> GetActivityThresholds();
    bool CanStartActivity();
    bool CanCreatureBreed(FString& ErrorMessage);
    bool AreAllNeedsMet();
}; // Size: 0x148
#pragma pack(pop)
