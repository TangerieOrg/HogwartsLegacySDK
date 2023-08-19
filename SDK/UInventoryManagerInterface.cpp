#include "AActor.hpp"
#include "EInventoryChangeReason.hpp"
#include "EInventoryObjectType.hpp"
#include "EStolenType.hpp"
#include "FInventoryFilter.hpp"
#include "FInventoryResult.hpp"
#include "UFunction.hpp"
#include "UInventoryManagerInterface.hpp"
#include "UObject.hpp"
int32_t UInventoryManagerInterface::GetHolderMaxSlotsBP(FName HolderID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetHolderMaxSlotsBP"));
    struct Params_GetHolderMaxSlotsBP {
        FName HolderID; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetHolderMaxSlotsBP params{};
    params.HolderID = (FName)HolderID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UInventoryManagerInterface* UInventoryManagerInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InventoryManagerInterface");
    return (UInventoryManagerInterface*)res;
}
bool UInventoryManagerInterface::UseItemByName(FName CharacterID, FName ItemId, FName Variation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.UseItemByName"));
    struct Params_UseItemByName {
        FName CharacterID; // 0x0
        FName ItemId; // 0x8
        FName Variation; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_UseItemByName params{};
    params.CharacterID = (FName)CharacterID;
    params.ItemId = (FName)ItemId;
    params.Variation = (FName)Variation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UInventoryManagerInterface::GetHolderInventoryFullString(FName HolderID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetHolderInventoryFullString"));
    struct Params_GetHolderInventoryFullString {
        FName HolderID; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetHolderInventoryFullString params{};
    params.HolderID = (FName)HolderID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UInventoryManagerInterface::SetPlayerExpandedInventoryBP(int32_t newInventoryAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.SetPlayerExpandedInventoryBP"));
    struct Params_SetPlayerExpandedInventoryBP {
        int32_t newInventoryAmount; // 0x0
    }; // Size: 0x4
    Params_SetPlayerExpandedInventoryBP params{};
    params.newInventoryAmount = (int32_t)newInventoryAmount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UInventoryManagerInterface::UseItem(FName CharacterID, FInventoryResult InventoryResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.UseItem"));
    struct Params_UseItem {
        FName CharacterID; // 0x0
        FInventoryResult InventoryResult; // 0x8
        bool ReturnValue; // 0x90
    }; // Size: 0x91
    Params_UseItem params{};
    params.CharacterID = (FName)CharacterID;
    params.InventoryResult = (FInventoryResult)InventoryResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UInventoryManagerInterface::GetCount(FName CharacterID, FName InventoryObjectID, EInventoryObjectType InventoryObjectType, EStolenType StolenType, FName HolderID, FName Variation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetCount"));
    struct Params_GetCount {
        FName CharacterID; // 0x0
        FName InventoryObjectID; // 0x8
        EInventoryObjectType InventoryObjectType; // 0x10
        EStolenType StolenType; // 0x11
        char pad_12[0x2];
        FName HolderID; // 0x14
        FName Variation; // 0x1c
        int32_t ReturnValue; // 0x24
    }; // Size: 0x28
    Params_GetCount params{};
    params.CharacterID = (FName)CharacterID;
    params.InventoryObjectID = (FName)InventoryObjectID;
    params.InventoryObjectType = (EInventoryObjectType)InventoryObjectType;
    params.StolenType = (EStolenType)StolenType;
    params.HolderID = (FName)HolderID;
    params.Variation = (FName)Variation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UInventoryManagerInterface::SellItemFromPlayerInventoryBP(FInventoryResult TransferItem, int32_t SoldCount, FName VendorName, int32_t& OutKnutsEarned) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.SellItemFromPlayerInventoryBP"));
    struct Params_SellItemFromPlayerInventoryBP {
        FInventoryResult TransferItem; // 0x0
        int32_t SoldCount; // 0x88
        FName VendorName; // 0x8c
        int32_t OutKnutsEarned; // 0x94
        bool ReturnValue; // 0x98
    }; // Size: 0x99
    Params_SellItemFromPlayerInventoryBP params{};
    params.TransferItem = (FInventoryResult)TransferItem;
    params.SoldCount = (int32_t)SoldCount;
    params.VendorName = (FName)VendorName;
    params.OutKnutsEarned = (int32_t)OutKnutsEarned;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutKnutsEarned = params.OutKnutsEarned;
    return (bool)params.ReturnValue;
}
void UInventoryManagerInterface::GetInventoryTextBP(FName InCharacterID, FName InItemTypeID, TArray<FInventoryResult>& InventoryResultArray, FInventoryFilter InventoryFilter, FName HolderID, bool SkipLockedItems, bool SpecifiedHolderOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetInventoryTextBP"));
    struct Params_GetInventoryTextBP {
        FName InCharacterID; // 0x0
        FName InItemTypeID; // 0x8
        TArray<FInventoryResult> InventoryResultArray; // 0x10
        FInventoryFilter InventoryFilter; // 0x20
        FName HolderID; // 0x50
        bool SkipLockedItems; // 0x58
        bool SpecifiedHolderOnly; // 0x59
    }; // Size: 0x5a
    Params_GetInventoryTextBP params{};
    params.InCharacterID = (FName)InCharacterID;
    params.InItemTypeID = (FName)InItemTypeID;
    params.InventoryResultArray = (TArray<FInventoryResult>)InventoryResultArray;
    params.InventoryFilter = (FInventoryFilter)InventoryFilter;
    params.HolderID = (FName)HolderID;
    params.SkipLockedItems = (bool)SkipLockedItems;
    params.SpecifiedHolderOnly = (bool)SpecifiedHolderOnly;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InventoryResultArray = params.InventoryResultArray;
}
bool UInventoryManagerInterface::TransferItemToPlayerInventoryBP(FInventoryResult TransferItem, int32_t AmountToTransfer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.TransferItemToPlayerInventoryBP"));
    struct Params_TransferItemToPlayerInventoryBP {
        FInventoryResult TransferItem; // 0x0
        int32_t AmountToTransfer; // 0x88
        bool ReturnValue; // 0x8c
    }; // Size: 0x8d
    Params_TransferItemToPlayerInventoryBP params{};
    params.TransferItem = (FInventoryResult)TransferItem;
    params.AmountToTransfer = (int32_t)AmountToTransfer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FName> UInventoryManagerInterface::GetPlayerUnlimitedHolders() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetPlayerUnlimitedHolders"));
    struct Params_GetPlayerUnlimitedHolders {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPlayerUnlimitedHolders params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
bool UInventoryManagerInterface::TransferItemToContainerBP(FInventoryResult ItemToTransfer, FName CharacterID, FName HolderID, int32_t AmountToTransfer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.TransferItemToContainerBP"));
    struct Params_TransferItemToContainerBP {
        FInventoryResult ItemToTransfer; // 0x0
        FName CharacterID; // 0x88
        FName HolderID; // 0x90
        int32_t AmountToTransfer; // 0x98
        bool ReturnValue; // 0x9c
    }; // Size: 0x9d
    Params_TransferItemToContainerBP params{};
    params.ItemToTransfer = (FInventoryResult)ItemToTransfer;
    params.CharacterID = (FName)CharacterID;
    params.HolderID = (FName)HolderID;
    params.AmountToTransfer = (int32_t)AmountToTransfer;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UInventoryManagerInterface::ResetInventory(FName CharacterID, FName HolderID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.ResetInventory"));
    struct Params_ResetInventory {
        FName CharacterID; // 0x0
        FName HolderID; // 0x8
    }; // Size: 0x10
    Params_ResetInventory params{};
    params.CharacterID = (FName)CharacterID;
    params.HolderID = (FName)HolderID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UInventoryManagerInterface::IsAbilityActive(AActor* Actor, FName AbilityName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.IsAbilityActive"));
    struct Params_IsAbilityActive {
        AActor* Actor; // 0x0
        FName AbilityName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsAbilityActive params{};
    params.Actor = (AActor*)Actor;
    params.AbilityName = (FName)AbilityName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UInventoryManagerInterface::HasAnyInventory(FName CharacterID, FName HolderID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.HasAnyInventory"));
    struct Params_HasAnyInventory {
        FName CharacterID; // 0x0
        FName HolderID; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_HasAnyInventory params{};
    params.CharacterID = (FName)CharacterID;
    params.HolderID = (FName)HolderID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FName> UInventoryManagerInterface::GetQuestItems() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetQuestItems"));
    struct Params_GetQuestItems {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetQuestItems params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
int32_t UInventoryManagerInterface::GetPlayerStolenItemCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetPlayerStolenItemCount"));
    struct Params_GetPlayerStolenItemCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayerStolenItemCount params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
TArray<FName> UInventoryManagerInterface::GetPlayerLimitedHolders() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetPlayerLimitedHolders"));
    struct Params_GetPlayerLimitedHolders {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPlayerLimitedHolders params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
int32_t UInventoryManagerInterface::GetPlayerExpandedInventoryBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetPlayerExpandedInventoryBP"));
    struct Params_GetPlayerExpandedInventoryBP {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayerExpandedInventoryBP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UInventoryManagerInterface::GetPlayerAvailableCapacity(FName ItemId, bool UseMaxCapacityWhenNoReturnExcess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetPlayerAvailableCapacity"));
    struct Params_GetPlayerAvailableCapacity {
        FName ItemId; // 0x0
        bool UseMaxCapacityWhenNoReturnExcess; // 0x8
        char pad_9[0x3];
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetPlayerAvailableCapacity params{};
    params.ItemId = (FName)ItemId;
    params.UseMaxCapacityWhenNoReturnExcess = (bool)UseMaxCapacityWhenNoReturnExcess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FName UInventoryManagerInterface::GetItemInventoryFullString(FName ItemId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetItemInventoryFullString"));
    struct Params_GetItemInventoryFullString {
        FName ItemId; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetItemInventoryFullString params{};
    params.ItemId = (FName)ItemId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UInventoryManagerInterface::GetIsInspectableBP(FString ItemId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetIsInspectableBP"));
    struct Params_GetIsInspectableBP {
        FString ItemId; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetIsInspectableBP params{};
    params.ItemId = (FString)ItemId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UInventoryManagerInterface::GetInventoryTypesBP(TArray<FName>& InventoryTypeArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetInventoryTypesBP"));
    struct Params_GetInventoryTypesBP {
        TArray<FName> InventoryTypeArray; // 0x0
    }; // Size: 0x10
    Params_GetInventoryTypesBP params{};
    params.InventoryTypeArray = (TArray<FName>)InventoryTypeArray;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InventoryTypeArray = params.InventoryTypeArray;
}
int32_t UInventoryManagerInterface::GetInventorySellPriceBP(FName CharacterID, FName HolderID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetInventorySellPriceBP"));
    struct Params_GetInventorySellPriceBP {
        FName CharacterID; // 0x0
        FName HolderID; // 0x8
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetInventorySellPriceBP params{};
    params.CharacterID = (FName)CharacterID;
    params.HolderID = (FName)HolderID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UInventoryManagerInterface::GetCost(FName InventoryObjectID, FName Variation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetCost"));
    struct Params_GetCost {
        FName InventoryObjectID; // 0x0
        FName Variation; // 0x8
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetCost params{};
    params.InventoryObjectID = (FName)InventoryObjectID;
    params.Variation = (FName)Variation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UInventoryManagerInterface::GetContainerMaxSlotsBP(FName ContainerID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.GetContainerMaxSlotsBP"));
    struct Params_GetContainerMaxSlotsBP {
        FName ContainerID; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetContainerMaxSlotsBP params{};
    params.ContainerID = (FName)ContainerID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UInventoryManagerInterface::DropItemBP(FInventoryResult ItemToDrop, int32_t AmountToDrop) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.DropItemBP"));
    struct Params_DropItemBP {
        FInventoryResult ItemToDrop; // 0x0
        int32_t AmountToDrop; // 0x88
        bool ReturnValue; // 0x8c
    }; // Size: 0x8d
    Params_DropItemBP params{};
    params.ItemToDrop = (FInventoryResult)ItemToDrop;
    params.AmountToDrop = (int32_t)AmountToDrop;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UInventoryManagerInterface::CanAddItem(FName CharacterID, FName ItemId, FName HolderID, FName Variation, int32_t Count) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.CanAddItem"));
    struct Params_CanAddItem {
        FName CharacterID; // 0x0
        FName ItemId; // 0x8
        FName HolderID; // 0x10
        FName Variation; // 0x18
        int32_t Count; // 0x20
        int32_t ReturnValue; // 0x24
    }; // Size: 0x28
    Params_CanAddItem params{};
    params.CharacterID = (FName)CharacterID;
    params.ItemId = (FName)ItemId;
    params.HolderID = (FName)HolderID;
    params.Variation = (FName)Variation;
    params.Count = (int32_t)Count;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UInventoryManagerInterface::AdjustCount(FName CharacterID, FName InventoryObjectID, int32_t Delta, EInventoryChangeReason Reason, FName HolderID, FName Variation, bool SuppressHUDNotification, bool SpecialHUDNotification, FName OtherCharacterID, bool IsUnique, bool IsStolen, bool KeepOnReset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryManagerInterface.AdjustCount"));
    struct Params_AdjustCount {
        FName CharacterID; // 0x0
        FName InventoryObjectID; // 0x8
        int32_t Delta; // 0x10
        EInventoryChangeReason Reason; // 0x14
        char pad_15[0x3];
        FName HolderID; // 0x18
        FName Variation; // 0x20
        bool SuppressHUDNotification; // 0x28
        bool SpecialHUDNotification; // 0x29
        char pad_2a[0x2];
        FName OtherCharacterID; // 0x2c
        bool IsUnique; // 0x34
        bool IsStolen; // 0x35
        bool KeepOnReset; // 0x36
        char pad_37[0x1];
        int32_t ReturnValue; // 0x38
    }; // Size: 0x3c
    Params_AdjustCount params{};
    params.CharacterID = (FName)CharacterID;
    params.InventoryObjectID = (FName)InventoryObjectID;
    params.Delta = (int32_t)Delta;
    params.Reason = (EInventoryChangeReason)Reason;
    params.HolderID = (FName)HolderID;
    params.Variation = (FName)Variation;
    params.SuppressHUDNotification = (bool)SuppressHUDNotification;
    params.SpecialHUDNotification = (bool)SpecialHUDNotification;
    params.OtherCharacterID = (FName)OtherCharacterID;
    params.IsUnique = (bool)IsUnique;
    params.IsStolen = (bool)IsStolen;
    params.KeepOnReset = (bool)KeepOnReset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
