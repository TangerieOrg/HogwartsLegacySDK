#include "AMapPawn.hpp"
#include "APlayerController.hpp"
#include "EBeaconType.hpp"
#include "EMapFadeState.hpp"
#include "EMapLocTypes\Type.hpp"
#include "EMapTypes\Type.hpp"
#include "EMapZoomTypes\Type.hpp"
#include "FMapIconEntry.hpp"
#include "FMapLevelData.hpp"
#include "UBeaconInfo.hpp"
#include "UClass.hpp"
#include "UDebugTextPanel.hpp"
#include "UFunction.hpp"
#include "UMapBase.hpp"
#include "UMapCameraParameters.hpp"
#include "UMapFX.hpp"
#include "UMapIcon.hpp"
#include "UMapMovementComponent.hpp"
#include "UMapScreenBase.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "UPopupScreen.hpp"
#include "UTexture2D.hpp"
#include "UWorldSupportWorld.hpp"
void UMapBase::SetKnowledgeCardActive(bool pKnowledgeCardActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.SetKnowledgeCardActive"));
    struct Params_SetKnowledgeCardActive {
        bool pKnowledgeCardActive; // 0x0
    }; // Size: 0x1
    Params_SetKnowledgeCardActive params{};
    params.pKnowledgeCardActive = (bool)pKnowledgeCardActive;
    ProcessEvent(func, &params);
}
float UMapBase::GetZoomFactor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetZoomFactor"));
    struct Params_GetZoomFactor {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetZoomFactor params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UMapBase* UMapBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapBase");
    return (UMapBase*)res;
}
void UMapBase::SetCoverAlpha(float Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.SetCoverAlpha"));
    struct Params_SetCoverAlpha {
        float Alpha; // 0x0
    }; // Size: 0x4
    Params_SetCoverAlpha params{};
    params.Alpha = (float)Alpha;
    ProcessEvent(func, &params);
}
void UMapBase::SetHoveredIcon(UMapIcon* hoverIcon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.SetHoveredIcon"));
    struct Params_SetHoveredIcon {
        UMapIcon* hoverIcon; // 0x0
    }; // Size: 0x8
    Params_SetHoveredIcon params{};
    params.hoverIcon = (UMapIcon*)hoverIcon;
    ProcessEvent(func, &params);
}
void UMapBase::GoToPreviousMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GoToPreviousMap"));
    struct Params_GoToPreviousMap {
    }; // Size: 0x0
    Params_GoToPreviousMap params{};
    ProcessEvent(func, &params);
}
bool UMapBase::TutorialDisablesMapBehavior_Blueprint(EMapLocTypes::Type MapBehavior) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.TutorialDisablesMapBehavior_Blueprint"));
    struct Params_TutorialDisablesMapBehavior_Blueprint {
        EMapLocTypes::Type MapBehavior; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_TutorialDisablesMapBehavior_Blueprint params{};
    params.MapBehavior = (EMapLocTypes::Type)MapBehavior;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapBase::TrackHoveredMission() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.TrackHoveredMission"));
    struct Params_TrackHoveredMission {
    }; // Size: 0x0
    Params_TrackHoveredMission params{};
    ProcessEvent(func, &params);
}
FName UMapBase::GetMapName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetMapName"));
    struct Params_GetMapName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UMapBase::SetTurnOffFogCheck(bool pTurnOffFogCheck) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.SetTurnOffFogCheck"));
    struct Params_SetTurnOffFogCheck {
        bool pTurnOffFogCheck; // 0x0
    }; // Size: 0x1
    Params_SetTurnOffFogCheck params{};
    params.pTurnOffFogCheck = (bool)pTurnOffFogCheck;
    ProcessEvent(func, &params);
}
float UMapBase::IsWaitAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.IsWaitAvailable"));
    struct Params_IsWaitAvailable {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_IsWaitAvailable params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UMapBase::SetLastHoveredIcon(UMapIcon* lastIcon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.SetLastHoveredIcon"));
    struct Params_SetLastHoveredIcon {
        UMapIcon* lastIcon; // 0x0
    }; // Size: 0x8
    Params_SetLastHoveredIcon params{};
    params.lastIcon = (UMapIcon*)lastIcon;
    ProcessEvent(func, &params);
}
bool UMapBase::GetHoveredState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetHoveredState"));
    struct Params_GetHoveredState {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetHoveredState params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EMapFadeState UMapBase::GetMapFadeState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetMapFadeState"));
    struct Params_GetMapFadeState {
        EMapFadeState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMapFadeState params{};
    ProcessEvent(func, &params);
    return (EMapFadeState)params.ReturnValue;
}
void UMapBase::SetCoverDisplayed(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.SetCoverDisplayed"));
    struct Params_SetCoverDisplayed {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_SetCoverDisplayed params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UMapBase::ReturnCursorToPlayerLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.ReturnCursorToPlayerLocation"));
    struct Params_ReturnCursorToPlayerLocation {
    }; // Size: 0x0
    Params_ReturnCursorToPlayerLocation params{};
    ProcessEvent(func, &params);
}
void UMapBase::AdvanceTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.AdvanceTime"));
    struct Params_AdvanceTime {
    }; // Size: 0x0
    Params_AdvanceTime params{};
    ProcessEvent(func, &params);
}
void UMapBase::PlaceWayMarkerClick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.PlaceWayMarkerClick"));
    struct Params_PlaceWayMarkerClick {
    }; // Size: 0x0
    Params_PlaceWayMarkerClick params{};
    ProcessEvent(func, &params);
}
void UMapBase::PlaceWayMarkerBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.PlaceWayMarkerBP"));
    struct Params_PlaceWayMarkerBP {
    }; // Size: 0x0
    Params_PlaceWayMarkerBP params{};
    ProcessEvent(func, &params);
}
void UMapBase::IconOutlineTextureCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.IconOutlineTextureCallback"));
    struct Params_IconOutlineTextureCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_IconOutlineTextureCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
void UMapBase::OnWaitPopupDismissed(UPopupScreen* Popup, int32_t ConfirmationResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.OnWaitPopupDismissed"));
    struct Params_OnWaitPopupDismissed {
        UPopupScreen* Popup; // 0x0
        int32_t ConfirmationResult; // 0x8
    }; // Size: 0xc
    Params_OnWaitPopupDismissed params{};
    params.Popup = (UPopupScreen*)Popup;
    params.ConfirmationResult = (int32_t)ConfirmationResult;
    ProcessEvent(func, &params);
}
APlayerController* UMapBase::GetMapPlayerController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetMapPlayerController"));
    struct Params_GetMapPlayerController {
        APlayerController* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapPlayerController params{};
    ProcessEvent(func, &params);
    return (APlayerController*)params.ReturnValue;
}
void UMapBase::OnMenuClosedStartFastTravel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.OnMenuClosedStartFastTravel"));
    struct Params_OnMenuClosedStartFastTravel {
    }; // Size: 0x0
    Params_OnMenuClosedStartFastTravel params{};
    ProcessEvent(func, &params);
}
bool UMapBase::IsMissionByBeacon(UBeaconInfo* BeaconInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.IsMissionByBeacon"));
    struct Params_IsMissionByBeacon {
        UBeaconInfo* BeaconInfo; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsMissionByBeacon params{};
    params.BeaconInfo = (UBeaconInfo*)BeaconInfo;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapBase::InputReadyCallback() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.InputReadyCallback"));
    struct Params_InputReadyCallback {
    }; // Size: 0x0
    Params_InputReadyCallback params{};
    ProcessEvent(func, &params);
}
bool UMapBase::IsMissionBeaconNoArea(EBeaconType BeaconType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.IsMissionBeaconNoArea"));
    struct Params_IsMissionBeaconNoArea {
        EBeaconType BeaconType; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsMissionBeaconNoArea params{};
    params.BeaconType = (EBeaconType)BeaconType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapBase::IsMissionBeacon(EBeaconType BeaconType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.IsMissionBeacon"));
    struct Params_IsMissionBeacon {
        EBeaconType BeaconType; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsMissionBeacon params{};
    params.BeaconType = (EBeaconType)BeaconType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapBase::IconInstanceTextureCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.IconInstanceTextureCallback"));
    struct Params_IconInstanceTextureCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_IconInstanceTextureCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
void UMapBase::GoToNextMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GoToNextMap"));
    struct Params_GoToNextMap {
    }; // Size: 0x0
    Params_GoToNextMap params{};
    ProcessEvent(func, &params);
}
bool UMapBase::GetIsMouseDragging() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetIsMouseDragging"));
    struct Params_GetIsMouseDragging {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsMouseDragging params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMapScreenBase* UMapBase::GetMapWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetMapWidget"));
    struct Params_GetMapWidget {
        UMapScreenBase* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapWidget params{};
    ProcessEvent(func, &params);
    return (UMapScreenBase*)params.ReturnValue;
}
EMapZoomTypes::Type UMapBase::GetZoomTypeBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetZoomTypeBP"));
    struct Params_GetZoomTypeBP {
        EMapZoomTypes::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetZoomTypeBP params{};
    ProcessEvent(func, &params);
    return (EMapZoomTypes::Type)params.ReturnValue;
}
FName UMapBase::GetWorldName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetWorldName"));
    struct Params_GetWorldName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWorldName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UMapBase::GetTurnOffFogCheck() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetTurnOffFogCheck"));
    struct Params_GetTurnOffFogCheck {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTurnOffFogCheck params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UWorldSupportWorld* UMapBase::GetMapWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetMapWorld"));
    struct Params_GetMapWorld {
        UWorldSupportWorld* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapWorld params{};
    ProcessEvent(func, &params);
    return (UWorldSupportWorld*)params.ReturnValue;
}
bool UMapBase::GetMapVisible() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetMapVisible"));
    struct Params_GetMapVisible {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMapVisible params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UMapBase::GetMapScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetMapScale"));
    struct Params_GetMapScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMapScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
EMapTypes::Type UMapBase::GetMapType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetMapType"));
    struct Params_GetMapType {
        EMapTypes::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMapType params{};
    ProcessEvent(func, &params);
    return (EMapTypes::Type)params.ReturnValue;
}
bool UMapBase::GetMapReadyCalled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetMapReadyCalled"));
    struct Params_GetMapReadyCalled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMapReadyCalled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMapIcon* UMapBase::GetLastHoveredIcon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetLastHoveredIcon"));
    struct Params_GetLastHoveredIcon {
        UMapIcon* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLastHoveredIcon params{};
    ProcessEvent(func, &params);
    return (UMapIcon*)params.ReturnValue;
}
bool UMapBase::GetKnowledgeCardActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetKnowledgeCardActive"));
    struct Params_GetKnowledgeCardActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetKnowledgeCardActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMapIcon* UMapBase::GetHoveredIcon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetHoveredIcon"));
    struct Params_GetHoveredIcon {
        UMapIcon* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHoveredIcon params{};
    ProcessEvent(func, &params);
    return (UMapIcon*)params.ReturnValue;
}
bool UMapBase::GetCameraLerpInProgress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.GetCameraLerpInProgress"));
    struct Params_GetCameraLerpInProgress {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCameraLerpInProgress params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapBase::CanGoToMissionLogFromIcon(UMapIcon* MapIcon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBase.CanGoToMissionLogFromIcon"));
    struct Params_CanGoToMissionLogFromIcon {
        UMapIcon* MapIcon; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CanGoToMissionLogFromIcon params{};
    params.MapIcon = (UMapIcon*)MapIcon;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
