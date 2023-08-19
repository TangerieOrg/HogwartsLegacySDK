#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UInventoryManager : public UObject {
public:
    char pad_28[0x1a0];
    static UInventoryManager* StaticClass();
    void Test_SetOffenseStat(FString GearID, FString Variation, int32_t Offense);
    void Test_SetDefenseStat(FString GearID, FString Variation, int32_t Defense);
    void Test_SetCooldownStat(FString GearID, FString Variation, int32_t Cooldown);
    void Test_GetGearEmptyTraitSlots(FString GearID, FString Variation);
    void Test_AddGearTrait(FString GearID, FString Variation, FString TraitID);
    void ResetInventory(FName CharacterID, FName HolderID, bool ResetKeepOnResetItems);
    void OnSaveGameLoaded();
    void LootContainerStats(FString ContainerID, int32_t iterations);
    void ItemConsumed__DelegateSignature(FName& InCharacterID, FName& InItemID);
    void InventoryUseItem(FString ItemId);
    void InventoryAddTool(FString ToolID);
    void InventoryAddHerbologyGear();
    void InventoryAddGenericGear();
    void InventoryAddGear(FString ItemId, FString Variation);
    void InventoryAddDadaGear();
    void InventoryAdd(FString ItemId, int32_t Quantity);
}; // Size: 0x1c8
#pragma pack(pop)
