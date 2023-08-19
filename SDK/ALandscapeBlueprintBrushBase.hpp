#pragma once
#include <cstdint>
#include "AActor.hpp"
class UTextureRenderTarget2D;
struct FTransform;
struct FIntPoint;
class UObject;
#pragma pack(push, 1)
class ALandscapeBlueprintBrushBase : public AActor {
public:
    static ALandscapeBlueprintBrushBase* StaticClass();
    void RequestLandscapeUpdate();
    UTextureRenderTarget2D* Render(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, FName& InWeightmapLayerName);
    void Initialize(FTransform& InLandscapeTransform, FIntPoint& InLandscapeSize, FIntPoint& InLandscapeRenderTargetSize);
    void GetBlueprintRenderDependencies(TArray<UObject*>& OutStreamableAssets);
}; // Size: 0x248
#pragma pack(pop)
