#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UUserWidget.hpp"
class UMiniMapParameters;
class UMapIconInstance;
class UTexture2D;
class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;
class UMaterialInterface;
#pragma pack(push, 1)
class UMinimapBase : public UUserWidget {
public:
    bool InSearchAreaState; // 0x268
    char pad_269[0x3];
    float MinYElevationDist; // 0x26c
    float MinYElevationDistHogwarts; // 0x270
    float MaxXElevationDist; // 0x274
    float MinYElevationDistSquared; // 0x278
    float MaxXElevationDistSquared; // 0x27c
    float ElevationBuffer; // 0x280
    float ElevationBufferSquared; // 0x284
    FLinearColor DefaultIconColor; // 0x288
    FLinearColor DefaultDiscoveredColor; // 0x298
    UMiniMapParameters* MiniMapParameters; // 0x2a8
    char pad_2b0[0x48];
    UTexture2D* MapVirtualTexture; // 0x2f8
    UTexture2D* MapRegularVirtualTexture; // 0x300
    UTexture2D* MapNoFlyVirtualTexture; // 0x308
    UTextureRenderTarget2D* MapRenderTarget; // 0x310
    UTextureRenderTarget2D* MapRenderTargetNoFly; // 0x318
    char pad_320[0x28];
    UMaterialInterface* Material; // 0x348
    UMaterialInstanceDynamic* MaterialDynamic; // 0x350
    char pad_358[0x148];
    static UMinimapBase* StaticClass();
    void ShowOutline(UMapIconInstance* Icon);
    void ShowMap(bool Visibile);
    void SetSize(float Size);
    void SetPlayerPositionTextureSpaceEvent(FVector2D pPlayerLocation);
    void SetPlayerPositionEvent(FVector pPlayerLocation);
    void SetPlayerPosition(FVector pPlayerPosition);
    void SetPathPulseVisibility(float PulseVisibility);
    void SetPathPulseSpeed(float Speed);
    void SetOpacity(float Alpha);
    void SetMiniMapSize(float Size, float ZoomTime);
    void SetMaterialTexture(FString TextureParameter, UTexture2D* Texture);
    void SetMapOpacity(float Opacity);
    void SetIntrusionColor(FLinearColor Color);
    void SetIconDistanceScale(float IconDistanceScale);
    void SetColorByName(FString ParameterName, FLinearColor Color);
    void PulseCircleIcon(UMapIconInstance* Icon);
    void OverrideLevelBounds(FVector2D TopLeft, FVector2D BottomRight);
    bool IsPointInBounds(FVector2D Point, FVector2D TL, FVector2D BR);
    FVector2D GetWorldToTextureScale();
    void GetVisibleBoundsInPixels(FVector2D& TL, FVector2D& BR);
    void GetVisibleBounds(FVector2D& TL, FVector2D& BR);
    FVector2D GetTopLeftPadded();
    FVector GetPlayerLocation();
    FVector2D GetOnScreenTextureArea();
    float GetMiniMapZoomSize();
    float GetMiniMapSize();
    float GetMiniMapInitialSize();
    FVector2D GetMapToTextureRatio();
    FVector2D GetMapMultiplier();
    void GetBoundsForTextureSpaceSubSection(FVector WorldPosition, FVector2D& TL, FVector2D& BR, float& AvgMultiplier);
    FVector2D GetBottomRightPadded();
    void FadeInMissionIcon(UMapIconInstance* Icon);
    void FadeInCircleIcon(UMapIconInstance* Icon);
    FVector2D ConvertFromWorldSpaceToTextureSpaceSubSection(FVector WorldPosition);
    void CalculateScale();
}; // Size: 0x4a0
#pragma pack(pop)
