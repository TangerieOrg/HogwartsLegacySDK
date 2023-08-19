#pragma once
#include <cstdint>
#include "EInventoryChangeReason.hpp"
#include "EInventoryObjectType.hpp"
#include "EStolenType.hpp"
#include "FInventoryFilter.hpp"
#include "FInventoryResult.hpp"
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UInventoryManagerInterface : public UObject {
public:
    static UInventoryManagerInterface* StaticClass();
    static bool UseItemByName(FName CharacterID, FName ItemId, FName Variation);
    static bool UseItem(FName CharacterID, FInventoryResult InventoryResult);
    static bool TransferItemToPlayerInventoryBP(FInventoryResult TransferItem, int32_t AmountToTransfer);
    static bool TransferItemToContainerBP(FInventoryResult ItemToTransfer, FName CharacterID, FName HolderID, int32_t AmountToTransfer);
    static void SetPlayerExpandedInventoryBP(int32_t newInventoryAmount);
    static bool SellItemFromPlayerInventoryBP(FInventoryResult TransferItem, int32_t SoldCount, FName VendorName, int32_t& OutKnutsEarned);
    static void ResetInventory(FName CharacterID, FName HolderID);
    static bool IsAbilityActive(AActor* Actor, FName AbilityName);
    static bool HasAnyInventory(FName CharacterID, FName HolderID);
    static TArray<FName> GetQuestItems();
    static TArray<FName> GetPlayerUnlimitedHolders();
    static int32_t GetPlayerStolenItemCount();
    static TArray<FName> GetPlayerLimitedHolders();
    static int32_t GetPlayerExpandedInventoryBP();
    static int32_t GetPlayerAvailableCapacity(FName ItemId, bool UseMaxCapacityWhenNoReturnExcess);
    static FName GetItemInventoryFullString(FName ItemId);
    static bool GetIsInspectableBP(FString ItemId);
    static void GetInventoryTypesBP(TArray<FName>& InventoryTypeArray);
    static void GetInventoryTextBP(FName InCharacterID, FName InItemTypeID, TArray<FInventoryResult>& InventoryResultArray, FInventoryFilter InventoryFilter, FName HolderID, bool SkipLockedItems, bool SpecifiedHolderOnly);
    static int32_t GetInventorySellPriceBP(FName CharacterID, FName HolderID);
    static int32_t GetHolderMaxSlotsBP(FName HolderID);
    static FName GetHolderInventoryFullString(FName HolderID);
    static int32_t GetCount(FName CharacterID, FName InventoryObjectID, EInventoryObjectType InventoryObjectType, EStolenType StolenType, FName HolderID, FName Variation);
    static int32_t GetCost(FName InventoryObjectID, FName Variation);
    static int32_t GetContainerMaxSlotsBP(FName ContainerID);
    static bool DropItemBP(FInventoryResult ItemToDrop, int32_t AmountToDrop);
    static int32_t CanAddItem(FName CharacterID, FName ItemId, FName HolderID, FName Variation, int32_t Count);
    static int32_t AdjustCount(FName CharacterID, FName InventoryObjectID, int32_t Delta, EInventoryChangeReason Reason, FName HolderID, FName Variation, bool SuppressHUDNotification, bool SpecialHUDNotification, FName OtherCharacterID, bool IsUnique, bool IsStolen, bool KeepOnReset);
}; // Size: 0x28
#pragma pack(pop)
