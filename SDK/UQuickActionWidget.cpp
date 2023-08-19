#include "FInventoryResult.hpp"
#include "UFunction.hpp"
#include "UQuickActionWidget.hpp"
#include "UUserWidget.hpp"
UQuickActionWidget* UQuickActionWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.QuickActionWidget");
    return (UQuickActionWidget*)res;
}
void UQuickActionWidget::SetItemArray(TArray<FInventoryResult>& Items, int32_t StartingIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionWidget.SetItemArray"));
    struct Params_SetItemArray {
        TArray<FInventoryResult> Items; // 0x0
        int32_t StartingIndex; // 0x10
    }; // Size: 0x14
    Params_SetItemArray params{};
    params.Items = (TArray<FInventoryResult>)Items;
    params.StartingIndex = (int32_t)StartingIndex;
    ProcessEvent(func, &params);
    Items = params.Items;
}
void UQuickActionWidget::InitActionMenuEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuickActionWidget.InitActionMenuEvent"));
    struct Params_InitActionMenuEvent {
    }; // Size: 0x0
    Params_InitActionMenuEvent params{};
    ProcessEvent(func, &params);
}
