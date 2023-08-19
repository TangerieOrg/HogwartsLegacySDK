#include "AActor.hpp"
#include "AMapPawn.hpp"
#include "EMapScreenMouseButtonID.hpp"
#include "EMapTypes\Type.hpp"
#include "EMapZoomTypes\Type.hpp"
#include "ERegionType.hpp"
#include "FKey.hpp"
#include "FLegendItemData.hpp"
#include "FMapScreenMouseButton.hpp"
#include "FMapToolTipData.hpp"
#include "FUMGConsolidatedAxisInputData.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanel.hpp"
#include "UFastTravelList.hpp"
#include "UFunction.hpp"
#include "UMapBase.hpp"
#include "UMapIcon.hpp"
#include "UMapRegionInfoWidget.hpp"
#include "UMapScreenBase.hpp"
#include "UMapSubSystem.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UTabPageWidget.hpp"
#include "UToolTipPopoutWidget.hpp"
#include "UUIManager.hpp"
#include "UUserWidget.hpp"
UMapScreenBase* UMapScreenBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapScreenBase");
    return (UMapScreenBase*)res;
}
void UMapScreenBase::ZoomInPressed_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.ZoomInPressed_Event"));
    struct Params_ZoomInPressed_Event {
    }; // Size: 0x0
    Params_ZoomInPressed_Event params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::MiddleMouseButtonReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.MiddleMouseButtonReleased"));
    struct Params_MiddleMouseButtonReleased {
    }; // Size: 0x0
    Params_MiddleMouseButtonReleased params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::ZoomOutReleased_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.ZoomOutReleased_Event"));
    struct Params_ZoomOutReleased_Event {
    }; // Size: 0x0
    Params_ZoomOutReleased_Event params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::SetCoverVisibility(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.SetCoverVisibility"));
    struct Params_SetCoverVisibility {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_SetCoverVisibility params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UMapScreenBase::WayPointUnset_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.WayPointUnset_Event"));
    struct Params_WayPointUnset_Event {
    }; // Size: 0x0
    Params_WayPointUnset_Event params{};
    ProcessEvent(func, &params);
}
bool UMapScreenBase::IsAnyTutorialActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.IsAnyTutorialActive"));
    struct Params_IsAnyTutorialActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAnyTutorialActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapScreenBase::SetMouseDelta(FVector2D Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.SetMouseDelta"));
    struct Params_SetMouseDelta {
        FVector2D Delta; // 0x0
    }; // Size: 0x8
    Params_SetMouseDelta params{};
    params.Delta = (FVector2D)Delta;
    ProcessEvent(func, &params);
}
void UMapScreenBase::MapMove_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.MapMove_Event"));
    struct Params_MapMove_Event {
    }; // Size: 0x0
    Params_MapMove_Event params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::ZoomOutPressed_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.ZoomOutPressed_Event"));
    struct Params_ZoomOutPressed_Event {
    }; // Size: 0x0
    Params_ZoomOutPressed_Event params{};
    ProcessEvent(func, &params);
}
bool UMapScreenBase::MouseTimeGreaterThanClick(EMapScreenMouseButtonID buttonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.MouseTimeGreaterThanClick"));
    struct Params_MouseTimeGreaterThanClick {
        EMapScreenMouseButtonID buttonID; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_MouseTimeGreaterThanClick params{};
    params.buttonID = (EMapScreenMouseButtonID)buttonID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapScreenBase::RightMouseButtonReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.RightMouseButtonReleased"));
    struct Params_RightMouseButtonReleased {
    }; // Size: 0x0
    Params_RightMouseButtonReleased params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::ZoomInReleased_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.ZoomInReleased_Event"));
    struct Params_ZoomInReleased_Event {
    }; // Size: 0x0
    Params_ZoomInReleased_Event params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::WayPointSet_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.WayPointSet_Event"));
    struct Params_WayPointSet_Event {
    }; // Size: 0x0
    Params_WayPointSet_Event params{};
    ProcessEvent(func, &params);
}
FMapScreenMouseButton UMapScreenBase::GetMouseButtonInput(EMapScreenMouseButtonID buttonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.GetMouseButtonInput"));
    struct Params_GetMouseButtonInput {
        EMapScreenMouseButtonID buttonID; // 0x0
        char pad_1[0x3];
        FMapScreenMouseButton ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetMouseButtonInput params{};
    params.buttonID = (EMapScreenMouseButtonID)buttonID;
    ProcessEvent(func, &params);
    return (FMapScreenMouseButton)params.ReturnValue;
}
void UMapScreenBase::UnregisterBButton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.UnregisterBButton"));
    struct Params_UnregisterBButton {
    }; // Size: 0x0
    Params_UnregisterBButton params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::SetLocationName_Event(FString PrimarayLocationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.SetLocationName_Event"));
    struct Params_SetLocationName_Event {
        FString PrimarayLocationName; // 0x0
    }; // Size: 0x10
    Params_SetLocationName_Event params{};
    params.PrimarayLocationName = (FString)PrimarayLocationName;
    ProcessEvent(func, &params);
}
void UMapScreenBase::SetLevelName_Event(FString LevelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.SetLevelName_Event"));
    struct Params_SetLevelName_Event {
        FString LevelName; // 0x0
    }; // Size: 0x10
    Params_SetLevelName_Event params{};
    params.LevelName = (FString)LevelName;
    ProcessEvent(func, &params);
}
void UMapScreenBase::TierChanged_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.TierChanged_Event"));
    struct Params_TierChanged_Event {
    }; // Size: 0x0
    Params_TierChanged_Event params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::ShowHogwartsMissionsAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.ShowHogwartsMissionsAvailable"));
    struct Params_ShowHogwartsMissionsAvailable {
    }; // Size: 0x0
    Params_ShowHogwartsMissionsAvailable params{};
    ProcessEvent(func, &params);
}
FUMGConsolidatedAxisInputData UMapScreenBase::GetInputAxisData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.GetInputAxisData"));
    struct Params_GetInputAxisData {
        FUMGConsolidatedAxisInputData ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetInputAxisData params{};
    ProcessEvent(func, &params);
    return (FUMGConsolidatedAxisInputData)params.ReturnValue;
}
void UMapScreenBase::ShowOverlandMissionsAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.ShowOverlandMissionsAvailable"));
    struct Params_ShowOverlandMissionsAvailable {
    }; // Size: 0x0
    Params_ShowOverlandMissionsAvailable params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::ShowHogsmeadeMissionsAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.ShowHogsmeadeMissionsAvailable"));
    struct Params_ShowHogsmeadeMissionsAvailable {
    }; // Size: 0x0
    Params_ShowHogsmeadeMissionsAvailable params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::ShowFastTravelList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.ShowFastTravelList"));
    struct Params_ShowFastTravelList {
    }; // Size: 0x0
    Params_ShowFastTravelList params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::SetZoomType(EMapZoomTypes::Type ZoomType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.SetZoomType"));
    struct Params_SetZoomType {
        EMapZoomTypes::Type ZoomType; // 0x0
    }; // Size: 0x1
    Params_SetZoomType params{};
    params.ZoomType = (EMapZoomTypes::Type)ZoomType;
    ProcessEvent(func, &params);
}
void UMapScreenBase::SetTipLegend_Event() {}
EMapZoomTypes::Type UMapScreenBase::GetTier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.GetTier"));
    struct Params_GetTier {
        EMapZoomTypes::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTier params{};
    ProcessEvent(func, &params);
    return (EMapZoomTypes::Type)params.ReturnValue;
}
void UMapScreenBase::SetPath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.SetPath"));
    struct Params_SetPath {
    }; // Size: 0x0
    Params_SetPath params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::RegionHovered_Event(ERegionType MapRegion, int32_t RegionIndex, UUserWidget* IconWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.RegionHovered_Event"));
    struct Params_RegionHovered_Event {
        ERegionType MapRegion; // 0x0
        char pad_1[0x3];
        int32_t RegionIndex; // 0x4
        UUserWidget* IconWidget; // 0x8
    }; // Size: 0x10
    Params_RegionHovered_Event params{};
    params.MapRegion = (ERegionType)MapRegion;
    params.RegionIndex = (int32_t)RegionIndex;
    params.IconWidget = (UUserWidget*)IconWidget;
    ProcessEvent(func, &params);
}
void UMapScreenBase::SetMapType(EMapTypes::Type MapType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.SetMapType"));
    struct Params_SetMapType {
        EMapTypes::Type MapType; // 0x0
    }; // Size: 0x1
    Params_SetMapType params{};
    params.MapType = (EMapTypes::Type)MapType;
    ProcessEvent(func, &params);
}
void UMapScreenBase::SetLegendStrings(TArray<FLegendItemData>& LegendStrings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.SetLegendStrings"));
    struct Params_SetLegendStrings {
        TArray<FLegendItemData> LegendStrings; // 0x0
    }; // Size: 0x10
    Params_SetLegendStrings params{};
    params.LegendStrings = (TArray<FLegendItemData>)LegendStrings;
    ProcessEvent(func, &params);
    LegendStrings = params.LegendStrings;
}
void UMapScreenBase::SetIconContainerSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.SetIconContainerSize"));
    struct Params_SetIconContainerSize {
    }; // Size: 0x0
    Params_SetIconContainerSize params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::SetLegend(TArray<FLegendItemData>& LegendStrings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.SetLegend"));
    struct Params_SetLegend {
        TArray<FLegendItemData> LegendStrings; // 0x0
    }; // Size: 0x10
    Params_SetLegend params{};
    params.LegendStrings = (TArray<FLegendItemData>)LegendStrings;
    ProcessEvent(func, &params);
    LegendStrings = params.LegendStrings;
}
void UMapScreenBase::IconHidden_Event(UMapIcon* iconHidden) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.IconHidden_Event"));
    struct Params_IconHidden_Event {
        UMapIcon* iconHidden; // 0x0
    }; // Size: 0x8
    Params_IconHidden_Event params{};
    params.iconHidden = (UMapIcon*)iconHidden;
    ProcessEvent(func, &params);
}
void UMapScreenBase::SetIsFilterShowing(bool ShowFilter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.SetIsFilterShowing"));
    struct Params_SetIsFilterShowing {
        bool ShowFilter; // 0x0
    }; // Size: 0x1
    Params_SetIsFilterShowing params{};
    params.ShowFilter = (bool)ShowFilter;
    ProcessEvent(func, &params);
}
void UMapScreenBase::ClearMouseButtons() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.ClearMouseButtons"));
    struct Params_ClearMouseButtons {
    }; // Size: 0x0
    Params_ClearMouseButtons params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::SetCoverVisibilityAlpha_Event(float Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.SetCoverVisibilityAlpha_Event"));
    struct Params_SetCoverVisibilityAlpha_Event {
        float Alpha; // 0x0
    }; // Size: 0x4
    Params_SetCoverVisibilityAlpha_Event params{};
    params.Alpha = (float)Alpha;
    ProcessEvent(func, &params);
}
void UMapScreenBase::SetCoverVisibility_Event(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.SetCoverVisibility_Event"));
    struct Params_SetCoverVisibility_Event {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_SetCoverVisibility_Event params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
float UMapScreenBase::GetZoomFactor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.GetZoomFactor"));
    struct Params_GetZoomFactor {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetZoomFactor params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UMapScreenBase::SetCoverAlpha(float Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.SetCoverAlpha"));
    struct Params_SetCoverAlpha {
        float Alpha; // 0x0
    }; // Size: 0x4
    Params_SetCoverAlpha params{};
    params.Alpha = (float)Alpha;
    ProcessEvent(func, &params);
}
bool UMapScreenBase::ScreenHandleInput(FKey Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.ScreenHandleInput"));
    struct Params_ScreenHandleInput {
        FKey Input; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_ScreenHandleInput params{};
    params.Input = (FKey)Input;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapScreenBase::RightMouseButtonPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.RightMouseButtonPressed"));
    struct Params_RightMouseButtonPressed {
    }; // Size: 0x0
    Params_RightMouseButtonPressed params{};
    ProcessEvent(func, &params);
}
float UMapScreenBase::GetPressedButtonTime(EMapScreenMouseButtonID buttonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.GetPressedButtonTime"));
    struct Params_GetPressedButtonTime {
        EMapScreenMouseButtonID buttonID; // 0x0
        char pad_1[0x3];
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetPressedButtonTime params{};
    params.buttonID = (EMapScreenMouseButtonID)buttonID;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UMapScreenBase::RegisterBButton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.RegisterBButton"));
    struct Params_RegisterBButton {
    }; // Size: 0x0
    Params_RegisterBButton params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::MapStop_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.MapStop_Event"));
    struct Params_MapStop_Event {
    }; // Size: 0x0
    Params_MapStop_Event params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::RegionInfoUpdated_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.RegionInfoUpdated_Event"));
    struct Params_RegionInfoUpdated_Event {
    }; // Size: 0x0
    Params_RegionInfoUpdated_Event params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::OnUnhovered_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.OnUnhovered_Event"));
    struct Params_OnUnhovered_Event {
    }; // Size: 0x0
    Params_OnUnhovered_Event params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::PlayIconBurst_Event(AActor* NiagaraActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.PlayIconBurst_Event"));
    struct Params_PlayIconBurst_Event {
        AActor* NiagaraActor; // 0x0
    }; // Size: 0x8
    Params_PlayIconBurst_Event params{};
    params.NiagaraActor = (AActor*)NiagaraActor;
    ProcessEvent(func, &params);
}
FVector2D UMapScreenBase::GetMouseDelta() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.GetMouseDelta"));
    struct Params_GetMouseDelta {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMouseDelta params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UMapScreenBase::PlayFanfare_Event(UMapIcon* Icon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.PlayFanfare_Event"));
    struct Params_PlayFanfare_Event {
        UMapIcon* Icon; // 0x0
    }; // Size: 0x8
    Params_PlayFanfare_Event params{};
    params.Icon = (UMapIcon*)Icon;
    ProcessEvent(func, &params);
}
void UMapScreenBase::MapStart_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.MapStart_Event"));
    struct Params_MapStart_Event {
    }; // Size: 0x0
    Params_MapStart_Event params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::OnUpdateToolTip_Event(FMapToolTipData ToolTipData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.OnUpdateToolTip_Event"));
    struct Params_OnUpdateToolTip_Event {
        FMapToolTipData ToolTipData; // 0x0
    }; // Size: 0x1b8
    Params_OnUpdateToolTip_Event params{};
    params.ToolTipData = (FMapToolTipData)ToolTipData;
    ProcessEvent(func, &params);
}
void UMapScreenBase::OnHovered_Event(FMapToolTipData ToolTipData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.OnHovered_Event"));
    struct Params_OnHovered_Event {
        FMapToolTipData ToolTipData; // 0x0
    }; // Size: 0x1b8
    Params_OnHovered_Event params{};
    params.ToolTipData = (FMapToolTipData)ToolTipData;
    ProcessEvent(func, &params);
}
void UMapScreenBase::MiddleMouseButtonPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.MiddleMouseButtonPressed"));
    struct Params_MiddleMouseButtonPressed {
    }; // Size: 0x0
    Params_MiddleMouseButtonPressed params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::MapChanged_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.MapChanged_Event"));
    struct Params_MapChanged_Event {
    }; // Size: 0x0
    Params_MapChanged_Event params{};
    ProcessEvent(func, &params);
}
FVector2D UMapScreenBase::GetMovementDelta() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.GetMovementDelta"));
    struct Params_GetMovementDelta {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMovementDelta params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UMapScreenBase::LockMapInput(bool Lock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.LockMapInput"));
    struct Params_LockMapInput {
        bool Lock; // 0x0
    }; // Size: 0x1
    Params_LockMapInput params{};
    params.Lock = (bool)Lock;
    ProcessEvent(func, &params);
}
void UMapScreenBase::HideFastTravelList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.HideFastTravelList"));
    struct Params_HideFastTravelList {
    }; // Size: 0x0
    Params_HideFastTravelList params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::LeftMouseButtonReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.LeftMouseButtonReleased"));
    struct Params_LeftMouseButtonReleased {
    }; // Size: 0x0
    Params_LeftMouseButtonReleased params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::LeftMouseButtonPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.LeftMouseButtonPressed"));
    struct Params_LeftMouseButtonPressed {
    }; // Size: 0x0
    Params_LeftMouseButtonPressed params{};
    ProcessEvent(func, &params);
}
UMapBase* UMapScreenBase::GetMapBase() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.GetMapBase"));
    struct Params_GetMapBase {
        UMapBase* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapBase params{};
    ProcessEvent(func, &params);
    return (UMapBase*)params.ReturnValue;
}
bool UMapScreenBase::IsMouseButtonAClick(EMapScreenMouseButtonID buttonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.IsMouseButtonAClick"));
    struct Params_IsMouseButtonAClick {
        EMapScreenMouseButtonID buttonID; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsMouseButtonAClick params{};
    params.buttonID = (EMapScreenMouseButtonID)buttonID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapScreenBase::IsFastTravelListVisible() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.IsFastTravelListVisible"));
    struct Params_IsFastTravelListVisible {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFastTravelListVisible params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapScreenBase::IconShown_Event(UMapIcon* iconHidden) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.IconShown_Event"));
    struct Params_IconShown_Event {
        UMapIcon* iconHidden; // 0x0
    }; // Size: 0x8
    Params_IconShown_Event params{};
    params.iconHidden = (UMapIcon*)iconHidden;
    ProcessEvent(func, &params);
}
void UMapScreenBase::HitMapBounds_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.HitMapBounds_Event"));
    struct Params_HitMapBounds_Event {
    }; // Size: 0x0
    Params_HitMapBounds_Event params{};
    ProcessEvent(func, &params);
}
float UMapScreenBase::GetZoomInputDelta() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.GetZoomInputDelta"));
    struct Params_GetZoomInputDelta {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetZoomInputDelta params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UUIManager* UMapScreenBase::GetUIManager() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.GetUIManager"));
    struct Params_GetUIManager {
        UUIManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetUIManager params{};
    ProcessEvent(func, &params);
    return (UUIManager*)params.ReturnValue;
}
EMapTypes::Type UMapScreenBase::GetMapType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.GetMapType"));
    struct Params_GetMapType {
        EMapTypes::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMapType params{};
    ProcessEvent(func, &params);
    return (EMapTypes::Type)params.ReturnValue;
}
UMapSubSystem* UMapScreenBase::GetMapSubSystem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.GetMapSubSystem"));
    struct Params_GetMapSubSystem {
        UMapSubSystem* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapSubSystem params{};
    ProcessEvent(func, &params);
    return (UMapSubSystem*)params.ReturnValue;
}
bool UMapScreenBase::GetIsMouseInScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.GetIsMouseInScreen"));
    struct Params_GetIsMouseInScreen {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsMouseInScreen params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapScreenBase::GetIsFilterShowing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.GetIsFilterShowing"));
    struct Params_GetIsFilterShowing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsFilterShowing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapScreenBase::ExitMapScreen_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.ExitMapScreen_Event"));
    struct Params_ExitMapScreen_Event {
    }; // Size: 0x0
    Params_ExitMapScreen_Event params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::DisableOverlandButton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.DisableOverlandButton"));
    struct Params_DisableOverlandButton {
    }; // Size: 0x0
    Params_DisableOverlandButton params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::DisableHogwartsButton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.DisableHogwartsButton"));
    struct Params_DisableHogwartsButton {
    }; // Size: 0x0
    Params_DisableHogwartsButton params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::DisableHogsmeadeButton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.DisableHogsmeadeButton"));
    struct Params_DisableHogsmeadeButton {
    }; // Size: 0x0
    Params_DisableHogsmeadeButton params{};
    ProcessEvent(func, &params);
}
void UMapScreenBase::ClearMouseButton(EMapScreenMouseButtonID buttonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapScreenBase.ClearMouseButton"));
    struct Params_ClearMouseButton {
        EMapScreenMouseButtonID buttonID; // 0x0
    }; // Size: 0x1
    Params_ClearMouseButton params{};
    params.buttonID = (EMapScreenMouseButtonID)buttonID;
    ProcessEvent(func, &params);
}
