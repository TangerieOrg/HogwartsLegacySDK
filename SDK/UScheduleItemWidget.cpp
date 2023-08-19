#include "FActivityStruct.hpp"
#include "UFunction.hpp"
#include "UScheduleItemWidget.hpp"
#include "UUserWidget.hpp"
UScheduleItemWidget* UScheduleItemWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ScheduleItemWidget");
    return (UScheduleItemWidget*)res;
}
void UScheduleItemWidget::ScheduleItemHovered() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduleItemWidget.ScheduleItemHovered"));
    struct Params_ScheduleItemHovered {
    }; // Size: 0x0
    Params_ScheduleItemHovered params{};
    ProcessEvent(func, &params);
}
bool UScheduleItemWidget::SetInformation(FActivityStruct Activity, bool ShowText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduleItemWidget.SetInformation"));
    struct Params_SetInformation {
        FActivityStruct Activity; // 0x0
        bool ShowText; // 0x28
        bool ReturnValue; // 0x29
    }; // Size: 0x2a
    Params_SetInformation params{};
    params.Activity = (FActivityStruct)Activity;
    params.ShowText = (bool)ShowText;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduleItemWidget::ScheduleItemUnhovered() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduleItemWidget.ScheduleItemUnhovered"));
    struct Params_ScheduleItemUnhovered {
    }; // Size: 0x0
    Params_ScheduleItemUnhovered params{};
    ProcessEvent(func, &params);
}
void UScheduleItemWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduleItemWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
