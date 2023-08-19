#include "EUIQActionBarType.hpp"
#include "UCommonActionsBase.hpp"
#include "UFunction.hpp"
#include "UMiniSelectionDiamondBase.hpp"
#include "USpellSelectionDiamondBase.hpp"
#include "UUserWidget.hpp"
void UCommonActionsBase::OnToggleButtonCallouts(bool IsSlotting) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.OnToggleButtonCallouts"));
    struct Params_OnToggleButtonCallouts {
        bool IsSlotting; // 0x0
    }; // Size: 0x1
    Params_OnToggleButtonCallouts params{};
    params.IsSlotting = (bool)IsSlotting;
    ProcessEvent(func, &params);
}
UCommonActionsBase* UCommonActionsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CommonActionsBase");
    return (UCommonActionsBase*)res;
}
void UCommonActionsBase::ToggleButtonCallouts(bool IsSlotting) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.ToggleButtonCallouts"));
    struct Params_ToggleButtonCallouts {
        bool IsSlotting; // 0x0
    }; // Size: 0x1
    Params_ToggleButtonCallouts params{};
    params.IsSlotting = (bool)IsSlotting;
    ProcessEvent(func, &params);
}
void UCommonActionsBase::PopulateMainLoadout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.PopulateMainLoadout"));
    struct Params_PopulateMainLoadout {
    }; // Size: 0x0
    Params_PopulateMainLoadout params{};
    ProcessEvent(func, &params);
}
void UCommonActionsBase::SetItemData(int32_t GroupIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.SetItemData"));
    struct Params_SetItemData {
        int32_t GroupIndex; // 0x0
    }; // Size: 0x4
    Params_SetItemData params{};
    params.GroupIndex = (int32_t)GroupIndex;
    ProcessEvent(func, &params);
}
void UCommonActionsBase::SetSelectedIndex(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.SetSelectedIndex"));
    struct Params_SetSelectedIndex {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_SetSelectedIndex params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
}
void UCommonActionsBase::ShowSelected(int32_t GroupIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.ShowSelected"));
    struct Params_ShowSelected {
        int32_t GroupIndex; // 0x0
    }; // Size: 0x4
    Params_ShowSelected params{};
    params.GroupIndex = (int32_t)GroupIndex;
    ProcessEvent(func, &params);
}
void UCommonActionsBase::SetMainLoadout(USpellSelectionDiamondBase* Loadout) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.SetMainLoadout"));
    struct Params_SetMainLoadout {
        USpellSelectionDiamondBase* Loadout; // 0x0
    }; // Size: 0x8
    Params_SetMainLoadout params{};
    params.Loadout = (USpellSelectionDiamondBase*)Loadout;
    ProcessEvent(func, &params);
}
void UCommonActionsBase::OnShowSpellGroupDiamond() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.OnShowSpellGroupDiamond"));
    struct Params_OnShowSpellGroupDiamond {
    }; // Size: 0x0
    Params_OnShowSpellGroupDiamond params{};
    ProcessEvent(func, &params);
}
void UCommonActionsBase::OnHideSpellGroupDiamond() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.OnHideSpellGroupDiamond"));
    struct Params_OnHideSpellGroupDiamond {
    }; // Size: 0x0
    Params_OnHideSpellGroupDiamond params{};
    ProcessEvent(func, &params);
}
void UCommonActionsBase::OnActivateMiniDiamond(bool Activate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.OnActivateMiniDiamond"));
    struct Params_OnActivateMiniDiamond {
        bool Activate; // 0x0
    }; // Size: 0x1
    Params_OnActivateMiniDiamond params{};
    params.Activate = (bool)Activate;
    ProcessEvent(func, &params);
}
void UCommonActionsBase::HandleDPadUp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.HandleDPadUp"));
    struct Params_HandleDPadUp {
    }; // Size: 0x0
    Params_HandleDPadUp params{};
    ProcessEvent(func, &params);
}
void UCommonActionsBase::HandleDPadRight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.HandleDPadRight"));
    struct Params_HandleDPadRight {
    }; // Size: 0x0
    Params_HandleDPadRight params{};
    ProcessEvent(func, &params);
}
void UCommonActionsBase::HandleDPadLeft() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.HandleDPadLeft"));
    struct Params_HandleDPadLeft {
    }; // Size: 0x0
    Params_HandleDPadLeft params{};
    ProcessEvent(func, &params);
}
void UCommonActionsBase::HandleDPadDown() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.HandleDPadDown"));
    struct Params_HandleDPadDown {
    }; // Size: 0x0
    Params_HandleDPadDown params{};
    ProcessEvent(func, &params);
}
void UCommonActionsBase::AddMiniSelectionItem(UMiniSelectionDiamondBase* Item) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.AddMiniSelectionItem"));
    struct Params_AddMiniSelectionItem {
        UMiniSelectionDiamondBase* Item; // 0x0
    }; // Size: 0x8
    Params_AddMiniSelectionItem params{};
    params.Item = (UMiniSelectionDiamondBase*)Item;
    ProcessEvent(func, &params);
}
void UCommonActionsBase::AddItemToGroup(FString ItemName, FString Variation, FName HolderID, int32_t Amount, EUIQActionBarType ItemType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.AddItemToGroup"));
    struct Params_AddItemToGroup {
        FString ItemName; // 0x0
        FString Variation; // 0x10
        FName HolderID; // 0x20
        int32_t Amount; // 0x28
        EUIQActionBarType ItemType; // 0x2c
    }; // Size: 0x2d
    Params_AddItemToGroup params{};
    params.ItemName = (FString)ItemName;
    params.Variation = (FString)Variation;
    params.HolderID = (FName)HolderID;
    params.Amount = (int32_t)Amount;
    params.ItemType = (EUIQActionBarType)ItemType;
    ProcessEvent(func, &params);
}
void UCommonActionsBase::ActivateCurrentMiniDiamond(bool Activate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CommonActionsBase.ActivateCurrentMiniDiamond"));
    struct Params_ActivateCurrentMiniDiamond {
        bool Activate; // 0x0
    }; // Size: 0x1
    Params_ActivateCurrentMiniDiamond params{};
    params.Activate = (bool)Activate;
    ProcessEvent(func, &params);
}
