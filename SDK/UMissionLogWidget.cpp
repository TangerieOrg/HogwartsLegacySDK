#include "FLinearColor.hpp"
#include "FMissionLogData.hpp"
#include "FMissionTabData.hpp"
#include "UFunction.hpp"
#include "UMissionLogWidget.hpp"
#include "UTabPageWidget.hpp"
bool UMissionLogWidget::TrackNewObjective(FString ObjectiveName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionLogWidget.TrackNewObjective"));
    struct Params_TrackNewObjective {
        FString ObjectiveName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_TrackNewObjective params{};
    params.ObjectiveName = (FString)ObjectiveName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMissionLogWidget* UMissionLogWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MissionLogWidget");
    return (UMissionLogWidget*)res;
}
bool UMissionLogWidget::GetActiveObjectiveTrackableStates(TArray<bool>& TrackableStates, FString& TrackedObjective) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionLogWidget.GetActiveObjectiveTrackableStates"));
    struct Params_GetActiveObjectiveTrackableStates {
        TArray<bool> TrackableStates; // 0x0
        FString TrackedObjective; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetActiveObjectiveTrackableStates params{};
    params.TrackableStates = (TArray<bool>)TrackableStates;
    params.TrackedObjective = (FString)TrackedObjective;
    ProcessEvent(func, &params);
    TrackableStates = params.TrackableStates;
    TrackedObjective = params.TrackedObjective;
    return (bool)params.ReturnValue;
}
bool UMissionLogWidget::GetTrackedMissionId(FName& MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionLogWidget.GetTrackedMissionId"));
    struct Params_GetTrackedMissionId {
        FName MissionID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetTrackedMissionId params{};
    params.MissionID = (FName)MissionID;
    ProcessEvent(func, &params);
    MissionID = params.MissionID;
    return (bool)params.ReturnValue;
}
bool UMissionLogWidget::MissionHasBeaconOnMap(FName MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionLogWidget.MissionHasBeaconOnMap"));
    struct Params_MissionHasBeaconOnMap {
        FName MissionID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_MissionHasBeaconOnMap params{};
    params.MissionID = (FName)MissionID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMissionLogWidget::CanAbandonMission(FName MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionLogWidget.CanAbandonMission"));
    struct Params_CanAbandonMission {
        FName MissionID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CanAbandonMission params{};
    params.MissionID = (FName)MissionID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMissionLogWidget::HasBeenInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionLogWidget.HasBeenInitialized"));
    struct Params_HasBeenInitialized {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasBeenInitialized params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FMissionLogData> UMissionLogWidget::GetMissionLogData(int32_t& OutTrackedMissionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionLogWidget.GetMissionLogData"));
    struct Params_GetMissionLogData {
        int32_t OutTrackedMissionIndex; // 0x0
        char pad_4[0x4];
        TArray<FMissionLogData> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetMissionLogData params{};
    params.OutTrackedMissionIndex = (int32_t)OutTrackedMissionIndex;
    ProcessEvent(func, &params);
    OutTrackedMissionIndex = params.OutTrackedMissionIndex;
    return (TArray<FMissionLogData>)params.ReturnValue;
}
bool UMissionLogWidget::GetTrackedMissionData(FMissionLogData& MissionData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionLogWidget.GetTrackedMissionData"));
    struct Params_GetTrackedMissionData {
        FMissionLogData MissionData; // 0x0
        bool ReturnValue; // 0xa8
    }; // Size: 0xa9
    Params_GetTrackedMissionData params{};
    params.MissionData = (FMissionLogData)MissionData;
    ProcessEvent(func, &params);
    MissionData = params.MissionData;
    return (bool)params.ReturnValue;
}
bool UMissionLogWidget::GetMapIconAndGlint(FName MissionID, FString& Icon, FString& Glint, FLinearColor& IconColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionLogWidget.GetMapIconAndGlint"));
    struct Params_GetMapIconAndGlint {
        FName MissionID; // 0x0
        FString Icon; // 0x8
        FString Glint; // 0x18
        FLinearColor IconColor; // 0x28
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_GetMapIconAndGlint params{};
    params.MissionID = (FName)MissionID;
    params.Icon = (FString)Icon;
    params.Glint = (FString)Glint;
    params.IconColor = (FLinearColor)IconColor;
    ProcessEvent(func, &params);
    Icon = params.Icon;
    Glint = params.Glint;
    IconColor = params.IconColor;
    return (bool)params.ReturnValue;
}
bool UMissionLogWidget::GetLighthouseGoalInfo(FName& LighthouseGoalID, TArray<FName>& LighthouseObjectives, TArray<bool>& ObjectiveUnlockedStates, TArray<bool>& ObjectiveCompleteStates) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionLogWidget.GetLighthouseGoalInfo"));
    struct Params_GetLighthouseGoalInfo {
        FName LighthouseGoalID; // 0x0
        TArray<FName> LighthouseObjectives; // 0x8
        TArray<bool> ObjectiveUnlockedStates; // 0x18
        TArray<bool> ObjectiveCompleteStates; // 0x28
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_GetLighthouseGoalInfo params{};
    params.LighthouseGoalID = (FName)LighthouseGoalID;
    params.LighthouseObjectives = (TArray<FName>)LighthouseObjectives;
    params.ObjectiveUnlockedStates = (TArray<bool>)ObjectiveUnlockedStates;
    params.ObjectiveCompleteStates = (TArray<bool>)ObjectiveCompleteStates;
    ProcessEvent(func, &params);
    LighthouseGoalID = params.LighthouseGoalID;
    ObjectiveUnlockedStates = params.ObjectiveUnlockedStates;
    LighthouseObjectives = params.LighthouseObjectives;
    ObjectiveCompleteStates = params.ObjectiveCompleteStates;
    return (bool)params.ReturnValue;
}
