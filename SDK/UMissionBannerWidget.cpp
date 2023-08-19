#include "BannerUpdateType.hpp"
#include "ENotificationCategory.hpp"
#include "FLinearColor.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UMissionBannerWidget.hpp"
void UMissionBannerWidget::ShowBPCelebrationBanner(BannerUpdateType updateType, FName updateTitle, FName bannerText, FName bannerText2, bool bShowTrackMission, TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBannerWidget.ShowBPCelebrationBanner"));
    struct Params_ShowBPCelebrationBanner {
        BannerUpdateType updateType; // 0x0
        char pad_1[0x3];
        FName updateTitle; // 0x4
        FName bannerText; // 0xc
        FName bannerText2; // 0x14
        bool bShowTrackMission; // 0x1c
        char pad_1d[0x3];
        TArray<FString> objectiveText; // 0x20
        TArray<bool> objectiveChecked; // 0x30
        TArray<bool> objectiveCheckChanged; // 0x40
        TArray<int32_t> objectiveRuntimeValue1; // 0x50
        TArray<int32_t> objectiveRuntimeValue2; // 0x60
    }; // Size: 0x70
    Params_ShowBPCelebrationBanner params{};
    params.updateType = (BannerUpdateType)updateType;
    params.updateTitle = (FName)updateTitle;
    params.bannerText = (FName)bannerText;
    params.bannerText2 = (FName)bannerText2;
    params.bShowTrackMission = (bool)bShowTrackMission;
    params.objectiveText = (TArray<FString>)objectiveText;
    params.objectiveChecked = (TArray<bool>)objectiveChecked;
    params.objectiveCheckChanged = (TArray<bool>)objectiveCheckChanged;
    params.objectiveRuntimeValue1 = (TArray<int32_t>)objectiveRuntimeValue1;
    params.objectiveRuntimeValue2 = (TArray<int32_t>)objectiveRuntimeValue2;
    ProcessEvent(func, &params);
    objectiveText = params.objectiveText;
    objectiveRuntimeValue2 = params.objectiveRuntimeValue2;
    objectiveChecked = params.objectiveChecked;
    objectiveCheckChanged = params.objectiveCheckChanged;
    objectiveRuntimeValue1 = params.objectiveRuntimeValue1;
}
void UMissionBannerWidget::UpdateExistingStepBanner(TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBannerWidget.UpdateExistingStepBanner"));
    struct Params_UpdateExistingStepBanner {
        TArray<FString> objectiveText; // 0x0
        TArray<bool> objectiveChecked; // 0x10
        TArray<bool> objectiveCheckChanged; // 0x20
        TArray<int32_t> objectiveRuntimeValue1; // 0x30
        TArray<int32_t> objectiveRuntimeValue2; // 0x40
    }; // Size: 0x50
    Params_UpdateExistingStepBanner params{};
    params.objectiveText = (TArray<FString>)objectiveText;
    params.objectiveChecked = (TArray<bool>)objectiveChecked;
    params.objectiveCheckChanged = (TArray<bool>)objectiveCheckChanged;
    params.objectiveRuntimeValue1 = (TArray<int32_t>)objectiveRuntimeValue1;
    params.objectiveRuntimeValue2 = (TArray<int32_t>)objectiveRuntimeValue2;
    ProcessEvent(func, &params);
    objectiveText = params.objectiveText;
    objectiveRuntimeValue2 = params.objectiveRuntimeValue2;
    objectiveChecked = params.objectiveChecked;
    objectiveCheckChanged = params.objectiveCheckChanged;
    objectiveRuntimeValue1 = params.objectiveRuntimeValue1;
}
UMissionBannerWidget* UMissionBannerWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MissionBannerWidget");
    return (UMissionBannerWidget*)res;
}
void UMissionBannerWidget::UpdateColorBlindColors(FLinearColor ObjectiveTintColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBannerWidget.UpdateColorBlindColors"));
    struct Params_UpdateColorBlindColors {
        FLinearColor ObjectiveTintColor; // 0x0
    }; // Size: 0x10
    Params_UpdateColorBlindColors params{};
    params.ObjectiveTintColor = (FLinearColor)ObjectiveTintColor;
    ProcessEvent(func, &params);
}
void UMissionBannerWidget::ShowBPStepBanner(BannerUpdateType updateType, FName updateTitle, FName bannerText, FName bannerText2, bool bShowTrackMission, TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2, FString MissionDescription, FString MissionTypeIcon, FString MissionObjectiveIcon, FLinearColor ObjectiveTintColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBannerWidget.ShowBPStepBanner"));
    struct Params_ShowBPStepBanner {
        BannerUpdateType updateType; // 0x0
        char pad_1[0x3];
        FName updateTitle; // 0x4
        FName bannerText; // 0xc
        FName bannerText2; // 0x14
        bool bShowTrackMission; // 0x1c
        char pad_1d[0x3];
        TArray<FString> objectiveText; // 0x20
        TArray<bool> objectiveChecked; // 0x30
        TArray<bool> objectiveCheckChanged; // 0x40
        TArray<int32_t> objectiveRuntimeValue1; // 0x50
        TArray<int32_t> objectiveRuntimeValue2; // 0x60
        FString MissionDescription; // 0x70
        FString MissionTypeIcon; // 0x80
        FString MissionObjectiveIcon; // 0x90
        FLinearColor ObjectiveTintColor; // 0xa0
    }; // Size: 0xb0
    Params_ShowBPStepBanner params{};
    params.updateType = (BannerUpdateType)updateType;
    params.updateTitle = (FName)updateTitle;
    params.bannerText = (FName)bannerText;
    params.bannerText2 = (FName)bannerText2;
    params.bShowTrackMission = (bool)bShowTrackMission;
    params.objectiveText = (TArray<FString>)objectiveText;
    params.objectiveChecked = (TArray<bool>)objectiveChecked;
    params.objectiveCheckChanged = (TArray<bool>)objectiveCheckChanged;
    params.objectiveRuntimeValue1 = (TArray<int32_t>)objectiveRuntimeValue1;
    params.objectiveRuntimeValue2 = (TArray<int32_t>)objectiveRuntimeValue2;
    params.MissionDescription = (FString)MissionDescription;
    params.MissionTypeIcon = (FString)MissionTypeIcon;
    params.MissionObjectiveIcon = (FString)MissionObjectiveIcon;
    params.ObjectiveTintColor = (FLinearColor)ObjectiveTintColor;
    ProcessEvent(func, &params);
    objectiveRuntimeValue2 = params.objectiveRuntimeValue2;
    objectiveText = params.objectiveText;
    objectiveChecked = params.objectiveChecked;
    objectiveCheckChanged = params.objectiveCheckChanged;
    objectiveRuntimeValue1 = params.objectiveRuntimeValue1;
}
void UMissionBannerWidget::ShowBPMissionBanner(BannerUpdateType updateType, FName updateTitle, FName bannerText, FName bannerText2, bool bShowTrackMission, TArray<FString>& objectiveText, TArray<bool>& objectiveChecked, TArray<bool>& objectiveCheckChanged, TArray<int32_t>& objectiveRuntimeValue1, TArray<int32_t>& objectiveRuntimeValue2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBannerWidget.ShowBPMissionBanner"));
    struct Params_ShowBPMissionBanner {
        BannerUpdateType updateType; // 0x0
        char pad_1[0x3];
        FName updateTitle; // 0x4
        FName bannerText; // 0xc
        FName bannerText2; // 0x14
        bool bShowTrackMission; // 0x1c
        char pad_1d[0x3];
        TArray<FString> objectiveText; // 0x20
        TArray<bool> objectiveChecked; // 0x30
        TArray<bool> objectiveCheckChanged; // 0x40
        TArray<int32_t> objectiveRuntimeValue1; // 0x50
        TArray<int32_t> objectiveRuntimeValue2; // 0x60
    }; // Size: 0x70
    Params_ShowBPMissionBanner params{};
    params.updateType = (BannerUpdateType)updateType;
    params.updateTitle = (FName)updateTitle;
    params.bannerText = (FName)bannerText;
    params.bannerText2 = (FName)bannerText2;
    params.bShowTrackMission = (bool)bShowTrackMission;
    params.objectiveText = (TArray<FString>)objectiveText;
    params.objectiveChecked = (TArray<bool>)objectiveChecked;
    params.objectiveCheckChanged = (TArray<bool>)objectiveCheckChanged;
    params.objectiveRuntimeValue1 = (TArray<int32_t>)objectiveRuntimeValue1;
    params.objectiveRuntimeValue2 = (TArray<int32_t>)objectiveRuntimeValue2;
    ProcessEvent(func, &params);
    objectiveRuntimeValue1 = params.objectiveRuntimeValue1;
    objectiveText = params.objectiveText;
    objectiveChecked = params.objectiveChecked;
    objectiveRuntimeValue2 = params.objectiveRuntimeValue2;
    objectiveCheckChanged = params.objectiveCheckChanged;
}
void UMissionBannerWidget::BeginOrEndPlay(bool endPlay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBannerWidget.BeginOrEndPlay"));
    struct Params_BeginOrEndPlay {
        bool endPlay; // 0x0
    }; // Size: 0x1
    Params_BeginOrEndPlay params{};
    params.endPlay = (bool)endPlay;
    ProcessEvent(func, &params);
}
void UMissionBannerWidget::BannerComplete(ENotificationCategory Category) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionBannerWidget.BannerComplete"));
    struct Params_BannerComplete {
        ENotificationCategory Category; // 0x0
    }; // Size: 0x1
    Params_BannerComplete params{};
    params.Category = (ENotificationCategory)Category;
    ProcessEvent(func, &params);
}
