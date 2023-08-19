#include "EInputEvent.hpp"
#include "EInventorySortType.hpp"
#include "EInventoryTabCategory.hpp"
#include "EUMGInputAction.hpp"
#include "FInventoryHolder.hpp"
#include "FInventoryResult.hpp"
#include "FLegendItemData.hpp"
#include "UFunction.hpp"
#include "UInventoryState.hpp"
#include "UObject.hpp"
#include "UUserWidget.hpp"
UInventoryState* UInventoryState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InventoryState");
    return (UInventoryState*)res;
}
TArray<UUserWidget*> UInventoryState::GetNonExpandableTooltipContent(UUserWidget* hoveredButton) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryState.GetNonExpandableTooltipContent"));
    struct Params_GetNonExpandableTooltipContent {
        UUserWidget* hoveredButton; // 0x0
        TArray<UUserWidget*> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetNonExpandableTooltipContent params{};
    params.hoveredButton = (UUserWidget*)hoveredButton;
    ProcessEvent(func, &params);
    return (TArray<UUserWidget*>)params.ReturnValue;
}
UUserWidget* UInventoryState::GetTooltipContent(UUserWidget* hoveredButton) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryState.GetTooltipContent"));
    struct Params_GetTooltipContent {
        UUserWidget* hoveredButton; // 0x0
        UUserWidget* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetTooltipContent params{};
    params.hoveredButton = (UUserWidget*)hoveredButton;
    ProcessEvent(func, &params);
    return (UUserWidget*)params.ReturnValue;
}
void UInventoryState::OnEndState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryState.OnEndState"));
    struct Params_OnEndState {
    }; // Size: 0x0
    Params_OnEndState params{};
    ProcessEvent(func, &params);
}
void UInventoryState::InitializeState(UUserWidget* OwningWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryState.InitializeState"));
    struct Params_InitializeState {
        UUserWidget* OwningWidget; // 0x0
    }; // Size: 0x8
    Params_InitializeState params{};
    params.OwningWidget = (UUserWidget*)OwningWidget;
    ProcessEvent(func, &params);
}
void UInventoryState::GetTooltipLegendData(FInventoryResult InventoryItem, TArray<FLegendItemData>& LegendData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryState.GetTooltipLegendData"));
    struct Params_GetTooltipLegendData {
        FInventoryResult InventoryItem; // 0x0
        TArray<FLegendItemData> LegendData; // 0x88
    }; // Size: 0x98
    Params_GetTooltipLegendData params{};
    params.InventoryItem = (FInventoryResult)InventoryItem;
    params.LegendData = (TArray<FLegendItemData>)LegendData;
    ProcessEvent(func, &params);
    LegendData = params.LegendData;
}
bool UInventoryState::HandleUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, UUserWidget* InventoryButton) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryState.HandleUMGInputAction"));
    struct Params_HandleUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        char pad_2[0x6];
        UUserWidget* InventoryButton; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_HandleUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.InventoryButton = (UUserWidget*)InventoryButton;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UInventoryState::HandleClicked(UUserWidget* InventoryButton) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryState.HandleClicked"));
    struct Params_HandleClicked {
        UUserWidget* InventoryButton; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HandleClicked params{};
    params.InventoryButton = (UUserWidget*)InventoryButton;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UInventoryState::GetMenuTitle(EInventoryTabCategory TabCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryState.GetMenuTitle"));
    struct Params_GetMenuTitle {
        EInventoryTabCategory TabCategory; // 0x0
        char pad_1[0x7];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetMenuTitle params{};
    params.TabCategory = (EInventoryTabCategory)TabCategory;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
TArray<FInventoryHolder> UInventoryState::GetInventoryItemData(EInventorySortType SortType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryState.GetInventoryItemData"));
    struct Params_GetInventoryItemData {
        EInventorySortType SortType; // 0x0
        char pad_1[0x7];
        TArray<FInventoryHolder> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetInventoryItemData params{};
    params.SortType = (EInventorySortType)SortType;
    ProcessEvent(func, &params);
    return (TArray<FInventoryHolder>)params.ReturnValue;
}
EInventoryTabCategory UInventoryState::GetDefaultInventoryTab() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryState.GetDefaultInventoryTab"));
    struct Params_GetDefaultInventoryTab {
        EInventoryTabCategory ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDefaultInventoryTab params{};
    ProcessEvent(func, &params);
    return (EInventoryTabCategory)params.ReturnValue;
}
