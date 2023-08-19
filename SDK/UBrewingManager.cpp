#include "FBrewingRecipe.hpp"
#include "FGameplayProperty_Float.hpp"
#include "UBrewingManager.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UBrewingManager::OnNewGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingManager.OnNewGame"));
    struct Params_OnNewGame {
    }; // Size: 0x0
    Params_OnNewGame params{};
    ProcessEvent(func, &params);
}
UBrewingManager* UBrewingManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BrewingManager");
    return (UBrewingManager*)res;
}
void UBrewingManager::UnlockAllPotionRecipes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingManager.UnlockAllPotionRecipes"));
    struct Params_UnlockAllPotionRecipes {
    }; // Size: 0x0
    Params_UnlockAllPotionRecipes params{};
    ProcessEvent(func, &params);
}
void UBrewingManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UBrewingManager::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingManager.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
float UBrewingManager::GetBrewTimeMultiplier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingManager.GetBrewTimeMultiplier"));
    struct Params_GetBrewTimeMultiplier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBrewTimeMultiplier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UBrewingManager::GetBrewingRecipes(TArray<FBrewingRecipe>& AvailableRecipes, TArray<FBrewingRecipe>& LockedRecipes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingManager.GetBrewingRecipes"));
    struct Params_GetBrewingRecipes {
        TArray<FBrewingRecipe> AvailableRecipes; // 0x0
        TArray<FBrewingRecipe> LockedRecipes; // 0x10
    }; // Size: 0x20
    Params_GetBrewingRecipes params{};
    params.AvailableRecipes = (TArray<FBrewingRecipe>)AvailableRecipes;
    params.LockedRecipes = (TArray<FBrewingRecipe>)LockedRecipes;
    ProcessEvent(func, &params);
    AvailableRecipes = params.AvailableRecipes;
    LockedRecipes = params.LockedRecipes;
}
TArray<FName> UBrewingManager::GetBrewingUICategories() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingManager.GetBrewingUICategories"));
    struct Params_GetBrewingUICategories {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetBrewingUICategories params{};
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
void UBrewingManager::GetAllPotions(int32_t AmountToGrant) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingManager.GetAllPotions"));
    struct Params_GetAllPotions {
        int32_t AmountToGrant; // 0x0
    }; // Size: 0x4
    Params_GetAllPotions params{};
    params.AmountToGrant = (int32_t)AmountToGrant;
    ProcessEvent(func, &params);
}
void UBrewingManager::GetAllPotionIngredients(int32_t AmountToGrant) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingManager.GetAllPotionIngredients"));
    struct Params_GetAllPotionIngredients {
        int32_t AmountToGrant; // 0x0
    }; // Size: 0x4
    Params_GetAllPotionIngredients params{};
    params.AmountToGrant = (int32_t)AmountToGrant;
    ProcessEvent(func, &params);
}
UBrewingManager* UBrewingManager::BP_Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingManager.BP_Get"));
    struct Params_BP_Get {
        UBrewingManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_BP_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UBrewingManager*)params.ReturnValue;
}
bool UBrewingManager::AreOwnedIngredientsEnough(FBrewingRecipe& BrewingRecipe) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingManager.AreOwnedIngredientsEnough"));
    struct Params_AreOwnedIngredientsEnough {
        FBrewingRecipe BrewingRecipe; // 0x0
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_AreOwnedIngredientsEnough params{};
    params.BrewingRecipe = (FBrewingRecipe)BrewingRecipe;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BrewingRecipe = params.BrewingRecipe;
    return (bool)params.ReturnValue;
}
