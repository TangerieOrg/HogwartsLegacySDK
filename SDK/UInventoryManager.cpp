#include "UFunction.hpp"
#include "UInventoryManager.hpp"
#include "UObject.hpp"
void UInventoryManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UInventoryManager::Test_SetDefenseStat(FString GearID, FString Variation, int32_t Defense) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManager.Test_SetDefenseStat"));
    struct Params_Test_SetDefenseStat {
        FString GearID; // 0x0
        FString Variation; // 0x10
        int32_t Defense; // 0x20
    }; // Size: 0x24
    Params_Test_SetDefenseStat params{};
    params.GearID = (FString)GearID;
    params.Variation = (FString)Variation;
    params.Defense = (int32_t)Defense;
    ProcessEvent(func, &params);
}
UInventoryManager* UInventoryManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InventoryManager");
    return (UInventoryManager*)res;
}
void UInventoryManager::Test_SetOffenseStat(FString GearID, FString Variation, int32_t Offense) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManager.Test_SetOffenseStat"));
    struct Params_Test_SetOffenseStat {
        FString GearID; // 0x0
        FString Variation; // 0x10
        int32_t Offense; // 0x20
    }; // Size: 0x24
    Params_Test_SetOffenseStat params{};
    params.GearID = (FString)GearID;
    params.Variation = (FString)Variation;
    params.Offense = (int32_t)Offense;
    ProcessEvent(func, &params);
}
void UInventoryManager::Test_GetGearEmptyTraitSlots(FString GearID, FString Variation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManager.Test_GetGearEmptyTraitSlots"));
    struct Params_Test_GetGearEmptyTraitSlots {
        FString GearID; // 0x0
        FString Variation; // 0x10
    }; // Size: 0x20
    Params_Test_GetGearEmptyTraitSlots params{};
    params.GearID = (FString)GearID;
    params.Variation = (FString)Variation;
    ProcessEvent(func, &params);
}
void UInventoryManager::Test_SetCooldownStat(FString GearID, FString Variation, int32_t Cooldown) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManager.Test_SetCooldownStat"));
    struct Params_Test_SetCooldownStat {
        FString GearID; // 0x0
        FString Variation; // 0x10
        int32_t Cooldown; // 0x20
    }; // Size: 0x24
    Params_Test_SetCooldownStat params{};
    params.GearID = (FString)GearID;
    params.Variation = (FString)Variation;
    params.Cooldown = (int32_t)Cooldown;
    ProcessEvent(func, &params);
}
void UInventoryManager::Test_AddGearTrait(FString GearID, FString Variation, FString TraitID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManager.Test_AddGearTrait"));
    struct Params_Test_AddGearTrait {
        FString GearID; // 0x0
        FString Variation; // 0x10
        FString TraitID; // 0x20
    }; // Size: 0x30
    Params_Test_AddGearTrait params{};
    params.GearID = (FString)GearID;
    params.Variation = (FString)Variation;
    params.TraitID = (FString)TraitID;
    ProcessEvent(func, &params);
}
void UInventoryManager::InventoryAddTool(FString ToolID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManager.InventoryAddTool"));
    struct Params_InventoryAddTool {
        FString ToolID; // 0x0
    }; // Size: 0x10
    Params_InventoryAddTool params{};
    params.ToolID = (FString)ToolID;
    ProcessEvent(func, &params);
}
void UInventoryManager::ResetInventory(FName CharacterID, FName HolderID, bool ResetKeepOnResetItems) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManager.ResetInventory"));
    struct Params_ResetInventory {
        FName CharacterID; // 0x0
        FName HolderID; // 0x8
        bool ResetKeepOnResetItems; // 0x10
    }; // Size: 0x11
    Params_ResetInventory params{};
    params.CharacterID = (FName)CharacterID;
    params.HolderID = (FName)HolderID;
    params.ResetKeepOnResetItems = (bool)ResetKeepOnResetItems;
    ProcessEvent(func, &params);
}
void UInventoryManager::LootContainerStats(FString ContainerID, int32_t iterations) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManager.LootContainerStats"));
    struct Params_LootContainerStats {
        FString ContainerID; // 0x0
        int32_t iterations; // 0x10
    }; // Size: 0x14
    Params_LootContainerStats params{};
    params.ContainerID = (FString)ContainerID;
    params.iterations = (int32_t)iterations;
    ProcessEvent(func, &params);
}
void UInventoryManager::ItemConsumed__DelegateSignature(FName& InCharacterID, FName& InItemID) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.InventoryManager.ItemConsumed__DelegateSignature"));
    struct Params_ItemConsumed__DelegateSignature {
        FName InCharacterID; // 0x0
        FName InItemID; // 0x8
    }; // Size: 0x10
    Params_ItemConsumed__DelegateSignature params{};
    params.InCharacterID = (FName)InCharacterID;
    params.InItemID = (FName)InItemID;
    ProcessEvent(func, &params);
    InCharacterID = params.InCharacterID;
    InItemID = params.InItemID;
}
void UInventoryManager::InventoryUseItem(FString ItemId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManager.InventoryUseItem"));
    struct Params_InventoryUseItem {
        FString ItemId; // 0x0
    }; // Size: 0x10
    Params_InventoryUseItem params{};
    params.ItemId = (FString)ItemId;
    ProcessEvent(func, &params);
}
void UInventoryManager::InventoryAddHerbologyGear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManager.InventoryAddHerbologyGear"));
    struct Params_InventoryAddHerbologyGear {
    }; // Size: 0x0
    Params_InventoryAddHerbologyGear params{};
    ProcessEvent(func, &params);
}
void UInventoryManager::InventoryAddGenericGear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManager.InventoryAddGenericGear"));
    struct Params_InventoryAddGenericGear {
    }; // Size: 0x0
    Params_InventoryAddGenericGear params{};
    ProcessEvent(func, &params);
}
void UInventoryManager::InventoryAddGear(FString ItemId, FString Variation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManager.InventoryAddGear"));
    struct Params_InventoryAddGear {
        FString ItemId; // 0x0
        FString Variation; // 0x10
    }; // Size: 0x20
    Params_InventoryAddGear params{};
    params.ItemId = (FString)ItemId;
    params.Variation = (FString)Variation;
    ProcessEvent(func, &params);
}
void UInventoryManager::InventoryAddDadaGear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManager.InventoryAddDadaGear"));
    struct Params_InventoryAddDadaGear {
    }; // Size: 0x0
    Params_InventoryAddDadaGear params{};
    ProcessEvent(func, &params);
}
void UInventoryManager::InventoryAdd(FString ItemId, int32_t Quantity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManager.InventoryAdd"));
    struct Params_InventoryAdd {
        FString ItemId; // 0x0
        int32_t Quantity; // 0x10
    }; // Size: 0x14
    Params_InventoryAdd params{};
    params.ItemId = (FString)ItemId;
    params.Quantity = (int32_t)Quantity;
    ProcessEvent(func, &params);
}
