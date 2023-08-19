#include "EUIQActionBarType.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UQuickActionManager.hpp"
void UQuickActionManager::CheckForWorldOverrides() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.CheckForWorldOverrides"));
    struct Params_CheckForWorldOverrides {
    }; // Size: 0x0
    Params_CheckForWorldOverrides params{};
    ProcessEvent(func, &params);
}
UQuickActionManager* UQuickActionManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.QuickActionManager");
    return (UQuickActionManager*)res;
}
void UQuickActionManager::SlotInventoryItemFromCode(FString ItemId, int32_t Amount, int32_t Slot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.SlotInventoryItemFromCode"));
    struct Params_SlotInventoryItemFromCode {
        FString ItemId; // 0x0
        int32_t Amount; // 0x10
        int32_t Slot; // 0x14
    }; // Size: 0x18
    Params_SlotInventoryItemFromCode params{};
    params.ItemId = (FString)ItemId;
    params.Amount = (int32_t)Amount;
    params.Slot = (int32_t)Slot;
    ProcessEvent(func, &params);
}
bool UQuickActionManager::ValidateDefaultGroupSelections(int32_t GroupIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.ValidateDefaultGroupSelections"));
    struct Params_ValidateDefaultGroupSelections {
        int32_t GroupIndex; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_ValidateDefaultGroupSelections params{};
    params.GroupIndex = (int32_t)GroupIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UQuickActionManager::GetItemName(int32_t GroupIndex, int32_t MacroIndex, int32_t ActionIndex, FName& ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GetItemName"));
    struct Params_GetItemName {
        int32_t GroupIndex; // 0x0
        int32_t MacroIndex; // 0x4
        int32_t ActionIndex; // 0x8
        FName ItemName; // 0xc
    }; // Size: 0x14
    Params_GetItemName params{};
    params.GroupIndex = (int32_t)GroupIndex;
    params.MacroIndex = (int32_t)MacroIndex;
    params.ActionIndex = (int32_t)ActionIndex;
    params.ItemName = (FName)ItemName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ItemName = params.ItemName;
}
void UQuickActionManager::UseQuickWheelItem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.UseQuickWheelItem"));
    struct Params_UseQuickWheelItem {
    }; // Size: 0x0
    Params_UseQuickWheelItem params{};
    ProcessEvent(func, &params);
}
int32_t UQuickActionManager::GetMacroIndexByName(FString ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GetMacroIndexByName"));
    struct Params_GetMacroIndexByName {
        FString ItemName; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetMacroIndexByName params{};
    params.ItemName = (FString)ItemName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UQuickActionManager::UpdateSelectedActionItem(FString ItemName, FString ItemVariation, EUIQActionBarType ItemType, FString ItemHolder, int32_t RequestedGroupIndex, int32_t Amount, int32_t RequestedMacroIndex, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.UpdateSelectedActionItem"));
    struct Params_UpdateSelectedActionItem {
        FString ItemName; // 0x0
        FString ItemVariation; // 0x10
        EUIQActionBarType ItemType; // 0x20
        char pad_21[0x7];
        FString ItemHolder; // 0x28
        int32_t RequestedGroupIndex; // 0x38
        int32_t Amount; // 0x3c
        int32_t RequestedMacroIndex; // 0x40
        int32_t Index; // 0x44
    }; // Size: 0x48
    Params_UpdateSelectedActionItem params{};
    params.ItemName = (FString)ItemName;
    params.ItemVariation = (FString)ItemVariation;
    params.ItemType = (EUIQActionBarType)ItemType;
    params.ItemHolder = (FString)ItemHolder;
    params.RequestedGroupIndex = (int32_t)RequestedGroupIndex;
    params.Amount = (int32_t)Amount;
    params.RequestedMacroIndex = (int32_t)RequestedMacroIndex;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UQuickActionManager::SlotToolFromCode(FString ItemId, int32_t Slot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.SlotToolFromCode"));
    struct Params_SlotToolFromCode {
        FString ItemId; // 0x0
        int32_t Slot; // 0x10
    }; // Size: 0x14
    Params_SlotToolFromCode params{};
    params.ItemId = (FString)ItemId;
    params.Slot = (int32_t)Slot;
    ProcessEvent(func, &params);
}
void UQuickActionManager::SlotSpellFromCode(FString SpellID, int32_t Slot, int32_t Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.SlotSpellFromCode"));
    struct Params_SlotSpellFromCode {
        FString SpellID; // 0x0
        int32_t Slot; // 0x10
        int32_t Group; // 0x14
    }; // Size: 0x18
    Params_SlotSpellFromCode params{};
    params.SpellID = (FString)SpellID;
    params.Slot = (int32_t)Slot;
    params.Group = (int32_t)Group;
    ProcessEvent(func, &params);
}
void UQuickActionManager::IncGroupIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.IncGroupIndex"));
    struct Params_IncGroupIndex {
    }; // Size: 0x0
    Params_IncGroupIndex params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UQuickActionManager::SetQuickWheelItem(FName ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.SetQuickWheelItem"));
    struct Params_SetQuickWheelItem {
        FName ItemName; // 0x0
    }; // Size: 0x8
    Params_SetQuickWheelItem params{};
    params.ItemName = (FName)ItemName;
    ProcessEvent(func, &params);
}
void UQuickActionManager::OnAboutToSaveGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.OnAboutToSaveGame"));
    struct Params_OnAboutToSaveGame {
    }; // Size: 0x0
    Params_OnAboutToSaveGame params{};
    ProcessEvent(func, &params);
}
void UQuickActionManager::SetQuickActionTrigger() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.SetQuickActionTrigger"));
    struct Params_SetQuickActionTrigger {
    }; // Size: 0x0
    Params_SetQuickActionTrigger params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UQuickActionManager::NewMacroSelectedForMode(int32_t MacroIndex, int32_t RequestedGroupIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.NewMacroSelectedForMode"));
    struct Params_NewMacroSelectedForMode {
        int32_t MacroIndex; // 0x0
        int32_t RequestedGroupIndex; // 0x4
    }; // Size: 0x8
    Params_NewMacroSelectedForMode params{};
    params.MacroIndex = (int32_t)MacroIndex;
    params.RequestedGroupIndex = (int32_t)RequestedGroupIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UQuickActionManager::SetInventoryActionItemIntoCurrentSlot(FString ItemName, EUIQActionBarType ItemType, int32_t Count, FName ItemVariation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.SetInventoryActionItemIntoCurrentSlot"));
    struct Params_SetInventoryActionItemIntoCurrentSlot {
        FString ItemName; // 0x0
        EUIQActionBarType ItemType; // 0x10
        char pad_11[0x3];
        int32_t Count; // 0x14
        FName ItemVariation; // 0x18
    }; // Size: 0x20
    Params_SetInventoryActionItemIntoCurrentSlot params{};
    params.ItemName = (FString)ItemName;
    params.ItemType = (EUIQActionBarType)ItemType;
    params.Count = (int32_t)Count;
    params.ItemVariation = (FName)ItemVariation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UQuickActionManager::SetCurrentGroupIndex(int32_t NewIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.SetCurrentGroupIndex"));
    struct Params_SetCurrentGroupIndex {
        int32_t NewIndex; // 0x0
    }; // Size: 0x4
    Params_SetCurrentGroupIndex params{};
    params.NewIndex = (int32_t)NewIndex;
    ProcessEvent(func, &params);
}
void UQuickActionManager::ResetMacro() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.ResetMacro"));
    struct Params_ResetMacro {
    }; // Size: 0x0
    Params_ResetMacro params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UQuickActionManager::ReplaceItemOnDiamond(FName HolderID, FName NewItem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.ReplaceItemOnDiamond"));
    struct Params_ReplaceItemOnDiamond {
        FName HolderID; // 0x0
        FName NewItem; // 0x8
    }; // Size: 0x10
    Params_ReplaceItemOnDiamond params{};
    params.HolderID = (FName)HolderID;
    params.NewItem = (FName)NewItem;
    ProcessEvent(func, &params);
}
UQuickActionManager* UQuickActionManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.Get"));
    struct Params_Get {
        UQuickActionManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UQuickActionManager*)params.ReturnValue;
}
void UQuickActionManager::RemoveActionGroupOverride(FString OverrideName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.RemoveActionGroupOverride"));
    struct Params_RemoveActionGroupOverride {
        FString OverrideName; // 0x0
    }; // Size: 0x10
    Params_RemoveActionGroupOverride params{};
    params.OverrideName = (FString)OverrideName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UQuickActionManager::GetActionGroupCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GetActionGroupCount"));
    struct Params_GetActionGroupCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetActionGroupCount params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UQuickActionManager::GotoPrevGroup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GotoPrevGroup"));
    struct Params_GotoPrevGroup {
    }; // Size: 0x0
    Params_GotoPrevGroup params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UQuickActionManager::RemoveActionFromDiamond(FName ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.RemoveActionFromDiamond"));
    struct Params_RemoveActionFromDiamond {
        FName ItemName; // 0x0
    }; // Size: 0x8
    Params_RemoveActionFromDiamond params{};
    params.ItemName = (FName)ItemName;
    ProcessEvent(func, &params);
}
int32_t UQuickActionManager::GetItemCount(int32_t GroupIndex, int32_t MacroIndex, int32_t ItemIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GetItemCount"));
    struct Params_GetItemCount {
        int32_t GroupIndex; // 0x0
        int32_t MacroIndex; // 0x4
        int32_t ItemIndex; // 0x8
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetItemCount params{};
    params.GroupIndex = (int32_t)GroupIndex;
    params.MacroIndex = (int32_t)MacroIndex;
    params.ItemIndex = (int32_t)ItemIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UQuickActionManager::OverrideActionGroups(FString OverrideName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.OverrideActionGroups"));
    struct Params_OverrideActionGroups {
        FString OverrideName; // 0x0
    }; // Size: 0x10
    Params_OverrideActionGroups params{};
    params.OverrideName = (FString)OverrideName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UQuickActionManager::HandleMapLocationChanged(UObject* Caller, FString CurrentMapLocationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.HandleMapLocationChanged"));
    struct Params_HandleMapLocationChanged {
        UObject* Caller; // 0x0
        FString CurrentMapLocationName; // 0x8
    }; // Size: 0x18
    Params_HandleMapLocationChanged params{};
    params.Caller = (UObject*)Caller;
    params.CurrentMapLocationName = (FString)CurrentMapLocationName;
    ProcessEvent(func, &params);
}
void UQuickActionManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UQuickActionManager::NewMacroSelected(int32_t MacroIndex, int32_t RequestedGroupIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.NewMacroSelected"));
    struct Params_NewMacroSelected {
        int32_t MacroIndex; // 0x0
        int32_t RequestedGroupIndex; // 0x4
    }; // Size: 0x8
    Params_NewMacroSelected params{};
    params.MacroIndex = (int32_t)MacroIndex;
    params.RequestedGroupIndex = (int32_t)RequestedGroupIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UQuickActionManager::IsMacroIndexValid(int32_t MacroIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.IsMacroIndexValid"));
    struct Params_IsMacroIndexValid {
        int32_t MacroIndex; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsMacroIndexValid params{};
    params.MacroIndex = (int32_t)MacroIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UQuickActionManager::GetActiveMacroIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GetActiveMacroIndex"));
    struct Params_GetActiveMacroIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetActiveMacroIndex params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UQuickActionManager::InitializeLoadouts() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.InitializeLoadouts"));
    struct Params_InitializeLoadouts {
    }; // Size: 0x0
    Params_InitializeLoadouts params{};
    ProcessEvent(func, &params);
}
void UQuickActionManager::IncMacroIndex(int32_t GroupIndex, bool AllowNone, int32_t CapIndexAt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.IncMacroIndex"));
    struct Params_IncMacroIndex {
        int32_t GroupIndex; // 0x0
        bool AllowNone; // 0x4
        char pad_5[0x3];
        int32_t CapIndexAt; // 0x8
    }; // Size: 0xc
    Params_IncMacroIndex params{};
    params.GroupIndex = (int32_t)GroupIndex;
    params.AllowNone = (bool)AllowNone;
    params.CapIndexAt = (int32_t)CapIndexAt;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UQuickActionManager::GotoNextGroup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GotoNextGroup"));
    struct Params_GotoNextGroup {
    }; // Size: 0x0
    Params_GotoNextGroup params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UQuickActionManager::GetWorldStorageOverride(FString ItemName, FString& Storage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GetWorldStorageOverride"));
    struct Params_GetWorldStorageOverride {
        FString ItemName; // 0x0
        FString Storage; // 0x10
    }; // Size: 0x20
    Params_GetWorldStorageOverride params{};
    params.ItemName = (FString)ItemName;
    params.Storage = (FString)Storage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Storage = params.Storage;
}
int32_t UQuickActionManager::GetNumActionsInGroup(int32_t GroupIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GetNumActionsInGroup"));
    struct Params_GetNumActionsInGroup {
        int32_t GroupIndex; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumActionsInGroup params{};
    params.GroupIndex = (int32_t)GroupIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UQuickActionManager::GetTwitchItem(int32_t GroupIndex, int32_t ItemIndex, FName& ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GetTwitchItem"));
    struct Params_GetTwitchItem {
        int32_t GroupIndex; // 0x0
        int32_t ItemIndex; // 0x4
        FName ItemName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetTwitchItem params{};
    params.GroupIndex = (int32_t)GroupIndex;
    params.ItemIndex = (int32_t)ItemIndex;
    params.ItemName = (FName)ItemName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ItemName = params.ItemName;
    return (bool)params.ReturnValue;
}
FName UQuickActionManager::GetQuickWheelItem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GetQuickWheelItem"));
    struct Params_GetQuickWheelItem {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetQuickWheelItem params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
int32_t UQuickActionManager::GetMacroItemCount(int32_t GroupIndex, int32_t MacroIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GetMacroItemCount"));
    struct Params_GetMacroItemCount {
        int32_t GroupIndex; // 0x0
        int32_t MacroIndex; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMacroItemCount params{};
    params.GroupIndex = (int32_t)GroupIndex;
    params.MacroIndex = (int32_t)MacroIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UQuickActionManager::GetPrevGroupIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GetPrevGroupIndex"));
    struct Params_GetPrevGroupIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPrevGroupIndex params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
EUIQActionBarType UQuickActionManager::GetItemType(int32_t GroupIndex, int32_t MacroIndex, int32_t ItemIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GetItemType"));
    struct Params_GetItemType {
        int32_t GroupIndex; // 0x0
        int32_t MacroIndex; // 0x4
        int32_t ItemIndex; // 0x8
        EUIQActionBarType ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetItemType params{};
    params.GroupIndex = (int32_t)GroupIndex;
    params.MacroIndex = (int32_t)MacroIndex;
    params.ItemIndex = (int32_t)ItemIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EUIQActionBarType)params.ReturnValue;
}
int32_t UQuickActionManager::GetNextGroupIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GetNextGroupIndex"));
    struct Params_GetNextGroupIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNextGroupIndex params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UQuickActionManager::GetItemNameFromMode(int32_t GroupIndex, int32_t MacroIndex, int32_t ActionIndex, FName& ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GetItemNameFromMode"));
    struct Params_GetItemNameFromMode {
        int32_t GroupIndex; // 0x0
        int32_t MacroIndex; // 0x4
        int32_t ActionIndex; // 0x8
        FName ItemName; // 0xc
    }; // Size: 0x14
    Params_GetItemNameFromMode params{};
    params.GroupIndex = (int32_t)GroupIndex;
    params.MacroIndex = (int32_t)MacroIndex;
    params.ActionIndex = (int32_t)ActionIndex;
    params.ItemName = (FName)ItemName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ItemName = params.ItemName;
}
int32_t UQuickActionManager::GetActiveGroupIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.GetActiveGroupIndex"));
    struct Params_GetActiveGroupIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetActiveGroupIndex params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UQuickActionManager::DoesSelectedTransfigurationSpellAffectObject(FName InDbID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.DoesSelectedTransfigurationSpellAffectObject"));
    struct Params_DoesSelectedTransfigurationSpellAffectObject {
        FName InDbID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_DoesSelectedTransfigurationSpellAffectObject params{};
    params.InDbID = (FName)InDbID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UQuickActionManager::DecMacroIndex(int32_t GroupIndex, bool AllowNone, int32_t CapIndexAt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.DecMacroIndex"));
    struct Params_DecMacroIndex {
        int32_t GroupIndex; // 0x0
        bool AllowNone; // 0x4
        char pad_5[0x3];
        int32_t CapIndexAt; // 0x8
    }; // Size: 0xc
    Params_DecMacroIndex params{};
    params.GroupIndex = (int32_t)GroupIndex;
    params.AllowNone = (bool)AllowNone;
    params.CapIndexAt = (int32_t)CapIndexAt;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UQuickActionManager::DecGroupIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.DecGroupIndex"));
    struct Params_DecGroupIndex {
    }; // Size: 0x0
    Params_DecGroupIndex params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UQuickActionManager::ContextChanged(bool bNewResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.ContextChanged"));
    struct Params_ContextChanged {
        bool bNewResult; // 0x0
    }; // Size: 0x1
    Params_ContextChanged params{};
    params.bNewResult = (bool)bNewResult;
    ProcessEvent(func, &params);
}
void UQuickActionManager::ContextAdded(FName InContextName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.ContextAdded"));
    struct Params_ContextAdded {
        FName InContextName; // 0x0
    }; // Size: 0x8
    Params_ContextAdded params{};
    params.InContextName = (FName)InContextName;
    ProcessEvent(func, &params);
}
void UQuickActionManager::ClearCurWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.ClearCurWorld"));
    struct Params_ClearCurWorld {
    }; // Size: 0x0
    Params_ClearCurWorld params{};
    ProcessEvent(func, &params);
}
void UQuickActionManager::ClearContextCallbacks() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.ClearContextCallbacks"));
    struct Params_ClearContextCallbacks {
    }; // Size: 0x0
    Params_ClearContextCallbacks params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UQuickActionManager::AddAncientMagicPoints(int32_t NumPoints) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionManager.AddAncientMagicPoints"));
    struct Params_AddAncientMagicPoints {
        int32_t NumPoints; // 0x0
    }; // Size: 0x4
    Params_AddAncientMagicPoints params{};
    params.NumPoints = (int32_t)NumPoints;
    ProcessEvent(func, &params);
}
