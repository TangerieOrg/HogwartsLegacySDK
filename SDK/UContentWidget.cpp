#include "UContentWidget.hpp"
#include "UFunction.hpp"
#include "UPanelSlot.hpp"
#include "UPanelWidget.hpp"
#include "UWidget.hpp"
UContentWidget* UContentWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.ContentWidget");
    return (UContentWidget*)res;
}
UPanelSlot* UContentWidget::SetContent(UWidget* Content) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ContentWidget.SetContent"));
    struct Params_SetContent {
        UWidget* Content; // 0x0
        UPanelSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SetContent params{};
    params.Content = (UWidget*)Content;
    ProcessEvent(func, &params);
    return (UPanelSlot*)params.ReturnValue;
}
UPanelSlot* UContentWidget::GetContentSlot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ContentWidget.GetContentSlot"));
    struct Params_GetContentSlot {
        UPanelSlot* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetContentSlot params{};
    ProcessEvent(func, &params);
    return (UPanelSlot*)params.ReturnValue;
}
UWidget* UContentWidget::GetContent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ContentWidget.GetContent"));
    struct Params_GetContent {
        UWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetContent params{};
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
