#pragma once
#include <cstdint>
#include "FMissionLogData.hpp"
#include "FMissionTabData.hpp"
#include "UTabPageWidget.hpp"
struct FLinearColor;
#pragma pack(push, 1)
class UMissionLogWidget : public UTabPageWidget {
public:
    TArray<FMissionTabData> MissionTabDataSet; // 0x3c8
    static UMissionLogWidget* StaticClass();
    bool TrackNewObjective(FString ObjectiveName);
    bool MissionHasBeaconOnMap(FName MissionID);
    bool HasBeenInitialized();
    bool GetTrackedMissionId(FName& MissionID);
    bool GetTrackedMissionData(FMissionLogData& MissionData);
    TArray<FMissionLogData> GetMissionLogData(int32_t& OutTrackedMissionIndex);
    bool GetMapIconAndGlint(FName MissionID, FString& Icon, FString& Glint, FLinearColor& IconColor);
    bool GetLighthouseGoalInfo(FName& LighthouseGoalID, TArray<FName>& LighthouseObjectives, TArray<bool>& ObjectiveUnlockedStates, TArray<bool>& ObjectiveCompleteStates);
    bool GetActiveObjectiveTrackableStates(TArray<bool>& TrackableStates, FString& TrackedObjective);
    bool CanAbandonMission(FName MissionID);
}; // Size: 0x3d8
#pragma pack(pop)
