#pragma once
#include <cstdint>
#include "EBeaconType.hpp"
#include "EMapFadeState.hpp"
#include "EMapLocTypes\Type.hpp"
#include "EMapTypes\Type.hpp"
#include "EMapZoomTypes\Type.hpp"
#include "FMapIconEntry.hpp"
#include "FMapLevelData.hpp"
#include "UObject.hpp"
class UWorldSupportWorld;
class UMapFX;
class UMaterialInstanceDynamic;
class UMapIcon;
class UClass;
class UMapScreenBase;
class UDebugTextPanel;
class UMapMovementComponent;
class AMapPawn;
class UMapCameraParameters;
class UPopupScreen;
class UBeaconInfo;
class UTexture2D;
class APlayerController;
#pragma pack(push, 1)
class UMapBase : public UObject {
public:
    char pad_28[0x18];
    float HogwartsDotIconScale; // 0x40
    char pad_44[0x464];
    UMapFX* ClosestFastTravelFX; // 0x4a8
    UMapIcon* ClosestFastTravelIcon; // 0x4b0
    TArray<FMapIconEntry> RegionDotIconList; // 0x4b8
    UClass* MapIconWidgetClass; // 0x4c8
    UMapScreenBase* BaseMapWidget; // 0x4d0
    UClass* MapBPWidgetClass; // 0x4d8
    UClass* MapIconBPClass; // 0x4e0
    UClass* MapSpriteIconBPClass; // 0x4e8
    UWorldSupportWorld* MapWorld; // 0x4f0
    TArray<FMapLevelData> LevelsToLoad; // 0x4f8
    char pad_508[0x128];
    UMapIcon* PlayerMarkerIcon; // 0x630
    char pad_638[0x8];
    UMaterialInstanceDynamic* PlayerMarkerMaterial; // 0x640
    char pad_648[0x30];
    UDebugTextPanel* DebugTextPanel; // 0x678
    float WayMarkerScale; // 0x680
    char pad_684[0x14];
    UMapIcon* hoverIcon; // 0x698
    UMapIcon* LastHoverIcon; // 0x6a0
    UMapIcon* LastHoverIconUnhover; // 0x6a8
    char pad_6b0[0x8];
    UMapMovementComponent* MovementComponent; // 0x6b8
    AMapPawn* MapPawn; // 0x6c0
    char pad_6c8[0x208];
    TArray<UMapIcon*> StackIcons; // 0x8d0
    char pad_8e0[0x34];
    float ZoomFadeStart; // 0x914
    float ZoomFadeEnd; // 0x918
    float MinimumAlpha; // 0x91c
    int32_t MaxFrameCountToCover; // 0x920
    float MapAnalogControllerMin; // 0x924
    float CursorSnapDistance; // 0x928
    char pad_92c[0x4];
    UMapCameraParameters* CameraParameters; // 0x930
    UMapCameraParameters* DebugCameraParameters; // 0x938
    static UMapBase* StaticClass();
    bool TutorialDisablesMapBehavior_Blueprint(EMapLocTypes::Type MapBehavior);
    void TrackHoveredMission();
    void SetTurnOffFogCheck(bool pTurnOffFogCheck);
    void SetLastHoveredIcon(UMapIcon* lastIcon);
    void SetKnowledgeCardActive(bool pKnowledgeCardActive);
    void SetHoveredIcon(UMapIcon* hoverIcon);
    void SetCoverDisplayed(bool Enable);
    void SetCoverAlpha(float Alpha);
    void ReturnCursorToPlayerLocation();
    void PlaceWayMarkerClick();
    void PlaceWayMarkerBP();
    void OnWaitPopupDismissed(UPopupScreen* Popup, int32_t ConfirmationResult);
    void OnMenuClosedStartFastTravel();
    float IsWaitAvailable();
    bool IsMissionByBeacon(UBeaconInfo* BeaconInfo);
    static bool IsMissionBeaconNoArea(EBeaconType BeaconType);
    static bool IsMissionBeacon(EBeaconType BeaconType);
    void InputReadyCallback();
    void IconOutlineTextureCallback(UTexture2D* Texture, UObject* Param);
    void IconInstanceTextureCallback(UTexture2D* Texture, UObject* Param);
    void GoToPreviousMap();
    void GoToNextMap();
    EMapZoomTypes::Type GetZoomTypeBP();
    float GetZoomFactor();
    FName GetWorldName();
    bool GetTurnOffFogCheck();
    UWorldSupportWorld* GetMapWorld();
    UMapScreenBase* GetMapWidget();
    bool GetMapVisible();
    EMapTypes::Type GetMapType();
    float GetMapScale();
    bool GetMapReadyCalled();
    APlayerController* GetMapPlayerController();
    FName GetMapName();
    EMapFadeState GetMapFadeState();
    UMapIcon* GetLastHoveredIcon();
    bool GetKnowledgeCardActive();
    bool GetIsMouseDragging();
    bool GetHoveredState();
    UMapIcon* GetHoveredIcon();
    bool GetCameraLerpInProgress();
    bool CanGoToMissionLogFromIcon(UMapIcon* MapIcon);
    void AdvanceTime();
}; // Size: 0x940
#pragma pack(pop)
