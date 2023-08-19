#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UHorizontalBoxSlot.hpp"
#include "UPanelWidget.hpp"
#include "UWidget.hpp"
UHorizontalBox* UHorizontalBox::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.HorizontalBox");
    return (UHorizontalBox*)res;
}
UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(UWidget* Content) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.HorizontalBox.AddChildToHorizontalBox"));
    struct Params_AddChildToHorizontalBox {
        UWidget* Content; // 0x0
        UHorizontalBoxSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AddChildToHorizontalBox params{};
    params.Content = (UWidget*)Content;
    ProcessEvent(func, &params);
    return (UHorizontalBoxSlot*)params.ReturnValue;
}
