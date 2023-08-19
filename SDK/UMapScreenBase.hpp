#pragma once
#include <cstdint>
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
#include "UTabPageWidget.hpp"
class UFastTravelList;
class UToolTipPopoutWidget;
class UCanvasPanel;
class UMapRegionInfoWidget;
class UUserWidget;
class UPhoenixTextBlock;
class AMapPawn;
class AActor;
class UMapIcon;
class UUIManager;
class UMapSubSystem;
class UMapBase;
#pragma pack(push, 1)
class UMapScreenBase : public UTabPageWidget {
public:
    UToolTipPopoutWidget* ToolTipPopup2; // 0x3c8
    UMapRegionInfoWidget* RegionInfoPopup; // 0x3d0
    UPhoenixTextBlock* DebugRegion; // 0x3d8
    AMapPawn* MapPawn; // 0x3e0
    UFastTravelList* FastTravelList; // 0x3e8
    UCanvasPanel* IconContainer; // 0x3f0
    char pad_3f8[0xe0];
    static UMapScreenBase* StaticClass();
    void ZoomOutReleased_Event();
    void ZoomOutPressed_Event();
    void ZoomInReleased_Event();
    void ZoomInPressed_Event();
    void WayPointUnset_Event();
    void WayPointSet_Event();
    void UnregisterBButton();
    void TierChanged_Event();
    void ShowOverlandMissionsAvailable();
    void ShowHogwartsMissionsAvailable();
    void ShowHogsmeadeMissionsAvailable();
    void ShowFastTravelList();
    void SetZoomType(EMapZoomTypes::Type ZoomType);
    void SetTipLegend_Event();
    void SetPath();
    void SetMouseDelta(FVector2D Delta);
    void SetMapType(EMapTypes::Type MapType);
    void SetLocationName_Event(FString PrimarayLocationName);
    void SetLevelName_Event(FString LevelName);
    void SetLegendStrings(TArray<FLegendItemData>& LegendStrings);
    void SetLegend(TArray<FLegendItemData>& LegendStrings);
    void SetIsFilterShowing(bool ShowFilter);
    void SetIconContainerSize();
    void SetCoverVisibilityAlpha_Event(float Alpha);
    void SetCoverVisibility_Event(bool Enable);
    void SetCoverVisibility(bool Enable);
    void SetCoverAlpha(float Alpha);
    bool ScreenHandleInput(FKey Input);
    void RightMouseButtonReleased();
    void RightMouseButtonPressed();
    void RegisterBButton();
    void RegionInfoUpdated_Event();
    void RegionHovered_Event(ERegionType MapRegion, int32_t RegionIndex, UUserWidget* IconWidget);
    void PlayIconBurst_Event(AActor* NiagaraActor);
    void PlayFanfare_Event(UMapIcon* Icon);
    void OnUpdateToolTip_Event(FMapToolTipData ToolTipData);
    void OnUnhovered_Event();
    void OnHovered_Event(FMapToolTipData ToolTipData);
    bool MouseTimeGreaterThanClick(EMapScreenMouseButtonID buttonID);
    void MiddleMouseButtonReleased();
    void MiddleMouseButtonPressed();
    void MapStop_Event();
    void MapStart_Event();
    void MapMove_Event();
    void MapChanged_Event();
    void LockMapInput(bool Lock);
    void LeftMouseButtonReleased();
    void LeftMouseButtonPressed();
    bool IsMouseButtonAClick(EMapScreenMouseButtonID buttonID);
    bool IsFastTravelListVisible();
    bool IsAnyTutorialActive();
    void IconShown_Event(UMapIcon* iconHidden);
    void IconHidden_Event(UMapIcon* iconHidden);
    void HitMapBounds_Event();
    void HideFastTravelList();
    float GetZoomInputDelta();
    float GetZoomFactor();
    UUIManager* GetUIManager();
    EMapZoomTypes::Type GetTier();
    float GetPressedButtonTime(EMapScreenMouseButtonID buttonID);
    FVector2D GetMovementDelta();
    FVector2D GetMouseDelta();
    FMapScreenMouseButton GetMouseButtonInput(EMapScreenMouseButtonID buttonID);
    EMapTypes::Type GetMapType();
    UMapSubSystem* GetMapSubSystem();
    UMapBase* GetMapBase();
    bool GetIsMouseInScreen();
    bool GetIsFilterShowing();
    FUMGConsolidatedAxisInputData GetInputAxisData();
    void ExitMapScreen_Event();
    void DisableOverlandButton();
    void DisableHogwartsButton();
    void DisableHogsmeadeButton();
    void ClearMouseButtons();
    void ClearMouseButton(EMapScreenMouseButtonID buttonID);
}; // Size: 0x4d8
#pragma pack(pop)
