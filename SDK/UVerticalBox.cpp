#include "UFunction.hpp"
#include "UPanelWidget.hpp"
#include "UVerticalBox.hpp"
#include "UVerticalBoxSlot.hpp"
#include "UWidget.hpp"
UVerticalBox* UVerticalBox::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.VerticalBox");
    return (UVerticalBox*)res;
}
UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(UWidget* Content) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.VerticalBox.AddChildToVerticalBox"));
    struct Params_AddChildToVerticalBox {
        UWidget* Content; // 0x0
        UVerticalBoxSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AddChildToVerticalBox params{};
    params.Content = (UWidget*)Content;
    ProcessEvent(func, &params);
    return (UVerticalBoxSlot*)params.ReturnValue;
}
