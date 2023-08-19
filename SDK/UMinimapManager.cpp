#include "AActor.hpp"
#include "APawn.hpp"
#include "APlayerController.hpp"
#include "EMiniMapLevels\Type.hpp"
#include "EMiniMapSizeOption.hpp"
#include "FMiniMapSaveDataBlob.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanel.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UMapIconList.hpp"
#include "UMapSubSystem.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UMinimapBase.hpp"
#include "UMinimapDungeon.hpp"
#include "UMinimapHogsmeade.hpp"
#include "UMinimapHogwarts.hpp"
#include "UMinimapManager.hpp"
#include "UMinimapOverland.hpp"
#include "UMinimapSanctuary.hpp"
#include "UMinimapTents.hpp"
#include "UMinimapTutorial.hpp"
#include "UObject.hpp"
#include "USharedMinimapData.hpp"
#include "UTexture2D.hpp"
#include "UTextureUtil.hpp"
#include "UWidget.hpp"
UMinimapManager* UMinimapManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MinimapManager");
    return (UMinimapManager*)res;
}
void UMinimapManager::SetOpacityQucikMiniMapEvent(float Opacity, float MapOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.SetOpacityQucikMiniMapEvent"));
    struct Params_SetOpacityQucikMiniMapEvent {
        float Opacity; // 0x0
        float MapOpacity; // 0x4
    }; // Size: 0x8
    Params_SetOpacityQucikMiniMapEvent params{};
    params.Opacity = (float)Opacity;
    params.MapOpacity = (float)MapOpacity;
    ProcessEvent(func, &params);
}
void UMinimapManager::TurnOffCloudyMiniMapEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.TurnOffCloudyMiniMapEvent"));
    struct Params_TurnOffCloudyMiniMapEvent {
    }; // Size: 0x0
    Params_TurnOffCloudyMiniMapEvent params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::SetIntrusionAlertOnBP(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.SetIntrusionAlertOnBP"));
    struct Params_SetIntrusionAlertOnBP {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_SetIntrusionAlertOnBP params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UMinimapManager::UnrevealMiniMapInternal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.UnrevealMiniMapInternal"));
    struct Params_UnrevealMiniMapInternal {
    }; // Size: 0x0
    Params_UnrevealMiniMapInternal params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::UnrevealMiniMapEvent(bool InstantIntro) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.UnrevealMiniMapEvent"));
    struct Params_UnrevealMiniMapEvent {
        bool InstantIntro; // 0x0
    }; // Size: 0x1
    Params_UnrevealMiniMapEvent params{};
    params.InstantIntro = (bool)InstantIntro;
    ProcessEvent(func, &params);
}
void UMinimapManager::TurnOnCloudyMiniMapEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.TurnOnCloudyMiniMapEvent"));
    struct Params_TurnOnCloudyMiniMapEvent {
    }; // Size: 0x0
    Params_TurnOnCloudyMiniMapEvent params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::UnrevealMiniMap(bool InstantIntro, bool ForceUnreveal, bool fromHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.UnrevealMiniMap"));
    struct Params_UnrevealMiniMap {
        bool InstantIntro; // 0x0
        bool ForceUnreveal; // 0x1
        bool fromHUD; // 0x2
    }; // Size: 0x3
    Params_UnrevealMiniMap params{};
    params.InstantIntro = (bool)InstantIntro;
    params.ForceUnreveal = (bool)ForceUnreveal;
    params.fromHUD = (bool)fromHUD;
    ProcessEvent(func, &params);
}
void UMinimapManager::SwitchToHoverdronePawn(APawn* HoverPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.SwitchToHoverdronePawn"));
    struct Params_SwitchToHoverdronePawn {
        APawn* HoverPawn; // 0x0
    }; // Size: 0x8
    Params_SwitchToHoverdronePawn params{};
    params.HoverPawn = (APawn*)HoverPawn;
    ProcessEvent(func, &params);
}
void UMinimapManager::SwitchToPlayerPawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.SwitchToPlayerPawn"));
    struct Params_SwitchToPlayerPawn {
    }; // Size: 0x0
    Params_SwitchToPlayerPawn params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::TurnOnCloudyMiniMapDarkEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.TurnOnCloudyMiniMapDarkEvent"));
    struct Params_TurnOnCloudyMiniMapDarkEvent {
    }; // Size: 0x0
    Params_TurnOnCloudyMiniMapDarkEvent params{};
    ProcessEvent(func, &params);
}
UMinimapHogwarts* UMinimapManager::GetHogwartsMiniMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.GetHogwartsMiniMap"));
    struct Params_GetHogwartsMiniMap {
        UMinimapHogwarts* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHogwartsMiniMap params{};
    ProcessEvent(func, &params);
    return (UMinimapHogwarts*)params.ReturnValue;
}
bool UMinimapManager::GetIntrusionAlertOn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.GetIntrusionAlertOn"));
    struct Params_GetIntrusionAlertOn {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIntrusionAlertOn params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMinimapManager::Shutdown() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.Shutdown"));
    struct Params_Shutdown {
    }; // Size: 0x0
    Params_Shutdown params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::ShowPathLayerEvent(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.ShowPathLayerEvent"));
    struct Params_ShowPathLayerEvent {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_ShowPathLayerEvent params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UMinimapManager::ShowMiniMapEvent(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.ShowMiniMapEvent"));
    struct Params_ShowMiniMapEvent {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_ShowMiniMapEvent params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UMinimapManager::ShowMiniMap(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.ShowMiniMap"));
    struct Params_ShowMiniMap {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_ShowMiniMap params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UMinimapManager::SetVisibleOpacityMiniMapEvent(bool Visible, float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.SetVisibleOpacityMiniMapEvent"));
    struct Params_SetVisibleOpacityMiniMapEvent {
        bool Visible; // 0x0
        char pad_1[0x3];
        float Opacity; // 0x4
    }; // Size: 0x8
    Params_SetVisibleOpacityMiniMapEvent params{};
    params.Visible = (bool)Visible;
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
void UMinimapManager::HoverdroneToggleMinimap(bool bShowMiniMap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.HoverdroneToggleMinimap"));
    struct Params_HoverdroneToggleMinimap {
        bool bShowMiniMap; // 0x0
    }; // Size: 0x1
    Params_HoverdroneToggleMinimap params{};
    params.bShowMiniMap = (bool)bShowMiniMap;
    ProcessEvent(func, &params);
}
void UMinimapManager::SetOpacityMiniMapEvent(float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.SetOpacityMiniMapEvent"));
    struct Params_SetOpacityMiniMapEvent {
        float Opacity; // 0x0
    }; // Size: 0x4
    Params_SetOpacityMiniMapEvent params{};
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
void UMinimapManager::SetMiniMapWidgetSize(FVector2D Size) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.SetMiniMapWidgetSize"));
    struct Params_SetMiniMapWidgetSize {
        FVector2D Size; // 0x0
    }; // Size: 0x8
    Params_SetMiniMapWidgetSize params{};
    params.Size = (FVector2D)Size;
    ProcessEvent(func, &params);
}
void UMinimapManager::SetMiniMapSize(float Size, float ZoomTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.SetMiniMapSize"));
    struct Params_SetMiniMapSize {
        float Size; // 0x0
        float ZoomTime; // 0x4
    }; // Size: 0x8
    Params_SetMiniMapSize params{};
    params.Size = (float)Size;
    params.ZoomTime = (float)ZoomTime;
    ProcessEvent(func, &params);
}
UMinimapTutorial* UMinimapManager::GetTutorialMiniMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.GetTutorialMiniMap"));
    struct Params_GetTutorialMiniMap {
        UMinimapTutorial* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTutorialMiniMap params{};
    ProcessEvent(func, &params);
    return (UMinimapTutorial*)params.ReturnValue;
}
void UMinimapManager::SetMiniMapLevel(EMiniMapLevels::Type LevelType, bool hideCurrentMap, bool ShowMap, bool LoadNavMesh, bool AllowMiniMapReveal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.SetMiniMapLevel"));
    struct Params_SetMiniMapLevel {
        EMiniMapLevels::Type LevelType; // 0x0
        bool hideCurrentMap; // 0x1
        bool ShowMap; // 0x2
        bool LoadNavMesh; // 0x3
        bool AllowMiniMapReveal; // 0x4
    }; // Size: 0x5
    Params_SetMiniMapLevel params{};
    params.LevelType = (EMiniMapLevels::Type)LevelType;
    params.hideCurrentMap = (bool)hideCurrentMap;
    params.ShowMap = (bool)ShowMap;
    params.LoadNavMesh = (bool)LoadNavMesh;
    params.AllowMiniMapReveal = (bool)AllowMiniMapReveal;
    ProcessEvent(func, &params);
}
void UMinimapManager::SetLockMiniMapReveal(bool pLockMiniMapReveal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.SetLockMiniMapReveal"));
    struct Params_SetLockMiniMapReveal {
        bool pLockMiniMapReveal; // 0x0
    }; // Size: 0x1
    Params_SetLockMiniMapReveal params{};
    params.pLockMiniMapReveal = (bool)pLockMiniMapReveal;
    ProcessEvent(func, &params);
}
void UMinimapManager::SetIsDroneMap(bool pIsDroneMap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.SetIsDroneMap"));
    struct Params_SetIsDroneMap {
        bool pIsDroneMap; // 0x0
    }; // Size: 0x1
    Params_SetIsDroneMap params{};
    params.pIsDroneMap = (bool)pIsDroneMap;
    ProcessEvent(func, &params);
}
void UMinimapManager::HandleMapRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.HandleMapRotation"));
    struct Params_HandleMapRotation {
    }; // Size: 0x0
    Params_HandleMapRotation params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::RevealMiniMapInstantInternal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.RevealMiniMapInstantInternal"));
    struct Params_RevealMiniMapInstantInternal {
    }; // Size: 0x0
    Params_RevealMiniMapInstantInternal params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::SetIntrusionAlertOn(bool pIntrusionAlertOn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.SetIntrusionAlertOn"));
    struct Params_SetIntrusionAlertOn {
        bool pIntrusionAlertOn; // 0x0
    }; // Size: 0x1
    Params_SetIntrusionAlertOn params{};
    params.pIntrusionAlertOn = (bool)pIntrusionAlertOn;
    ProcessEvent(func, &params);
}
bool UMinimapManager::GetMiniMapVisibility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.GetMiniMapVisibility"));
    struct Params_GetMiniMapVisibility {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMiniMapVisibility params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMinimapManager::SetInTentTransition(bool pInTentTransition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.SetInTentTransition"));
    struct Params_SetInTentTransition {
        bool pInTentTransition; // 0x0
    }; // Size: 0x1
    Params_SetInTentTransition params{};
    params.pInTentTransition = (bool)pInTentTransition;
    ProcessEvent(func, &params);
}
void UMinimapManager::DoMapTransitionEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.DoMapTransitionEnd"));
    struct Params_DoMapTransitionEnd {
    }; // Size: 0x0
    Params_DoMapTransitionEnd params{};
    ProcessEvent(func, &params);
}
UMinimapDungeon* UMinimapManager::GetDungeonMiniMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.GetDungeonMiniMap"));
    struct Params_GetDungeonMiniMap {
        UMinimapDungeon* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDungeonMiniMap params{};
    ProcessEvent(func, &params);
    return (UMinimapDungeon*)params.ReturnValue;
}
void UMinimapManager::SanctuarySetHubUnlock(FString NameOfUnlock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.SanctuarySetHubUnlock"));
    struct Params_SanctuarySetHubUnlock {
        FString NameOfUnlock; // 0x0
    }; // Size: 0x10
    Params_SanctuarySetHubUnlock params{};
    params.NameOfUnlock = (FString)NameOfUnlock;
    ProcessEvent(func, &params);
}
void UMinimapManager::RevealMiniMapInternalTents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.RevealMiniMapInternalTents"));
    struct Params_RevealMiniMapInternalTents {
    }; // Size: 0x0
    Params_RevealMiniMapInternalTents params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::RevealMiniMapInternal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.RevealMiniMapInternal"));
    struct Params_RevealMiniMapInternal {
    }; // Size: 0x0
    Params_RevealMiniMapInternal params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::RevealMiniMapEvent(bool InstantIntro) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.RevealMiniMapEvent"));
    struct Params_RevealMiniMapEvent {
        bool InstantIntro; // 0x0
    }; // Size: 0x1
    Params_RevealMiniMapEvent params{};
    params.InstantIntro = (bool)InstantIntro;
    ProcessEvent(func, &params);
}
void UMinimapManager::RevealMiniMap(bool InstantIntro, bool fromHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.RevealMiniMap"));
    struct Params_RevealMiniMap {
        bool InstantIntro; // 0x0
        bool fromHUD; // 0x1
    }; // Size: 0x2
    Params_RevealMiniMap params{};
    params.InstantIntro = (bool)InstantIntro;
    params.fromHUD = (bool)fromHUD;
    ProcessEvent(func, &params);
}
void UMinimapManager::RemoveIntrusionArea(AActor* IntrusionActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.RemoveIntrusionArea"));
    struct Params_RemoveIntrusionArea {
        AActor* IntrusionActor; // 0x0
    }; // Size: 0x8
    Params_RemoveIntrusionArea params{};
    params.IntrusionActor = (AActor*)IntrusionActor;
    ProcessEvent(func, &params);
}
UMapSubSystem* UMinimapManager::GetMapSubsytem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.GetMapSubsytem"));
    struct Params_GetMapSubsytem {
        UMapSubSystem* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapSubsytem params{};
    ProcessEvent(func, &params);
    return (UMapSubSystem*)params.ReturnValue;
}
void UMinimapManager::QuickFadeOutMinimapEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.QuickFadeOutMinimapEvent"));
    struct Params_QuickFadeOutMinimapEvent {
    }; // Size: 0x0
    Params_QuickFadeOutMinimapEvent params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::QuickFadeOutMinimap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.QuickFadeOutMinimap"));
    struct Params_QuickFadeOutMinimap {
    }; // Size: 0x0
    Params_QuickFadeOutMinimap params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::QuickFadeInMinimapEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.QuickFadeInMinimapEvent"));
    struct Params_QuickFadeInMinimapEvent {
    }; // Size: 0x0
    Params_QuickFadeInMinimapEvent params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::QuickFadeInMinimap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.QuickFadeInMinimap"));
    struct Params_QuickFadeInMinimap {
    }; // Size: 0x0
    Params_QuickFadeInMinimap params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::MinimapScaleChanged(EMiniMapSizeOption MiniMapSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.MinimapScaleChanged"));
    struct Params_MinimapScaleChanged {
        EMiniMapSizeOption MiniMapSize; // 0x0
    }; // Size: 0x1
    Params_MinimapScaleChanged params{};
    params.MiniMapSize = (EMiniMapSizeOption)MiniMapSize;
    ProcessEvent(func, &params);
}
bool UMinimapManager::IsParentHoverDrone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.IsParentHoverDrone"));
    struct Params_IsParentHoverDrone {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsParentHoverDrone params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMinimapBase* UMinimapManager::GetActiveMiniMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.GetActiveMiniMap"));
    struct Params_GetActiveMiniMap {
        UMinimapBase* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveMiniMap params{};
    ProcessEvent(func, &params);
    return (UMinimapBase*)params.ReturnValue;
}
void UMinimapManager::HandlePlayerAndMapRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.HandlePlayerAndMapRotation"));
    struct Params_HandlePlayerAndMapRotation {
    }; // Size: 0x0
    Params_HandlePlayerAndMapRotation params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::IconTextureCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.IconTextureCallback"));
    struct Params_IconTextureCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_IconTextureCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
UMinimapTents* UMinimapManager::GetTentsMiniMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.GetTentsMiniMap"));
    struct Params_GetTentsMiniMap {
        UMinimapTents* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTentsMiniMap params{};
    ProcessEvent(func, &params);
    return (UMinimapTents*)params.ReturnValue;
}
UMinimapHogsmeade* UMinimapManager::GetHogsmeadeMiniMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.GetHogsmeadeMiniMap"));
    struct Params_GetHogsmeadeMiniMap {
        UMinimapHogsmeade* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHogsmeadeMiniMap params{};
    ProcessEvent(func, &params);
    return (UMinimapHogsmeade*)params.ReturnValue;
}
UMinimapSanctuary* UMinimapManager::GetSanctuaryMiniMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.GetSanctuaryMiniMap"));
    struct Params_GetSanctuaryMiniMap {
        UMinimapSanctuary* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSanctuaryMiniMap params{};
    ProcessEvent(func, &params);
    return (UMinimapSanctuary*)params.ReturnValue;
}
void UMinimapManager::BeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.BeginPlay"));
    struct Params_BeginPlay {
    }; // Size: 0x0
    Params_BeginPlay params{};
    ProcessEvent(func, &params);
}
UMinimapOverland* UMinimapManager::GetOverlandMiniMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.GetOverlandMiniMap"));
    struct Params_GetOverlandMiniMap {
        UMinimapOverland* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOverlandMiniMap params{};
    ProcessEvent(func, &params);
    return (UMinimapOverland*)params.ReturnValue;
}
float UMinimapManager::GetMiniMapSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.GetMiniMapSize"));
    struct Params_GetMiniMapSize {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMiniMapSize params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UMinimapManager::GetIsDroneMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.GetIsDroneMap"));
    struct Params_GetIsDroneMap {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsDroneMap params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMinimapManager::AddIntrusionArea(AActor* IntrusionActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.AddIntrusionArea"));
    struct Params_AddIntrusionArea {
        AActor* IntrusionActor; // 0x0
    }; // Size: 0x8
    Params_AddIntrusionArea params{};
    params.IntrusionActor = (AActor*)IntrusionActor;
    ProcessEvent(func, &params);
}
bool UMinimapManager::GetInTentTransition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.GetInTentTransition"));
    struct Params_GetInTentTransition {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetInTentTransition params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMinimapManager::GetAreIntrusionAreasActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.GetAreIntrusionAreasActive"));
    struct Params_GetAreIntrusionAreasActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAreIntrusionAreasActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMinimapBase* UMinimapManager::FindMapByName(FString MapName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.FindMapByName"));
    struct Params_FindMapByName {
        FString MapName; // 0x0
        UMinimapBase* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_FindMapByName params{};
    params.MapName = (FString)MapName;
    ProcessEvent(func, &params);
    return (UMinimapBase*)params.ReturnValue;
}
void UMinimapManager::DoMapTransitionStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.DoMapTransitionStart"));
    struct Params_DoMapTransitionStart {
    }; // Size: 0x0
    Params_DoMapTransitionStart params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::BeginDestroy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.BeginDestroy"));
    struct Params_BeginDestroy {
    }; // Size: 0x0
    Params_BeginDestroy params{};
    ProcessEvent(func, &params);
}
void UMinimapManager::AddMiniMap(UMinimapBase* pMiniMapbase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MinimapManager.AddMiniMap"));
    struct Params_AddMiniMap {
        UMinimapBase* pMiniMapbase; // 0x0
    }; // Size: 0x8
    Params_AddMiniMap params{};
    params.pMiniMapbase = (UMinimapBase*)pMiniMapbase;
    ProcessEvent(func, &params);
}
