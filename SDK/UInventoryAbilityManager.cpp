#include "AActor.hpp"
#include "UFunction.hpp"
#include "UInventoryAbilityManager.hpp"
#include "UObject.hpp"
void UInventoryAbilityManager::SetPolyJuiceCharacter(FName PolyJuiceCharacterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryAbilityManager.SetPolyJuiceCharacter"));
    struct Params_SetPolyJuiceCharacter {
        FName PolyJuiceCharacterName; // 0x0
    }; // Size: 0x8
    Params_SetPolyJuiceCharacter params{};
    params.PolyJuiceCharacterName = (FName)PolyJuiceCharacterName;
    ProcessEvent(func, &params);
}
UInventoryAbilityManager* UInventoryAbilityManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InventoryAbilityManager");
    return (UInventoryAbilityManager*)res;
}
void UInventoryAbilityManager::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryAbilityManager.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
void UInventoryAbilityManager::OnGameToBeLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryAbilityManager.OnGameToBeLoaded"));
    struct Params_OnGameToBeLoaded {
    }; // Size: 0x0
    Params_OnGameToBeLoaded params{};
    ProcessEvent(func, &params);
}
void UInventoryAbilityManager::AddWellRestedToPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryAbilityManager.AddWellRestedToPlayer"));
    struct Params_AddWellRestedToPlayer {
    }; // Size: 0x0
    Params_AddWellRestedToPlayer params{};
    ProcessEvent(func, &params);
}
void UInventoryAbilityManager::AddWellFedToPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryAbilityManager.AddWellFedToPlayer"));
    struct Params_AddWellFedToPlayer {
    }; // Size: 0x0
    Params_AddWellFedToPlayer params{};
    ProcessEvent(func, &params);
}
FName UInventoryAbilityManager::GetPolyJuiceCharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryAbilityManager.GetPolyJuiceCharacter"));
    struct Params_GetPolyJuiceCharacter {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPolyJuiceCharacter params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UInventoryAbilityManager::AddHouseLeaderToPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryAbilityManager.AddHouseLeaderToPlayer"));
    struct Params_AddHouseLeaderToPlayer {
    }; // Size: 0x0
    Params_AddHouseLeaderToPlayer params{};
    ProcessEvent(func, &params);
}
float UInventoryAbilityManager::GetItemeffectivenessMultiplier(AActor* OwnerActor, FName ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryAbilityManager.GetItemeffectivenessMultiplier"));
    struct Params_GetItemeffectivenessMultiplier {
        AActor* OwnerActor; // 0x0
        FName ItemName; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetItemeffectivenessMultiplier params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.ItemName = (FName)ItemName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UInventoryAbilityManager::AddPermenantWellFedToPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryAbilityManager.AddPermenantWellFedToPlayer"));
    struct Params_AddPermenantWellFedToPlayer {
    }; // Size: 0x0
    Params_AddPermenantWellFedToPlayer params{};
    ProcessEvent(func, &params);
}
float UInventoryAbilityManager::GetCurrentEffectivenessMultiplier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryAbilityManager.GetCurrentEffectivenessMultiplier"));
    struct Params_GetCurrentEffectivenessMultiplier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentEffectivenessMultiplier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UInventoryAbilityManager::AddSocialNotorietyToPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryAbilityManager.AddSocialNotorietyToPlayer"));
    struct Params_AddSocialNotorietyToPlayer {
    }; // Size: 0x0
    Params_AddSocialNotorietyToPlayer params{};
    ProcessEvent(func, &params);
}
void UInventoryAbilityManager::AddSocialInfamousToPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryAbilityManager.AddSocialInfamousToPlayer"));
    struct Params_AddSocialInfamousToPlayer {
    }; // Size: 0x0
    Params_AddSocialInfamousToPlayer params{};
    ProcessEvent(func, &params);
}
void UInventoryAbilityManager::AddPermenantWellRestedToPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryAbilityManager.AddPermenantWellRestedToPlayer"));
    struct Params_AddPermenantWellRestedToPlayer {
    }; // Size: 0x0
    Params_AddPermenantWellRestedToPlayer params{};
    ProcessEvent(func, &params);
}
void UInventoryAbilityManager::AddOrRefreshAbility(AActor* OwnerActor, FName ItemName, FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryAbilityManager.AddOrRefreshAbility"));
    struct Params_AddOrRefreshAbility {
        AActor* OwnerActor; // 0x0
        FName ItemName; // 0x8
        FName Name; // 0x10
    }; // Size: 0x18
    Params_AddOrRefreshAbility params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.ItemName = (FName)ItemName;
    params.Name = (FName)Name;
    ProcessEvent(func, &params);
}
