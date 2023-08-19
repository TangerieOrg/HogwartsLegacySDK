#pragma once
#include <cstdint>
#include "EUIQActionBarType.hpp"
#include "UUserWidget.hpp"
class USpellSelectionDiamondBase;
class UMiniSelectionDiamondBase;
#pragma pack(push, 1)
class UCommonActionsBase : public UUserWidget {
public:
    int32_t AvailableGroups; // 0x268
    int32_t CurrentGroupIndex; // 0x26c
    char pad_270[0x10];
    USpellSelectionDiamondBase* MainLoadout; // 0x280
    static UCommonActionsBase* StaticClass();
    void ToggleButtonCallouts(bool IsSlotting);
    void ShowSelected(int32_t GroupIndex);
    void SetSelectedIndex(int32_t Index);
    void SetMainLoadout(USpellSelectionDiamondBase* Loadout);
    void SetItemData(int32_t GroupIndex);
    void PopulateMainLoadout();
    void OnToggleButtonCallouts(bool IsSlotting);
    void OnShowSpellGroupDiamond();
    void OnHideSpellGroupDiamond();
    void OnActivateMiniDiamond(bool Activate);
    void HandleDPadUp();
    void HandleDPadRight();
    void HandleDPadLeft();
    void HandleDPadDown();
    void AddMiniSelectionItem(UMiniSelectionDiamondBase* Item);
    void AddItemToGroup(FString ItemName, FString Variation, FName HolderID, int32_t Amount, EUIQActionBarType ItemType);
    void ActivateCurrentMiniDiamond(bool Activate);
}; // Size: 0x288
#pragma pack(pop)
