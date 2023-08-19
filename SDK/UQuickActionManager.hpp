#pragma once
#include <cstdint>
#include "EUIQActionBarType.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UQuickActionManager : public UObject {
public:
    char pad_28[0x188];
    static UQuickActionManager* StaticClass();
    static bool ValidateDefaultGroupSelections(int32_t GroupIndex);
    void UseQuickWheelItem();
    static void UpdateSelectedActionItem(FString ItemName, FString ItemVariation, EUIQActionBarType ItemType, FString ItemHolder, int32_t RequestedGroupIndex, int32_t Amount, int32_t RequestedMacroIndex, int32_t Index);
    void SlotToolFromCode(FString ItemId, int32_t Slot);
    void SlotSpellFromCode(FString SpellID, int32_t Slot, int32_t Group);
    void SlotInventoryItemFromCode(FString ItemId, int32_t Amount, int32_t Slot);
    void SetQuickWheelItem(FName ItemName);
    static void SetQuickActionTrigger();
    static void SetInventoryActionItemIntoCurrentSlot(FString ItemName, EUIQActionBarType ItemType, int32_t Count, FName ItemVariation);
    void SetCurrentGroupIndex(int32_t NewIndex);
    static void ResetMacro();
    void ReplaceItemOnDiamond(FName HolderID, FName NewItem);
    static void RemoveActionGroupOverride(FString OverrideName);
    void RemoveActionFromDiamond(FName ItemName);
    static void OverrideActionGroups(FString OverrideName);
    void OnSaveGameLoaded();
    void OnAboutToSaveGame();
    static void NewMacroSelectedForMode(int32_t MacroIndex, int32_t RequestedGroupIndex);
    static void NewMacroSelected(int32_t MacroIndex, int32_t RequestedGroupIndex);
    static bool IsMacroIndexValid(int32_t MacroIndex);
    void InitializeLoadouts();
    static void IncMacroIndex(int32_t GroupIndex, bool AllowNone, int32_t CapIndexAt);
    static void IncGroupIndex();
    void HandleMapLocationChanged(UObject* Caller, FString CurrentMapLocationName);
    static void GotoPrevGroup();
    static void GotoNextGroup();
    static void GetWorldStorageOverride(FString ItemName, FString& Storage);
    static bool GetTwitchItem(int32_t GroupIndex, int32_t ItemIndex, FName& ItemName);
    FName GetQuickWheelItem();
    static int32_t GetPrevGroupIndex();
    static int32_t GetNumActionsInGroup(int32_t GroupIndex);
    static int32_t GetNextGroupIndex();
    static int32_t GetMacroItemCount(int32_t GroupIndex, int32_t MacroIndex);
    static int32_t GetMacroIndexByName(FString ItemName);
    static EUIQActionBarType GetItemType(int32_t GroupIndex, int32_t MacroIndex, int32_t ItemIndex);
    static void GetItemNameFromMode(int32_t GroupIndex, int32_t MacroIndex, int32_t ActionIndex, FName& ItemName);
    static void GetItemName(int32_t GroupIndex, int32_t MacroIndex, int32_t ActionIndex, FName& ItemName);
    static int32_t GetItemCount(int32_t GroupIndex, int32_t MacroIndex, int32_t ItemIndex);
    static int32_t GetActiveMacroIndex();
    static int32_t GetActiveGroupIndex();
    static int32_t GetActionGroupCount();
    static UQuickActionManager* Get();
    static bool DoesSelectedTransfigurationSpellAffectObject(FName InDbID);
    static void DecMacroIndex(int32_t GroupIndex, bool AllowNone, int32_t CapIndexAt);
    static void DecGroupIndex();
    void ContextChanged(bool bNewResult);
    void ContextAdded(FName InContextName);
    void ClearCurWorld();
    static void ClearContextCallbacks();
    void CheckForWorldOverrides();
    void AddAncientMagicPoints(int32_t NumPoints);
}; // Size: 0x1b0
#pragma pack(pop)
