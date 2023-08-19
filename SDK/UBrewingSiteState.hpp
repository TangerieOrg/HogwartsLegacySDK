#pragma once
#include <cstdint>
#include "EBrewingState.hpp"
#include "FRecipeIngredient.hpp"
#include "FTimespan.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UBrewingSiteState : public UObject {
public:
    char pad_28[0xa0];
    static UBrewingSiteState* StaticClass();
    void InstantlyCompleteBrewing();
    int32_t GetUncollectedYield();
    int32_t GetRecipeYield();
    TArray<FRecipeIngredient> GetRecipeIngredients();
    FName GetPotionID();
    FName GetOutputItemID();
    bool GetIsInSanctuary();
    bool GetHasInventorySpaceToCollectPotion(FName CollectorID, int32_t& OutYieldLeft);
    FTimespan GetBrewingTimeRemaining();
    EBrewingState GetBrewingState();
    float GetBrewingProgressRatio();
}; // Size: 0xc8
#pragma pack(pop)
