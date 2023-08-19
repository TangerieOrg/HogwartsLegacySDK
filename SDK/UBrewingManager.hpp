#pragma once
#include <cstdint>
#include "FBrewingRecipe.hpp"
#include "FGameplayProperty_Float.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UBrewingManager : public UObject {
public:
    char pad_28[0x68];
    FGameplayProperty_Float BrewTimeMultiplier; // 0x90
    char pad_120[0x60];
    static UBrewingManager* StaticClass();
    void UnlockAllPotionRecipes();
    void OnSaveGameLoaded();
    void OnNewGame();
    void OnGameToBeSaved();
    float GetBrewTimeMultiplier();
    TArray<FName> GetBrewingUICategories();
    void GetBrewingRecipes(TArray<FBrewingRecipe>& AvailableRecipes, TArray<FBrewingRecipe>& LockedRecipes);
    void GetAllPotions(int32_t AmountToGrant);
    void GetAllPotionIngredients(int32_t AmountToGrant);
    static UBrewingManager* BP_Get();
    static bool AreOwnedIngredientsEnough(FBrewingRecipe& BrewingRecipe);
}; // Size: 0x180
#pragma pack(pop)
