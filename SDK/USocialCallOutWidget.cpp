#include "FSocialCallout.hpp"
#include "UFunction.hpp"
#include "USocialCallOutWidget.hpp"
#include "UUserWidget.hpp"
void USocialCallOutWidget::UpdateCallout(FSocialCallout SocialCallout) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialCallOutWidget.UpdateCallout"));
    struct Params_UpdateCallout {
        FSocialCallout SocialCallout; // 0x0
    }; // Size: 0x30
    Params_UpdateCallout params{};
    params.SocialCallout = (FSocialCallout)SocialCallout;
    ProcessEvent(func, &params);
}
USocialCallOutWidget* USocialCallOutWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SocialCallOutWidget");
    return (USocialCallOutWidget*)res;
}
void USocialCallOutWidget::ShowCallout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialCallOutWidget.ShowCallout"));
    struct Params_ShowCallout {
    }; // Size: 0x0
    Params_ShowCallout params{};
    ProcessEvent(func, &params);
}
void USocialCallOutWidget::RemoveCallout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialCallOutWidget.RemoveCallout"));
    struct Params_RemoveCallout {
    }; // Size: 0x0
    Params_RemoveCallout params{};
    ProcessEvent(func, &params);
}
void USocialCallOutWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialCallOutWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
