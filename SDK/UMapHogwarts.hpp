#pragma once
#include <cstdint>
#include "EMapZoomTypes\Type.hpp"
#include "FHogwartsRegion.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UMapBase.hpp"
class ATargetPoint;
class APhoenixPathActor;
class UObject;
class UTexture2D;
class UMaterialInstanceDynamic;
class UMapPath;
class AMapHogwartsCamera;
class AMapLocationActor;
class AActor;
class UHogwartsMapScreen;
class UWorld;
class UClass;
#pragma pack(push, 1)
class UMapHogwarts : public UMapBase {
public:
    bool bDebugPathHelper; // 0x940
    char pad_941[0x7];
    TArray<APhoenixPathActor*> MapPathActors; // 0x948
    FLinearColor Road50Color; // 0x958
    FLinearColor Road100Color; // 0x968
    FLinearColor Road200Color; // 0x978
    FLinearColor RoadUnknownColor; // 0x988
    float RegionHoverOverAlpha; // 0x998
    char pad_99c[0x4];
    TArray<void*> RegisteredMarkupActors; // 0x9a0
    UMaterialInstanceDynamic* PathDynamicMaterial; // 0x9b0
    AMapHogwartsCamera* StartCamera; // 0x9b8
    AMapHogwartsCamera* CurrentCamera; // 0x9c0
    char pad_9c8[0x78];
    TArray<AMapLocationActor*> OtherObjectsToDarken; // 0xa40
    TArray<ATargetPoint*> TargetPointActors; // 0xa50
    char pad_a60[0xd0];
    TArray<UMapPath*> OverlandMapPaths; // 0xb30
    char pad_b40[0x38];
    TArray<FHogwartsRegion> Regions; // 0xb78
    char pad_b88[0x8];
    TArray<FName> MissionsForThisRegion; // 0xb90
    char pad_ba0[0xb0];
    bool ShowDebugMapPath; // 0xc50
    bool ShowPathDebug; // 0xc51
    bool ShowZoneBanner; // 0xc52
    char pad_c53[0x5];
    TArray<AMapLocationActor*> LocationActors; // 0xc58
    float MapIconTier3ScaleFactor; // 0xc68
    float MapIconTier4ScaleFactor; // 0xc6c
    float DefaultIconScale; // 0xc70
    char pad_c74[0xc];
    static UMapHogwarts* StaticClass();
    void WayPointCallbackHogwarts(UTexture2D* Texture, UObject* Param);
    static void UnregisterMarkupActor(AActor* Actor);
    void TestEvent();
    void ShowPortraitTravel();
    void SetZoomType(EMapZoomTypes::Type ZoomType);
    void SetUseNewIcons(bool pUseNewIcons);
    static void RegisterMarkupActor(AActor* Actor);
    void OverlandMapZoom(float Val);
    void OnStartPathing(UObject* i_caller, uint32_t BeaconHandle);
    void OnSaveGameLoaded();
    void OnMapItemSelected_Event(FString ItemString, int32_t ItemIndex, bool WasCanceled);
    void OnMapItemSelected(FString& ItemString, int32_t ItemIndex, bool WasCanceled);
    void OnCameraBlendComplete();
    bool IsBannerActive();
    bool InHogwartsLocation(FVector Location);
    bool InHogwarts();
    void HandleMapLocationChanged(UObject* Caller, FString CurrentMapLocationName);
    void GiveMeHelp_Event();
    EMapZoomTypes::Type GetZoomType(float Zoom);
    bool GetUseNewIcons();
    TArray<FName> GetMissionsForThisRegion();
    FVector GetMapTransform();
    UHogwartsMapScreen* GetMapScreenWidget();
    FString GetMapLocationName();
    void GetAllActorsWithTag(UWorld* World, FName Tag, TArray<AActor*>& Actors);
    void GetAllActorsOfClass(UWorld* World, UClass* ActorClass, TArray<AActor*>& Actors);
    void CheckLoadedProperly();
    void ChangeTier();
    float CalulatePathDistance(TArray<FVector> InPathPoints);
    void ActivateFastTravelByIcon();
    void ActivateFastTravel(FString LocationID, FVector FastTravelDestination);
    void ActivateBanner(bool ACTIVE);
}; // Size: 0xc80
#pragma pack(pop)
