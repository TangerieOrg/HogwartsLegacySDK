#include "AActor.hpp"
#include "EGearSlotIDEnum.hpp"
#include "EGenderEnum.hpp"
#include "FGearItem.hpp"
#include "FGearItemID.hpp"
#include "FGearStatRecipeData.hpp"
#include "FGearTraitRecipeData.hpp"
#include "FGearUI.hpp"
#include "FObjectHandles.hpp"
#include "GearStatType.hpp"
#include "UFunction.hpp"
#include "UGearManager.hpp"
#include "UObject.hpp"
int32_t UGearManager::UpgradeGearStatOnLoom(FGearItemID itemToUpgrade, FGearStatRecipeData UpgradeData, bool bIgnoreIngredients) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.UpgradeGearStatOnLoom"));
    struct Params_UpgradeGearStatOnLoom {
        FGearItemID itemToUpgrade; // 0x0
        char pad_14[0x4];
        FGearStatRecipeData UpgradeData; // 0x18
        bool bIgnoreIngredients; // 0x38
        char pad_39[0x3];
        int32_t ReturnValue; // 0x3c
    }; // Size: 0x40
    Params_UpgradeGearStatOnLoom params{};
    params.itemToUpgrade = (FGearItemID)itemToUpgrade;
    params.UpgradeData = (FGearStatRecipeData)UpgradeData;
    params.bIgnoreIngredients = (bool)bIgnoreIngredients;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UGearManager::GetGearEmptyTraitSlots(FName& GearID, FName& Variation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetGearEmptyTraitSlots"));
    struct Params_GetGearEmptyTraitSlots {
        FName GearID; // 0x0
        FName Variation; // 0x8
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetGearEmptyTraitSlots params{};
    params.GearID = (FName)GearID;
    params.Variation = (FName)Variation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearID = params.GearID;
    Variation = params.Variation;
    return (int32_t)params.ReturnValue;
}
bool UGearManager::UpdateGearOutfitItems(AActor* Actor, bool UpdateIfNothingEquipped, bool bIncludeSlotDefaultGear, FString GearActorID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.UpdateGearOutfitItems"));
    struct Params_UpdateGearOutfitItems {
        AActor* Actor; // 0x0
        bool UpdateIfNothingEquipped; // 0x8
        bool bIncludeSlotDefaultGear; // 0x9
        char pad_a[0x6];
        FString GearActorID; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_UpdateGearOutfitItems params{};
    params.Actor = (AActor*)Actor;
    params.UpdateIfNothingEquipped = (bool)UpdateIfNothingEquipped;
    params.bIncludeSlotDefaultGear = (bool)bIncludeSlotDefaultGear;
    params.GearActorID = (FString)GearActorID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGearManager::RemoveActorGearAppearanceOverride(AActor* Actor, FGearItemID GearItemID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.RemoveActorGearAppearanceOverride"));
    struct Params_RemoveActorGearAppearanceOverride {
        AActor* Actor; // 0x0
        FGearItemID GearItemID; // 0x8
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_RemoveActorGearAppearanceOverride params{};
    params.Actor = (AActor*)Actor;
    params.GearItemID = (FGearItemID)GearItemID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UGearManager* UGearManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GearManager");
    return (UGearManager*)res;
}
bool UGearManager::SetGearStat(FName& GearID, FName& Variation, FName& StatName, int32_t StatValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.SetGearStat"));
    struct Params_SetGearStat {
        FName GearID; // 0x0
        FName Variation; // 0x8
        FName StatName; // 0x10
        int32_t StatValue; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_SetGearStat params{};
    params.GearID = (FName)GearID;
    params.Variation = (FName)Variation;
    params.StatName = (FName)StatName;
    params.StatValue = (int32_t)StatValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearID = params.GearID;
    StatName = params.StatName;
    Variation = params.Variation;
    return (bool)params.ReturnValue;
}
bool UGearManager::UnequipSlotID(FString ActorId, EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.UnequipSlotID"));
    struct Params_UnequipSlotID {
        FString ActorId; // 0x0
        EGearSlotIDEnum SlotID; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_UnequipSlotID params{};
    params.ActorId = (FString)ActorId;
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FGearItemID> UGearManager::GetAvailableAndEquippedGearItemIDs(FString ActorId, EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetAvailableAndEquippedGearItemIDs"));
    struct Params_GetAvailableAndEquippedGearItemIDs {
        FString ActorId; // 0x0
        EGearSlotIDEnum SlotID; // 0x10
        char pad_11[0x7];
        TArray<FGearItemID> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetAvailableAndEquippedGearItemIDs params{};
    params.ActorId = (FString)ActorId;
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FGearItemID>)params.ReturnValue;
}
int32_t UGearManager::CalculateUpgradeAmountForGearItem(FGearItemID itemToUpgrade, int32_t Upgrade) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.CalculateUpgradeAmountForGearItem"));
    struct Params_CalculateUpgradeAmountForGearItem {
        FGearItemID itemToUpgrade; // 0x0
        int32_t Upgrade; // 0x14
        int32_t ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_CalculateUpgradeAmountForGearItem params{};
    params.itemToUpgrade = (FGearItemID)itemToUpgrade;
    params.Upgrade = (int32_t)Upgrade;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UGearManager::UnequipActorSlotID(AActor* Actor, EGearSlotIDEnum SlotID, bool bIncludeSlotDefaultGear) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.UnequipActorSlotID"));
    struct Params_UnequipActorSlotID {
        AActor* Actor; // 0x0
        EGearSlotIDEnum SlotID; // 0x8
        bool bIncludeSlotDefaultGear; // 0x9
        bool ReturnValue; // 0xa
    }; // Size: 0xb
    Params_UnequipActorSlotID params{};
    params.Actor = (AActor*)Actor;
    params.SlotID = (EGearSlotIDEnum)SlotID;
    params.bIncludeSlotDefaultGear = (bool)bIncludeSlotDefaultGear;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UGearManager::GetGearMaxTraitSlots(FName& GearID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetGearMaxTraitSlots"));
    struct Params_GetGearMaxTraitSlots {
        FName GearID; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetGearMaxTraitSlots params{};
    params.GearID = (FName)GearID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearID = params.GearID;
    return (int32_t)params.ReturnValue;
}
void UGearManager::SetHoodPosition(AActor* Actor, FGearItemID& GearItemID, bool bHoodUp, bool bRebuildCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.SetHoodPosition"));
    struct Params_SetHoodPosition {
        AActor* Actor; // 0x0
        FGearItemID GearItemID; // 0x8
        bool bHoodUp; // 0x1c
        bool bRebuildCharacter; // 0x1d
    }; // Size: 0x1e
    Params_SetHoodPosition params{};
    params.Actor = (AActor*)Actor;
    params.GearItemID = (FGearItemID)GearItemID;
    params.bHoodUp = (bool)bHoodUp;
    params.bRebuildCharacter = (bool)bRebuildCharacter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearItemID = params.GearItemID;
}
EGearSlotIDEnum UGearManager::StringToGearSlotID(FString SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.StringToGearSlotID"));
    struct Params_StringToGearSlotID {
        FString SlotID; // 0x0
        EGearSlotIDEnum ReturnValue; // 0x10
    }; // Size: 0x11
    Params_StringToGearSlotID params{};
    params.SlotID = (FString)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EGearSlotIDEnum)params.ReturnValue;
}
FString UGearManager::GetEquippedGearAppearanceOverrideID(FString ActorId, EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetEquippedGearAppearanceOverrideID"));
    struct Params_GetEquippedGearAppearanceOverrideID {
        FString ActorId; // 0x0
        EGearSlotIDEnum SlotID; // 0x10
        char pad_11[0x7];
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetEquippedGearAppearanceOverrideID params{};
    params.ActorId = (FString)ActorId;
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UGearManager::PreviewGear(AActor* Actor, FName GearID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.PreviewGear"));
    struct Params_PreviewGear {
        AActor* Actor; // 0x0
        FName GearID; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_PreviewGear params{};
    params.Actor = (AActor*)Actor;
    params.GearID = (FName)GearID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGearManager::SetForcedGearAppearances() {}
bool UGearManager::EditorDoesGearAppearanceHaveHouseOverrides(AActor* Actor, FString GearAppearanceID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.EditorDoesGearAppearanceHaveHouseOverrides"));
    struct Params_EditorDoesGearAppearanceHaveHouseOverrides {
        AActor* Actor; // 0x0
        FString GearAppearanceID; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_EditorDoesGearAppearanceHaveHouseOverrides params{};
    params.Actor = (AActor*)Actor;
    params.GearAppearanceID = (FString)GearAppearanceID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGearManager::SetEquippedGearItemID(FString ActorId, FGearItemID& GearItemID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.SetEquippedGearItemID"));
    struct Params_SetEquippedGearItemID {
        FString ActorId; // 0x0
        FGearItemID GearItemID; // 0x10
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_SetEquippedGearItemID params{};
    params.ActorId = (FString)ActorId;
    params.GearItemID = (FGearItemID)GearItemID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearItemID = params.GearItemID;
    return (bool)params.ReturnValue;
}
bool UGearManager::SetEquippedGearAppearanceOverrideID(FString ActorId, FString GearAppearanceID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.SetEquippedGearAppearanceOverrideID"));
    struct Params_SetEquippedGearAppearanceOverrideID {
        FString ActorId; // 0x0
        FString GearAppearanceID; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_SetEquippedGearAppearanceOverrideID params{};
    params.ActorId = (FString)ActorId;
    params.GearAppearanceID = (FString)GearAppearanceID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGearManager::SetActorsEquippedGearAppearanceOverrideID(AActor* Actor, FString GearAppearanceOverrideID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.SetActorsEquippedGearAppearanceOverrideID"));
    struct Params_SetActorsEquippedGearAppearanceOverrideID {
        AActor* Actor; // 0x0
        FString GearAppearanceOverrideID; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_SetActorsEquippedGearAppearanceOverrideID params{};
    params.Actor = (AActor*)Actor;
    params.GearAppearanceOverrideID = (FString)GearAppearanceOverrideID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UGearManager::GetMaxUpgradeForGearItem(FGearItem& GearItem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetMaxUpgradeForGearItem"));
    struct Params_GetMaxUpgradeForGearItem {
        FGearItem GearItem; // 0x0
        int32_t ReturnValue; // 0x58
    }; // Size: 0x5c
    Params_GetMaxUpgradeForGearItem params{};
    params.GearItem = (FGearItem)GearItem;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearItem = params.GearItem;
    return (int32_t)params.ReturnValue;
}
bool UGearManager::SetActorEquippedGearItemID(AActor* Actor, FGearItemID& GearItemID, bool bIncludeSlotDefaultGear) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.SetActorEquippedGearItemID"));
    struct Params_SetActorEquippedGearItemID {
        AActor* Actor; // 0x0
        FGearItemID GearItemID; // 0x8
        bool bIncludeSlotDefaultGear; // 0x1c
        bool ReturnValue; // 0x1d
    }; // Size: 0x1e
    Params_SetActorEquippedGearItemID params{};
    params.Actor = (AActor*)Actor;
    params.GearItemID = (FGearItemID)GearItemID;
    params.bIncludeSlotDefaultGear = (bool)bIncludeSlotDefaultGear;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearItemID = params.GearItemID;
    return (bool)params.ReturnValue;
}
bool UGearManager::IsGearItemHoodUp(FGearItemID& GearItemID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.IsGearItemHoodUp"));
    struct Params_IsGearItemHoodUp {
        FGearItemID GearItemID; // 0x0
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_IsGearItemHoodUp params{};
    params.GearItemID = (FGearItemID)GearItemID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearItemID = params.GearItemID;
    return (bool)params.ReturnValue;
}
FObjectHandles UGearManager::PreloadGearIds(EGenderEnum Gender, TArray<FName>& GearIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.PreloadGearIds"));
    struct Params_PreloadGearIds {
        EGenderEnum Gender; // 0x0
        char pad_1[0x7];
        TArray<FName> GearIDs; // 0x8
        FObjectHandles ReturnValue; // 0x18
    }; // Size: 0x28
    Params_PreloadGearIds params{};
    params.Gender = (EGenderEnum)Gender;
    params.GearIDs = (TArray<FName>)GearIDs;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearIDs = params.GearIDs;
    return (FObjectHandles)params.ReturnValue;
}
bool UGearManager::RemoveGearAppearanceOverride(FString ActorId, FGearItemID GearItemID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.RemoveGearAppearanceOverride"));
    struct Params_RemoveGearAppearanceOverride {
        FString ActorId; // 0x0
        FGearItemID GearItemID; // 0x10
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_RemoveGearAppearanceOverride params{};
    params.ActorId = (FString)ActorId;
    params.GearItemID = (FGearItemID)GearItemID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGearManager::RemoveForcedGearAppearances(TArray<EGearSlotIDEnum>& GearSlotIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.RemoveForcedGearAppearances"));
    struct Params_RemoveForcedGearAppearances {
        TArray<EGearSlotIDEnum> GearSlotIDs; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_RemoveForcedGearAppearances params{};
    params.GearSlotIDs = (TArray<EGearSlotIDEnum>)GearSlotIDs;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearSlotIDs = params.GearSlotIDs;
    return (bool)params.ReturnValue;
}
void UGearManager::RemoveAllForcedGearAppearances() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.RemoveAllForcedGearAppearances"));
    struct Params_RemoveAllForcedGearAppearances {
    }; // Size: 0x0
    Params_RemoveAllForcedGearAppearances params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGearManager::GetGearAbilityUIInfo(FGearItem& Item, TArray<FGearUI>& OutGearUI) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetGearAbilityUIInfo"));
    struct Params_GetGearAbilityUIInfo {
        FGearItem Item; // 0x0
        TArray<FGearUI> OutGearUI; // 0x58
    }; // Size: 0x68
    Params_GetGearAbilityUIInfo params{};
    params.Item = (FGearItem)Item;
    params.OutGearUI = (TArray<FGearUI>)OutGearUI;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Item = params.Item;
    OutGearUI = params.OutGearUI;
}
void UGearManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
TArray<FGearItemID> UGearManager::GetAllEquippedGearItemIDs(FString ActorId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetAllEquippedGearItemIDs"));
    struct Params_GetAllEquippedGearItemIDs {
        FString ActorId; // 0x0
        TArray<FGearItemID> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetAllEquippedGearItemIDs params{};
    params.ActorId = (FString)ActorId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FGearItemID>)params.ReturnValue;
}
bool UGearManager::IsHoodUp(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.IsHoodUp"));
    struct Params_IsHoodUp {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsHoodUp params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGearManager::IsHooded(AActor* Actor, EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.IsHooded"));
    struct Params_IsHooded {
        AActor* Actor; // 0x0
        EGearSlotIDEnum SlotID; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_IsHooded params{};
    params.Actor = (AActor*)Actor;
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGearManager::IsGearItemEquippable(FGearItemID GearID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.IsGearItemEquippable"));
    struct Params_IsGearItemEquippable {
        FGearItemID GearID; // 0x0
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_IsGearItemEquippable params{};
    params.GearID = (FGearItemID)GearID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EGearSlotIDEnum UGearManager::GetLastPreviewedGearSlot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetLastPreviewedGearSlot"));
    struct Params_GetLastPreviewedGearSlot {
        EGearSlotIDEnum ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLastPreviewedGearSlot params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EGearSlotIDEnum)params.ReturnValue;
}
bool UGearManager::IsGear(FName ItemId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.IsGear"));
    struct Params_IsGear {
        FName ItemId; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsGear params{};
    params.ItemId = (FName)ItemId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FGearItemID> UGearManager::IdentifyAllItems() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.IdentifyAllItems"));
    struct Params_IdentifyAllItems {
        TArray<FGearItemID> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_IdentifyAllItems params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FGearItemID>)params.ReturnValue;
}
TArray<FGearItemID> UGearManager::GetUnidentifiedGear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetUnidentifiedGear"));
    struct Params_GetUnidentifiedGear {
        TArray<FGearItemID> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetUnidentifiedGear params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FGearItemID>)params.ReturnValue;
}
EGearSlotIDEnum UGearManager::GetSlotIDFromGearID(FName& GearID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetSlotIDFromGearID"));
    struct Params_GetSlotIDFromGearID {
        FName GearID; // 0x0
        EGearSlotIDEnum ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetSlotIDFromGearID params{};
    params.GearID = (FName)GearID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearID = params.GearID;
    return (EGearSlotIDEnum)params.ReturnValue;
}
GearStatType UGearManager::DefineSecondaryGearStatTypeFromSlot(EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.DefineSecondaryGearStatTypeFromSlot"));
    struct Params_DefineSecondaryGearStatTypeFromSlot {
        EGearSlotIDEnum SlotID; // 0x0
        GearStatType ReturnValue; // 0x1
    }; // Size: 0x2
    Params_DefineSecondaryGearStatTypeFromSlot params{};
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (GearStatType)params.ReturnValue;
}
TArray<FGearItemID> UGearManager::GetAllActorEquippedGearItemID(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetAllActorEquippedGearItemID"));
    struct Params_GetAllActorEquippedGearItemID {
        AActor* Actor; // 0x0
        TArray<FGearItemID> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAllActorEquippedGearItemID params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FGearItemID>)params.ReturnValue;
}
FName UGearManager::GetRarityFromGearItemID(FName GearID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetRarityFromGearItemID"));
    struct Params_GetRarityFromGearItemID {
        FName GearID; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetRarityFromGearItemID params{};
    params.GearID = (FName)GearID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
TArray<FString> UGearManager::GetOutFitItemTypesBySlotID(EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetOutFitItemTypesBySlotID"));
    struct Params_GetOutFitItemTypesBySlotID {
        EGearSlotIDEnum SlotID; // 0x0
        char pad_1[0x7];
        TArray<FString> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetOutFitItemTypesBySlotID params{};
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
GearStatType UGearManager::DefineGearStatTypeFromSlot(EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.DefineGearStatTypeFromSlot"));
    struct Params_DefineGearStatTypeFromSlot {
        EGearSlotIDEnum SlotID; // 0x0
        GearStatType ReturnValue; // 0x1
    }; // Size: 0x2
    Params_DefineGearStatTypeFromSlot params{};
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (GearStatType)params.ReturnValue;
}
TArray<FString> UGearManager::GetAllGearSlotIDs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetAllGearSlotIDs"));
    struct Params_GetAllGearSlotIDs {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllGearSlotIDs params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
int32_t UGearManager::GetNumOfStatUpgradeForGearItem(FGearItemID itemToCheck) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetNumOfStatUpgradeForGearItem"));
    struct Params_GetNumOfStatUpgradeForGearItem {
        FGearItemID itemToCheck; // 0x0
        int32_t ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetNumOfStatUpgradeForGearItem params{};
    params.itemToCheck = (FGearItemID)itemToCheck;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UGearManager::GetGearTraitRecipes(TArray<FGearTraitRecipeData>& AllRecipes, FName RarityTier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetGearTraitRecipes"));
    struct Params_GetGearTraitRecipes {
        TArray<FGearTraitRecipeData> AllRecipes; // 0x0
        FName RarityTier; // 0x10
    }; // Size: 0x18
    Params_GetGearTraitRecipes params{};
    params.AllRecipes = (TArray<FGearTraitRecipeData>)AllRecipes;
    params.RarityTier = (FName)RarityTier;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    AllRecipes = params.AllRecipes;
}
FGearStatRecipeData UGearManager::GetGearStatsUpgradeRecipe(FGearItem& GearItem, GearStatType StatType, int32_t NewLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetGearStatsUpgradeRecipe"));
    struct Params_GetGearStatsUpgradeRecipe {
        FGearItem GearItem; // 0x0
        GearStatType StatType; // 0x58
        char pad_59[0x3];
        int32_t NewLevel; // 0x5c
        FGearStatRecipeData ReturnValue; // 0x60
    }; // Size: 0x80
    Params_GetGearStatsUpgradeRecipe params{};
    params.GearItem = (FGearItem)GearItem;
    params.StatType = (GearStatType)StatType;
    params.NewLevel = (int32_t)NewLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearItem = params.GearItem;
    return (FGearStatRecipeData)params.ReturnValue;
}
bool UGearManager::GetGearItemDynamic(FGearItemID& GearItemID, FGearItem& GearItem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetGearItemDynamic"));
    struct Params_GetGearItemDynamic {
        FGearItemID GearItemID; // 0x0
        char pad_14[0x4];
        FGearItem GearItem; // 0x18
        bool ReturnValue; // 0x70
    }; // Size: 0x71
    Params_GetGearItemDynamic params{};
    params.GearItemID = (FGearItemID)GearItemID;
    params.GearItem = (FGearItem)GearItem;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearItem = params.GearItem;
    GearItemID = params.GearItemID;
    return (bool)params.ReturnValue;
}
bool UGearManager::GetGearItem(FGearItemID& GearItemID, FGearItem& OutGearItem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetGearItem"));
    struct Params_GetGearItem {
        FGearItemID GearItemID; // 0x0
        char pad_14[0x4];
        FGearItem OutGearItem; // 0x18
        bool ReturnValue; // 0x70
    }; // Size: 0x71
    Params_GetGearItem params{};
    params.GearItemID = (FGearItemID)GearItemID;
    params.OutGearItem = (FGearItem)OutGearItem;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearItemID = params.GearItemID;
    OutGearItem = params.OutGearItem;
    return (bool)params.ReturnValue;
}
FName UGearManager::GetGearIconID(EGenderEnum Gender, FName& GearID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetGearIconID"));
    struct Params_GetGearIconID {
        EGenderEnum Gender; // 0x0
        char pad_1[0x3];
        FName GearID; // 0x4
        FName ReturnValue; // 0xc
    }; // Size: 0x14
    Params_GetGearIconID params{};
    params.Gender = (EGenderEnum)Gender;
    params.GearID = (FName)GearID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearID = params.GearID;
    return (FName)params.ReturnValue;
}
TArray<void*> UGearManager::GetGearAppearanceItemDefinitions(EGenderEnum Gender, TArray<FName>& GearAppearanceIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetGearAppearanceItemDefinitions"));
    struct Params_GetGearAppearanceItemDefinitions {
        EGenderEnum Gender; // 0x0
        char pad_1[0x7];
        TArray<FName> GearAppearanceIDs; // 0x8
        TArray<void*> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetGearAppearanceItemDefinitions params{};
    params.Gender = (EGenderEnum)Gender;
    params.GearAppearanceIDs = (TArray<FName>)GearAppearanceIDs;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearAppearanceIDs = params.GearAppearanceIDs;
    return (TArray<void*>)params.ReturnValue;
}
TArray<FGearItemID> UGearManager::GetAvailableGearItemIDs(FString ActorId, EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetAvailableGearItemIDs"));
    struct Params_GetAvailableGearItemIDs {
        FString ActorId; // 0x0
        EGearSlotIDEnum SlotID; // 0x10
        char pad_11[0x7];
        TArray<FGearItemID> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetAvailableGearItemIDs params{};
    params.ActorId = (FString)ActorId;
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FGearItemID>)params.ReturnValue;
}
TArray<FString> UGearManager::GetAvailableGearAppearanceOverrideIDs(FString ActorId, EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetAvailableGearAppearanceOverrideIDs"));
    struct Params_GetAvailableGearAppearanceOverrideIDs {
        FString ActorId; // 0x0
        EGearSlotIDEnum SlotID; // 0x10
        char pad_11[0x7];
        TArray<FString> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetAvailableGearAppearanceOverrideIDs params{};
    params.ActorId = (FString)ActorId;
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
void UGearManager::GetGearAppearanceFromGearIDs(TArray<FName>& GearIDs) {}
bool UGearManager::EditorLoadGear(AActor* Actor, FString GearID, bool bResetToEquipped) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.EditorLoadGear"));
    struct Params_EditorLoadGear {
        AActor* Actor; // 0x0
        FString GearID; // 0x8
        bool bResetToEquipped; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_EditorLoadGear params{};
    params.Actor = (AActor*)Actor;
    params.GearID = (FString)GearID;
    params.bResetToEquipped = (bool)bResetToEquipped;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FGearItemID UGearManager::GetEquippedGearItemID(FString ActorId, EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetEquippedGearItemID"));
    struct Params_GetEquippedGearItemID {
        FString ActorId; // 0x0
        EGearSlotIDEnum SlotID; // 0x10
        char pad_11[0x3];
        FGearItemID ReturnValue; // 0x14
    }; // Size: 0x28
    Params_GetEquippedGearItemID params{};
    params.ActorId = (FString)ActorId;
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FGearItemID)params.ReturnValue;
}
void UGearManager::GetDefaultPlayerGearAndAppearance() {}
TArray<FGearItemID> UGearManager::GetAllAvailableGearItemIDsSorted(FString ActorId, EGearSlotIDEnum SortedSlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetAllAvailableGearItemIDsSorted"));
    struct Params_GetAllAvailableGearItemIDsSorted {
        FString ActorId; // 0x0
        EGearSlotIDEnum SortedSlotID; // 0x10
        char pad_11[0x7];
        TArray<FGearItemID> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetAllAvailableGearItemIDsSorted params{};
    params.ActorId = (FString)ActorId;
    params.SortedSlotID = (EGearSlotIDEnum)SortedSlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FGearItemID>)params.ReturnValue;
}
bool UGearManager::GetCanApplyGearTraitToGear(FGearTraitRecipeData& Trait, FName& GearID, FName& GearVariation, FString& OutErrorStringKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetCanApplyGearTraitToGear"));
    struct Params_GetCanApplyGearTraitToGear {
        FGearTraitRecipeData Trait; // 0x0
        FName GearID; // 0x48
        FName GearVariation; // 0x50
        FString OutErrorStringKey; // 0x58
        bool ReturnValue; // 0x68
    }; // Size: 0x69
    Params_GetCanApplyGearTraitToGear params{};
    params.Trait = (FGearTraitRecipeData)Trait;
    params.GearID = (FName)GearID;
    params.GearVariation = (FName)GearVariation;
    params.OutErrorStringKey = (FString)OutErrorStringKey;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Trait = params.Trait;
    OutErrorStringKey = params.OutErrorStringKey;
    GearID = params.GearID;
    GearVariation = params.GearVariation;
    return (bool)params.ReturnValue;
}
void UGearManager::GetAllGearIDs(EGearSlotIDEnum SlotID, TArray<FName>& GearIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetAllGearIDs"));
    struct Params_GetAllGearIDs {
        EGearSlotIDEnum SlotID; // 0x0
        char pad_1[0x7];
        TArray<FName> GearIDs; // 0x8
    }; // Size: 0x18
    Params_GetAllGearIDs params{};
    params.SlotID = (EGearSlotIDEnum)SlotID;
    params.GearIDs = (TArray<FName>)GearIDs;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearIDs = params.GearIDs;
}
FName UGearManager::GetActorGearIconID(AActor* Actor, FName& GearID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetActorGearIconID"));
    struct Params_GetActorGearIconID {
        AActor* Actor; // 0x0
        FName GearID; // 0x8
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetActorGearIconID params{};
    params.Actor = (AActor*)Actor;
    params.GearID = (FName)GearID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearID = params.GearID;
    return (FName)params.ReturnValue;
}
bool UGearManager::AddCraftGearTrait(FGearTraitRecipeData& Trait, FGearItemID GearItemID, FString& ErrorString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.AddCraftGearTrait"));
    struct Params_AddCraftGearTrait {
        FGearTraitRecipeData Trait; // 0x0
        FGearItemID GearItemID; // 0x48
        char pad_5c[0x4];
        FString ErrorString; // 0x60
        bool ReturnValue; // 0x70
    }; // Size: 0x71
    Params_AddCraftGearTrait params{};
    params.Trait = (FGearTraitRecipeData)Trait;
    params.GearItemID = (FGearItemID)GearItemID;
    params.ErrorString = (FString)ErrorString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Trait = params.Trait;
    ErrorString = params.ErrorString;
    return (bool)params.ReturnValue;
}
FGearItemID UGearManager::GetActorEquippedGearItemID(AActor* Actor, EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GetActorEquippedGearItemID"));
    struct Params_GetActorEquippedGearItemID {
        AActor* Actor; // 0x0
        EGearSlotIDEnum SlotID; // 0x8
        char pad_9[0x3];
        FGearItemID ReturnValue; // 0xc
    }; // Size: 0x20
    Params_GetActorEquippedGearItemID params{};
    params.Actor = (AActor*)Actor;
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FGearItemID)params.ReturnValue;
}
UGearManager* UGearManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.Get"));
    struct Params_Get {
        UGearManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGearManager*)params.ReturnValue;
}
void UGearManager::GenerateGearAndEquip(FName GearID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GenerateGearAndEquip"));
    struct Params_GenerateGearAndEquip {
        FName GearID; // 0x0
    }; // Size: 0x8
    Params_GenerateGearAndEquip params{};
    params.GearID = (FName)GearID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FGearItemID UGearManager::GenerateGearAndAddToInventory(FName GearID, bool IsIdentified) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GenerateGearAndAddToInventory"));
    struct Params_GenerateGearAndAddToInventory {
        FName GearID; // 0x0
        bool IsIdentified; // 0x8
        char pad_9[0x3];
        FGearItemID ReturnValue; // 0xc
    }; // Size: 0x20
    Params_GenerateGearAndAddToInventory params{};
    params.GearID = (FName)GearID;
    params.IsIdentified = (bool)IsIdentified;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FGearItemID)params.ReturnValue;
}
FString UGearManager::GearSlotIDToString(EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.GearSlotIDToString"));
    struct Params_GearSlotIDToString {
        EGearSlotIDEnum SlotID; // 0x0
        char pad_1[0x7];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GearSlotIDToString params{};
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UGearManager::EditorLoadGearAppearance(AActor* Actor, FString GearAppearanceID, FString HouseIDOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.EditorLoadGearAppearance"));
    struct Params_EditorLoadGearAppearance {
        AActor* Actor; // 0x0
        FString GearAppearanceID; // 0x8
        FString HouseIDOverride; // 0x18
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_EditorLoadGearAppearance params{};
    params.Actor = (AActor*)Actor;
    params.GearAppearanceID = (FString)GearAppearanceID;
    params.HouseIDOverride = (FString)HouseIDOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGearManager::EditorClearSlot(AActor* Actor, EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.EditorClearSlot"));
    struct Params_EditorClearSlot {
        AActor* Actor; // 0x0
        EGearSlotIDEnum SlotID; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_EditorClearSlot params{};
    params.Actor = (AActor*)Actor;
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGearManager::DoesGearHaveAppearanceOverride(FGearItemID Gear) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.DoesGearHaveAppearanceOverride"));
    struct Params_DoesGearHaveAppearanceOverride {
        FGearItemID Gear; // 0x0
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_DoesGearHaveAppearanceOverride params{};
    params.Gear = (FGearItemID)Gear;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGearManager::CanUnequipSlotID(FString ActorId, EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.CanUnequipSlotID"));
    struct Params_CanUnequipSlotID {
        FString ActorId; // 0x0
        EGearSlotIDEnum SlotID; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_CanUnequipSlotID params{};
    params.ActorId = (FString)ActorId;
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGearManager::CanUnequipActorSlotID(AActor* Actor, EGearSlotIDEnum SlotID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.CanUnequipActorSlotID"));
    struct Params_CanUnequipActorSlotID {
        AActor* Actor; // 0x0
        EGearSlotIDEnum SlotID; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_CanUnequipActorSlotID params{};
    params.Actor = (AActor*)Actor;
    params.SlotID = (EGearSlotIDEnum)SlotID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGearManager::AddGearUpgradeItems(FName Rarity, GearStatType StatType, int32_t Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.AddGearUpgradeItems"));
    struct Params_AddGearUpgradeItems {
        FName Rarity; // 0x0
        GearStatType StatType; // 0x8
        char pad_9[0x3];
        int32_t Level; // 0xc
    }; // Size: 0x10
    Params_AddGearUpgradeItems params{};
    params.Rarity = (FName)Rarity;
    params.StatType = (GearStatType)StatType;
    params.Level = (int32_t)Level;
    ProcessEvent(func, &params);
}
bool UGearManager::AddGearTrait(FName& GearID, FName& Variation, FName& TraitID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.AddGearTrait"));
    struct Params_AddGearTrait {
        FName GearID; // 0x0
        FName Variation; // 0x8
        FName TraitID; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_AddGearTrait params{};
    params.GearID = (FName)GearID;
    params.Variation = (FName)Variation;
    params.TraitID = (FName)TraitID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearID = params.GearID;
    Variation = params.Variation;
    TraitID = params.TraitID;
    return (bool)params.ReturnValue;
}
void UGearManager::AddGearAbilityItems(FName GearAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManager.AddGearAbilityItems"));
    struct Params_AddGearAbilityItems {
        FName GearAbility; // 0x0
    }; // Size: 0x8
    Params_AddGearAbilityItems params{};
    params.GearAbility = (FName)GearAbility;
    ProcessEvent(func, &params);
}
