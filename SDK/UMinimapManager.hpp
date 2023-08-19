#pragma once
#include <cstdint>
#include "EMiniMapLevels\Type.hpp"
#include "EMiniMapSizeOption.hpp"
#include "FMiniMapSaveDataBlob.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UHUDElementGroup.hpp"
class UClass;
class UTextureUtil;
class UCanvasPanel;
class UImage;
class USharedMinimapData;
class UTexture2D;
class AActor;
class UMaterialInterface;
class APawn;
class APlayerController;
class UMinimapBase;
class UWidget;
class UMinimapOverland;
class UMapIconList;
class UMinimapHogwarts;
class UMinimapSanctuary;
class UMinimapHogsmeade;
class UMinimapDungeon;
class UMinimapTutorial;
class UMinimapTents;
class UMaterialInstanceDynamic;
class UObject;
class UMapSubSystem;
#pragma pack(push, 1)
class UMinimapManager : public UHUDElementGroup {
public:
    UCanvasPanel* MaskedIconContainer; // 0x2e8
    UCanvasPanel* UnmaskedIconContainer; // 0x2f0
    UImage* FadeCircle; // 0x2f8
    char pad_300[0x30];
    USharedMinimapData* SharedMinimapData; // 0x330
    float IconRange1Arrow; // 0x338
    float IconRange2Arrow; // 0x33c
    float IconRange3Arrow; // 0x340
    char pad_344[0x14];
    FMiniMapSaveDataBlob MiniMapSaveDataBlob; // 0x358
    char pad_3a8[0xe0];
    UTextureUtil* IntrusionBlitter; // 0x488
    UTexture2D* IntrusionTexture; // 0x490
    char pad_498[0x10];
    AActor* IntrusionFXActor; // 0x4a8
    char pad_4b0[0xd0];
    UClass* IconClass; // 0x580
    UClass* IconRenderWidgetClass; // 0x588
    UMaterialInterface* IconRenderWidgetPulseMaterial; // 0x590
    UMaterialInterface* IconRenderWidgetGlowMaterial; // 0x598
    UMaterialInterface* IconRenderWidgetSimpleMaterial; // 0x5a0
    UMaterialInterface* IconRenderWidgetPathMaterial; // 0x5a8
    UMaterialInterface* IconRenderAreaBeaconMaterial; // 0x5b0
    UClass* MinimapWidgetClass; // 0x5b8
    char pad_5c0[0x8];
    APawn* PlayerPawn; // 0x5c8
    APawn* PrevPawn; // 0x5d0
    APlayerController* PlayerController; // 0x5d8
    char pad_5e0[0x10];
    TArray<UMinimapBase*> MiniMaps; // 0x5f0
    UMinimapBase* ActiveMiniMap; // 0x600
    UMinimapOverland* OverlandMiniMap; // 0x608
    UMinimapHogwarts* HogwartsMiniMap; // 0x610
    UMinimapHogsmeade* HogsmeadeMiniMap; // 0x618
    UMinimapDungeon* DungeonMiniMap; // 0x620
    UMinimapTutorial* TutorialMiniMap; // 0x628
    UMinimapSanctuary* SanctuaryMiniMap; // 0x630
    UMinimapTents* TentsMiniMap; // 0x638
    char pad_640[0x10];
    UMinimapBase* FadingOutMap; // 0x650
    UMinimapBase* FadingInMap; // 0x658
    char pad_660[0x20];
    bool MiniMapVisible; // 0x680
    char pad_681[0x7];
    TArray<UWidget*> MapWidgetsToRotate; // 0x688
    TArray<UWidget*> PlayerWidgetsToRotate; // 0x698
    float MinimapCamRotation; // 0x6a8
    float MiniMapPlayerRotation; // 0x6ac
    char pad_6b0[0xb0];
    TArray<FVector> UpdatePath; // 0x760
    UMaterialInterface* PathMaterial; // 0x770
    UMaterialInstanceDynamic* PathMaterialDynamic; // 0x778
    UImage* PathImage; // 0x780
    char pad_788[0x10];
    TArray<UMapIconList*> MapIconListArray; // 0x798
    UMapIconList* PathIconList; // 0x7a8
    static UMinimapManager* StaticClass();
    void UnrevealMiniMapInternal();
    void UnrevealMiniMapEvent(bool InstantIntro);
    void UnrevealMiniMap(bool InstantIntro, bool ForceUnreveal, bool fromHUD);
    void TurnOnCloudyMiniMapEvent();
    void TurnOnCloudyMiniMapDarkEvent();
    void TurnOffCloudyMiniMapEvent();
    void SwitchToPlayerPawn();
    void SwitchToHoverdronePawn(APawn* HoverPawn);
    void Shutdown();
    void ShowPathLayerEvent(bool Enable);
    void ShowMiniMapEvent(bool Enable);
    void ShowMiniMap(bool Enable);
    void SetVisibleOpacityMiniMapEvent(bool Visible, float Opacity);
    void SetOpacityQucikMiniMapEvent(float Opacity, float MapOpacity);
    void SetOpacityMiniMapEvent(float Opacity);
    void SetMiniMapWidgetSize(FVector2D Size);
    void SetMiniMapSize(float Size, float ZoomTime);
    void SetMiniMapLevel(EMiniMapLevels::Type LevelType, bool hideCurrentMap, bool ShowMap, bool LoadNavMesh, bool AllowMiniMapReveal);
    void SetLockMiniMapReveal(bool pLockMiniMapReveal);
    void SetIsDroneMap(bool pIsDroneMap);
    void SetIntrusionAlertOnBP(bool Enable);
    void SetIntrusionAlertOn(bool pIntrusionAlertOn);
    void SetInTentTransition(bool pInTentTransition);
    void SanctuarySetHubUnlock(FString NameOfUnlock);
    void RevealMiniMapInternalTents();
    void RevealMiniMapInternal();
    void RevealMiniMapInstantInternal();
    void RevealMiniMapEvent(bool InstantIntro);
    void RevealMiniMap(bool InstantIntro, bool fromHUD);
    void RemoveIntrusionArea(AActor* IntrusionActor);
    void QuickFadeOutMinimapEvent();
    void QuickFadeOutMinimap();
    void QuickFadeInMinimapEvent();
    void QuickFadeInMinimap();
    void MinimapScaleChanged(EMiniMapSizeOption MiniMapSize);
    bool IsParentHoverDrone();
    void IconTextureCallback(UTexture2D* Texture, UObject* Param);
    void HoverdroneToggleMinimap(bool bShowMiniMap);
    void HandlePlayerAndMapRotation();
    void HandleMapRotation();
    UMinimapTutorial* GetTutorialMiniMap();
    UMinimapTents* GetTentsMiniMap();
    UMinimapSanctuary* GetSanctuaryMiniMap();
    UMinimapOverland* GetOverlandMiniMap();
    bool GetMiniMapVisibility();
    float GetMiniMapSize();
    UMapSubSystem* GetMapSubsytem();
    bool GetIsDroneMap();
    bool GetIntrusionAlertOn();
    bool GetInTentTransition();
    UMinimapHogwarts* GetHogwartsMiniMap();
    UMinimapHogsmeade* GetHogsmeadeMiniMap();
    UMinimapDungeon* GetDungeonMiniMap();
    bool GetAreIntrusionAreasActive();
    UMinimapBase* GetActiveMiniMap();
    UMinimapBase* FindMapByName(FString MapName);
    void DoMapTransitionStart();
    void DoMapTransitionEnd();
    void BeginPlay();
    void BeginDestroy();
    void AddMiniMap(UMinimapBase* pMiniMapbase);
    void AddIntrusionArea(AActor* IntrusionActor);
}; // Size: 0x7b0
#pragma pack(pop)
