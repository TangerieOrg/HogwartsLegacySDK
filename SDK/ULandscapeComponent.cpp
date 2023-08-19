#include "FBox.hpp"
#include "FGuid.hpp"
#include "FLandscapeComponentMaterialOverride.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "FWeightmapLayerAllocationInfo.hpp"
#include "UFunction.hpp"
#include "ULandscapeComponent.hpp"
#include "ULandscapeLODStreamingProxy.hpp"
#include "ULandscapeLayerInfoObject.hpp"
#include "UMaterialInstanceConstant.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UPrimitiveComponent.hpp"
#include "UTexture2D.hpp"
UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int32_t InIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeComponent.GetMaterialInstanceDynamic"));
    struct Params_GetMaterialInstanceDynamic {
        int32_t InIndex; // 0x0
        char pad_4[0x4];
        UMaterialInstanceDynamic* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetMaterialInstanceDynamic params{};
    params.InIndex = (int32_t)InIndex;
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
ULandscapeComponent* ULandscapeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeComponent");
    return (ULandscapeComponent*)res;
}
float ULandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(FVector& InLocation, FName InPaintLayerName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation"));
    struct Params_EditorGetPaintLayerWeightByNameAtLocation {
        FVector InLocation; // 0x0
        FName InPaintLayerName; // 0xc
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_EditorGetPaintLayerWeightByNameAtLocation params{};
    params.InLocation = (FVector)InLocation;
    params.InPaintLayerName = (FName)InPaintLayerName;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
    return (float)params.ReturnValue;
}
float ULandscapeComponent::EditorGetPaintLayerWeightAtLocation(FVector& InLocation, ULandscapeLayerInfoObject* PaintLayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation"));
    struct Params_EditorGetPaintLayerWeightAtLocation {
        FVector InLocation; // 0x0
        char pad_c[0x4];
        ULandscapeLayerInfoObject* PaintLayer; // 0x10
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_EditorGetPaintLayerWeightAtLocation params{};
    params.InLocation = (FVector)InLocation;
    params.PaintLayer = (ULandscapeLayerInfoObject*)PaintLayer;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
    return (float)params.ReturnValue;
}
