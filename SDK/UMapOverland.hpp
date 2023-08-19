#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UMapBase.hpp"
class UTextureUtil;
class UStaticMeshComponent;
class UTexture2D;
class UObject;
class AActor;
class URegionData;
class APhoenixMapRegion;
class UOverlandMapScreen;
#pragma pack(push, 1)
class UMapOverland : public UMapBase {
public:
    UTextureUtil* FogMaskBlitter; // 0x940
    char pad_948[0x8];
    UStaticMeshComponent* Tiles[64]; // 0x950
    char pad_b50[0x10];
    TArray<AActor*> RegionActors; // 0xb60
    AActor* MapBounds; // 0xb70
    UTextureUtil* RegionMaskBlitter; // 0xb78
    char pad_b80[0x8];
    TArray<URegionData*> NewlyDiscoveredRegions; // 0xb88
    char pad_b98[0x28];
    TArray<APhoenixMapRegion*> RegionSplineActors; // 0xbc0
    char pad_bd0[0x10];
    bool bIsFastTravelListShowingRegions; // 0xbe0
    char pad_be1[0x3];
    float ZoomFactorTier1; // 0xbe4
    float ZoomFactorTier2; // 0xbe8
    float ZoomFactorTier3; // 0xbec
    float ZoomFactorTier4; // 0xbf0
    float ZoomFactorTier5; // 0xbf4
    float RegionSplineHeight; // 0xbf8
    FLinearColor MapIconDiscoveredColor; // 0xbfc
    FLinearColor MapIconColor; // 0xc0c
    float DefaultIconScale; // 0xc1c
    float CursorScale; // 0xc20
    float CursorScaleFactor; // 0xc24
    FVector DecalSize; // 0xc28
    char pad_c34[0xc];
    FVector4 MapCursorBounds; // 0xc40
    FVector4 MapCursorBoundsInitial; // 0xc50
    FVector4 MapCursorBoundsHogwarts; // 0xc60
    FVector4 MapCursorBoundsForest; // 0xc70
    FVector4 MapCursorBoundsSwamp; // 0xc80
    FVector4 MapCursorBoundsTundra; // 0xc90
    FVector4 MapScreenBounds; // 0xca0
    FVector4 MapScreenBoundsInitial; // 0xcb0
    UTexture2D* FogMaskTexture; // 0xcc0
    UTexture2D* RegionMaskTexture; // 0xcc8
    UTexture2D* RegionHighlightMaskTexture; // 0xcd0
    char pad_cd8[0x4];
    float AboveFogHeight; // 0xcdc
    static UMapOverland* StaticClass();
    void RemoveWayMarkerBP();
    UOverlandMapScreen* GetMapScreenWidget();
    void DoFastTravel();
    void CursorCallback(UTexture2D* Texture, UObject* Param);
}; // Size: 0xce0
#pragma pack(pop)
