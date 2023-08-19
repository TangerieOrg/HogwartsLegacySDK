#include "EInputEvent.hpp"
#include "EInventoryTabCategory.hpp"
#include "EUIDisplayMode.hpp"
#include "EUMGInputAction.hpp"
#include "FInventoryResult.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_InventoryInterface_C.hpp"
#include "UUserWidget.hpp"
void UUI_BPI_InventoryInterface_C::GetPlayerInventory(TArray<FInventoryResult>& PlayerInventory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.GetPlayerInventory"));
    struct Params_GetPlayerInventory {
        TArray<FInventoryResult> PlayerInventory; // 0x0
    }; // Size: 0x10
    Params_GetPlayerInventory params{};
    params.PlayerInventory = (TArray<FInventoryResult>)PlayerInventory;
    ProcessEvent(func, &params);
    PlayerInventory = params.PlayerInventory;
}
UUI_BPI_InventoryInterface_C* UUI_BPI_InventoryInterface_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C");
    return (UUI_BPI_InventoryInterface_C*)res;
}
void UUI_BPI_InventoryInterface_C::I_RefreshInventory() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_RefreshInventory"));
    struct Params_I_RefreshInventory {
    }; // Size: 0x0
    Params_I_RefreshInventory params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::I_AddInspectable(FString RichPaperID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_AddInspectable"));
    struct Params_I_AddInspectable {
        FString RichPaperID; // 0x0
    }; // Size: 0x10
    Params_I_AddInspectable params{};
    params.RichPaperID = (FString)RichPaperID;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::I_GetInventoryTabCategory(EInventoryTabCategory& TabCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_GetInventoryTabCategory"));
    struct Params_I_GetInventoryTabCategory {
        EInventoryTabCategory TabCategory; // 0x0
    }; // Size: 0x1
    Params_I_GetInventoryTabCategory params{};
    params.TabCategory = (EInventoryTabCategory)TabCategory;
    ProcessEvent(func, &params);
    TabCategory = params.TabCategory;
}
void UUI_BPI_InventoryInterface_C::SetToInventory(bool ToInventory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.SetToInventory"));
    struct Params_SetToInventory {
        bool ToInventory; // 0x0
    }; // Size: 0x1
    Params_SetToInventory params{};
    params.ToInventory = (bool)ToInventory;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::SetMode(EUIDisplayMode UIDisplayMode) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.SetMode"));
    struct Params_SetMode {
        EUIDisplayMode UIDisplayMode; // 0x0
    }; // Size: 0x1
    Params_SetMode params{};
    params.UIDisplayMode = (EUIDisplayMode)UIDisplayMode;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::I_InitButtonsToEmpty() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_InitButtonsToEmpty"));
    struct Params_I_InitButtonsToEmpty {
    }; // Size: 0x0
    Params_I_InitButtonsToEmpty params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::GetInteractTargetInfo(FName& TargetId, FName& TargetHolderID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.GetInteractTargetInfo"));
    struct Params_GetInteractTargetInfo {
        FName TargetId; // 0x0
        FName TargetHolderID; // 0x8
    }; // Size: 0x10
    Params_GetInteractTargetInfo params{};
    params.TargetId = (FName)TargetId;
    params.TargetHolderID = (FName)TargetHolderID;
    ProcessEvent(func, &params);
    TargetId = params.TargetId;
    TargetHolderID = params.TargetHolderID;
}
void UUI_BPI_InventoryInterface_C::I_ShowAmountWidget(int32_t Max, FName ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_ShowAmountWidget"));
    struct Params_I_ShowAmountWidget {
        int32_t Max; // 0x0
        FName ItemName; // 0x4
    }; // Size: 0xc
    Params_I_ShowAmountWidget params{};
    params.Max = (int32_t)Max;
    params.ItemName = (FName)ItemName;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::GetItemBox(UUserWidget*& ItemBox) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.GetItemBox"));
    struct Params_GetItemBox {
        UUserWidget* ItemBox; // 0x0
    }; // Size: 0x8
    Params_GetItemBox params{};
    params.ItemBox = (UUserWidget*)ItemBox;
    ProcessEvent(func, &params);
    ItemBox = params.ItemBox;
}
void UUI_BPI_InventoryInterface_C::I_GetInventory(UUserWidget*& Inventory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_GetInventory"));
    struct Params_I_GetInventory {
        UUserWidget* Inventory; // 0x0
    }; // Size: 0x8
    Params_I_GetInventory params{};
    params.Inventory = (UUserWidget*)Inventory;
    ProcessEvent(func, &params);
    Inventory = params.Inventory;
}
void UUI_BPI_InventoryInterface_C::I_SetActiveButton(UUserWidget* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_SetActiveButton"));
    struct Params_I_SetActiveButton {
        UUserWidget* Button; // 0x0
    }; // Size: 0x8
    Params_I_SetActiveButton params{};
    params.Button = (UUserWidget*)Button;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::SetButtonTransferDrop(bool Transfer_Drop) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.SetButtonTransferDrop"));
    struct Params_SetButtonTransferDrop {
        bool Transfer_Drop; // 0x0
    }; // Size: 0x1
    Params_SetButtonTransferDrop params{};
    params.Transfer_Drop = (bool)Transfer_Drop;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::I_ClickHandler(bool& Handled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_ClickHandler"));
    struct Params_I_ClickHandler {
        bool Handled; // 0x0
    }; // Size: 0x1
    Params_I_ClickHandler params{};
    params.Handled = (bool)Handled;
    ProcessEvent(func, &params);
    Handled = params.Handled;
}
void UUI_BPI_InventoryInterface_C::SetCurrentIconButton(UUserWidget* CurrentButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.SetCurrentIconButton"));
    struct Params_SetCurrentIconButton {
        UUserWidget* CurrentButton; // 0x0
    }; // Size: 0x8
    Params_SetCurrentIconButton params{};
    params.CurrentButton = (UUserWidget*)CurrentButton;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::I_RemoveInspectable(bool& Removed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_RemoveInspectable"));
    struct Params_I_RemoveInspectable {
        bool Removed; // 0x0
    }; // Size: 0x1
    Params_I_RemoveInspectable params{};
    params.Removed = (bool)Removed;
    ProcessEvent(func, &params);
    Removed = params.Removed;
}
void UUI_BPI_InventoryInterface_C::ShowNavBar(bool ShouldShow) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.ShowNavBar"));
    struct Params_ShowNavBar {
        bool ShouldShow; // 0x0
    }; // Size: 0x1
    Params_ShowNavBar params{};
    params.ShouldShow = (bool)ShouldShow;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::I_Sort() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_Sort"));
    struct Params_I_Sort {
    }; // Size: 0x0
    Params_I_Sort params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::I_SetInventoryCategory(EInventoryTabCategory Category) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_SetInventoryCategory"));
    struct Params_I_SetInventoryCategory {
        EInventoryTabCategory Category; // 0x0
    }; // Size: 0x1
    Params_I_SetInventoryCategory params{};
    params.Category = (EInventoryTabCategory)Category;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::GetScrollBox(UUserWidget*& InventoryScrollBox) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.GetScrollBox"));
    struct Params_GetScrollBox {
        UUserWidget* InventoryScrollBox; // 0x0
    }; // Size: 0x8
    Params_GetScrollBox params{};
    params.InventoryScrollBox = (UUserWidget*)InventoryScrollBox;
    ProcessEvent(func, &params);
    InventoryScrollBox = params.InventoryScrollBox;
}
void UUI_BPI_InventoryInterface_C::SetPickPocketing(bool PickPocketing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.SetPickPocketing"));
    struct Params_SetPickPocketing {
        bool PickPocketing; // 0x0
    }; // Size: 0x1
    Params_SetPickPocketing params{};
    params.PickPocketing = (bool)PickPocketing;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::I_SetParent(UUserWidget* NewParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.I_SetParent"));
    struct Params_I_SetParent {
        UUserWidget* NewParam; // 0x0
    }; // Size: 0x8
    Params_I_SetParent params{};
    params.NewParam = (UUserWidget*)NewParam;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::InventoryData() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.InventoryData"));
    struct Params_InventoryData {
    }; // Size: 0x0
    Params_InventoryData params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::UMGInputHandler(EUMGInputAction InputAction, EInputEvent InputEvent, bool& Handled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.UMGInputHandler"));
    struct Params_UMGInputHandler {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool Handled; // 0x2
    }; // Size: 0x3
    Params_UMGInputHandler params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.Handled = (bool)Handled;
    ProcessEvent(func, &params);
    Handled = params.Handled;
}
void UUI_BPI_InventoryInterface_C::ClickHandler(bool& Handled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.ClickHandler"));
    struct Params_ClickHandler {
        bool Handled; // 0x0
    }; // Size: 0x1
    Params_ClickHandler params{};
    params.Handled = (bool)Handled;
    ProcessEvent(func, &params);
    Handled = params.Handled;
}
void UUI_BPI_InventoryInterface_C::SetStride(int32_t Stride) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.SetStride"));
    struct Params_SetStride {
        int32_t Stride; // 0x0
    }; // Size: 0x4
    Params_SetStride params{};
    params.Stride = (int32_t)Stride;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryInterface_C::SetInteractTargetInfo(FName TargetId, FName TargetHolderID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryInterface.UI_BPI_InventoryInterface_C.SetInteractTargetInfo"));
    struct Params_SetInteractTargetInfo {
        FName TargetId; // 0x0
        FName TargetHolderID; // 0x8
    }; // Size: 0x10
    Params_SetInteractTargetInfo params{};
    params.TargetId = (FName)TargetId;
    params.TargetHolderID = (FName)TargetHolderID;
    ProcessEvent(func, &params);
}
