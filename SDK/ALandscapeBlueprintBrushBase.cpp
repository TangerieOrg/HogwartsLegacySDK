#include "AActor.hpp"
#include "ALandscapeBlueprintBrushBase.hpp"
#include "FIntPoint.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTextureRenderTarget2D.hpp"
ALandscapeBlueprintBrushBase* ALandscapeBlueprintBrushBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeBlueprintBrushBase");
    return (ALandscapeBlueprintBrushBase*)res;
}
UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::Render(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, FName& InWeightmapLayerName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeBlueprintBrushBase.Render"));
    struct Params_Render {
        bool InIsHeightmap; // 0x0
        char pad_1[0x7];
        UTextureRenderTarget2D* InCombinedResult; // 0x8
        FName InWeightmapLayerName; // 0x10
        UTextureRenderTarget2D* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_Render params{};
    params.InIsHeightmap = (bool)InIsHeightmap;
    params.InCombinedResult = (UTextureRenderTarget2D*)InCombinedResult;
    params.InWeightmapLayerName = (FName)InWeightmapLayerName;
    ProcessEvent(func, &params);
    InWeightmapLayerName = params.InWeightmapLayerName;
    return (UTextureRenderTarget2D*)params.ReturnValue;
}
void ALandscapeBlueprintBrushBase::RequestLandscapeUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate"));
    struct Params_RequestLandscapeUpdate {
    }; // Size: 0x0
    Params_RequestLandscapeUpdate params{};
    ProcessEvent(func, &params);
}
void ALandscapeBlueprintBrushBase::Initialize(FTransform& InLandscapeTransform, FIntPoint& InLandscapeSize, FIntPoint& InLandscapeRenderTargetSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeBlueprintBrushBase.Initialize"));
    struct Params_Initialize {
        FTransform InLandscapeTransform; // 0x0
        FIntPoint InLandscapeSize; // 0x30
        FIntPoint InLandscapeRenderTargetSize; // 0x38
    }; // Size: 0x40
    Params_Initialize params{};
    params.InLandscapeTransform = (FTransform)InLandscapeTransform;
    params.InLandscapeSize = (FIntPoint)InLandscapeSize;
    params.InLandscapeRenderTargetSize = (FIntPoint)InLandscapeRenderTargetSize;
    ProcessEvent(func, &params);
    InLandscapeTransform = params.InLandscapeTransform;
    InLandscapeSize = params.InLandscapeSize;
    InLandscapeRenderTargetSize = params.InLandscapeRenderTargetSize;
}
void ALandscapeBlueprintBrushBase::GetBlueprintRenderDependencies(TArray<UObject*>& OutStreamableAssets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies"));
    struct Params_GetBlueprintRenderDependencies {
        TArray<UObject*> OutStreamableAssets; // 0x0
    }; // Size: 0x10
    Params_GetBlueprintRenderDependencies params{};
    params.OutStreamableAssets = (TArray<UObject*>)OutStreamableAssets;
    ProcessEvent(func, &params);
    OutStreamableAssets = params.OutStreamableAssets;
}
