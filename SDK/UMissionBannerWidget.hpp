#pragma once
#include <cstdint>
#include "BannerUpdateType.hpp"
#include "ENotificationCategory.hpp"
#include "FLinearColor.hpp"
#include "UHUDElementGroup.hpp"
#pragma pack(push, 1)
class UMissionBannerWidget : public UHUDElementGroup {
public:
    char pad_2e8[0x30];
    bool StepUpdateInProgress; // 0x318
    bool MissionStepsShowing; // 0x319
    bool WaypointShowing; // 0x31a
    char pad_31b[0x215];
    static UMissionBannerWidget* StaticClass();
    void UpdateExistingStepBanner(TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2);
    void UpdateColorBlindColors(FLinearColor ObjectiveTintColor);
    void ShowBPStepBanner(BannerUpdateType updateType, FName updateTitle, FName bannerText, FName bannerText2, bool bShowTrackMission, TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2, FString MissionDescription, FString MissionTypeIcon, FString MissionObjectiveIcon, FLinearColor ObjectiveTintColor);
    void ShowBPMissionBanner(BannerUpdateType updateType, FName updateTitle, FName bannerText, FName bannerText2, bool bShowTrackMission, TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2);
    void ShowBPCelebrationBanner(BannerUpdateType updateType, FName updateTitle, FName bannerText, FName bannerText2, bool bShowTrackMission, TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2);
    void BeginOrEndPlay(bool endPlay);
    void BannerComplete(ENotificationCategory Category);
}; // Size: 0x530
#pragma pack(pop)
