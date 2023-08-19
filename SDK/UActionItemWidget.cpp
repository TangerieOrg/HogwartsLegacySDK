#include "UActionItemWidget.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UUserWidget.hpp"
UActionItemWidget* UActionItemWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ActionItemWidget");
    return (UActionItemWidget*)res;
}
void UActionItemWidget::ExecuteAction() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionItemWidget.ExecuteAction"));
    struct Params_ExecuteAction {
    }; // Size: 0x0
    Params_ExecuteAction params{};
    ProcessEvent(func, &params);
}
void UActionItemWidget::CollectItemData(int32_t LoadoutIndex, int32_t ItemIndex, UImage* ItemIcon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionItemWidget.CollectItemData"));
    struct Params_CollectItemData {
        int32_t LoadoutIndex; // 0x0
        int32_t ItemIndex; // 0x4
        UImage* ItemIcon; // 0x8
    }; // Size: 0x10
    Params_CollectItemData params{};
    params.LoadoutIndex = (int32_t)LoadoutIndex;
    params.ItemIndex = (int32_t)ItemIndex;
    params.ItemIcon = (UImage*)ItemIcon;
    ProcessEvent(func, &params);
}
