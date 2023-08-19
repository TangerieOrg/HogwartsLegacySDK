#include "FTaskData.hpp"
#include "UFunction.hpp"
#include "UTrackingInfoWidget.hpp"
#include "UUserWidget.hpp"
UTrackingInfoWidget* UTrackingInfoWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TrackingInfoWidget");
    return (UTrackingInfoWidget*)res;
}
void UTrackingInfoWidget::CollapseTrackerInfo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TrackingInfoWidget.CollapseTrackerInfo"));
    struct Params_CollapseTrackerInfo {
    }; // Size: 0x0
    Params_CollapseTrackerInfo params{};
    ProcessEvent(func, &params);
}
void UTrackingInfoWidget::OnDisplayInputReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TrackingInfoWidget.OnDisplayInputReleased"));
    struct Params_OnDisplayInputReleased {
    }; // Size: 0x0
    Params_OnDisplayInputReleased params{};
    ProcessEvent(func, &params);
}
bool UTrackingInfoWidget::GetIsExtended() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TrackingInfoWidget.GetIsExtended"));
    struct Params_GetIsExtended {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsExtended params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTrackingInfoWidget::GetIsDisplayed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TrackingInfoWidget.GetIsDisplayed"));
    struct Params_GetIsDisplayed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsDisplayed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTrackingInfoWidget::DisplayExtendedInfo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TrackingInfoWidget.DisplayExtendedInfo"));
    struct Params_DisplayExtendedInfo {
    }; // Size: 0x0
    Params_DisplayExtendedInfo params{};
    ProcessEvent(func, &params);
}
void UTrackingInfoWidget::DisplayTrackerInfo(FString TrackerTitle, TArray<FTaskData>& TaskData, FString ExtendedDesc, FString IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TrackingInfoWidget.DisplayTrackerInfo"));
    struct Params_DisplayTrackerInfo {
        FString TrackerTitle; // 0x0
        TArray<FTaskData> TaskData; // 0x10
        FString ExtendedDesc; // 0x20
        FString IconName; // 0x30
    }; // Size: 0x40
    Params_DisplayTrackerInfo params{};
    params.TrackerTitle = (FString)TrackerTitle;
    params.TaskData = (TArray<FTaskData>)TaskData;
    params.ExtendedDesc = (FString)ExtendedDesc;
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
    TaskData = params.TaskData;
}
