#include "AActor.hpp"
#include "ALandscapeProxy.hpp"
#include "ELandscapeLODFalloff\Type.hpp"
#include "ENavDataGatheringMode.hpp"
#include "ERendererStencilMask.hpp"
#include "ERuntimeVirtualTextureMainPassType.hpp"
#include "FBodyInstance.hpp"
#include "FGuid.hpp"
#include "FIntPoint.hpp"
#include "FLandscapeProxyMaterialOverride.hpp"
#include "FLightingChannels.hpp"
#include "FLightmassPrimitiveSettings.hpp"
#include "FLinearColor.hpp"
#include "UFunction.hpp"
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#include "ULandscapeComponent.hpp"
#include "ULandscapeHeightfieldCollisionComponent.hpp"
#include "ULandscapeLayerInfoObject.hpp"
#include "ULandscapeSplinesComponent.hpp"
#include "UMaterialInterface.hpp"
#include "UPhysicalMaterial.hpp"
#include "URuntimeVirtualTexture.hpp"
#include "USplineComponent.hpp"
#include "UTexture.hpp"
#include "UTextureRenderTarget2D.hpp"
ALandscapeProxy* ALandscapeProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeProxy");
    return (ALandscapeProxy*)res;
}
void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue"));
    struct Params_SetLandscapeMaterialVectorParameterValue {
        FName ParameterName; // 0x0
        FLinearColor Value; // 0x8
    }; // Size: 0x18
    Params_SetLandscapeMaterialVectorParameterValue params{};
    params.ParameterName = (FName)ParameterName;
    params.Value = (FLinearColor)Value;
    ProcessEvent(func, &params);
}
void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(FName ParameterName, UTexture* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue"));
    struct Params_SetLandscapeMaterialTextureParameterValue {
        FName ParameterName; // 0x0
        UTexture* Value; // 0x8
    }; // Size: 0x10
    Params_SetLandscapeMaterialTextureParameterValue params{};
    params.ParameterName = (FName)ParameterName;
    params.Value = (UTexture*)Value;
    ProcessEvent(func, &params);
}
void ALandscapeProxy::EditorSetLandscapeMaterial(UMaterialInterface* NewLandscapeMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeProxy.EditorSetLandscapeMaterial"));
    struct Params_EditorSetLandscapeMaterial {
        UMaterialInterface* NewLandscapeMaterial; // 0x0
    }; // Size: 0x8
    Params_EditorSetLandscapeMaterial params{};
    params.NewLandscapeMaterial = (UMaterialInterface*)NewLandscapeMaterial;
    ProcessEvent(func, &params);
}
void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue"));
    struct Params_SetLandscapeMaterialScalarParameterValue {
        FName ParameterName; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetLandscapeMaterialScalarParameterValue params{};
    params.ParameterName = (FName)ParameterName;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
bool ALandscapeProxy::LandscapeExportHeightmapToRenderTarget(UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget"));
    struct Params_LandscapeExportHeightmapToRenderTarget {
        UTextureRenderTarget2D* InRenderTarget; // 0x0
        bool InExportHeightIntoRGChannel; // 0x8
        bool InExportLandscapeProxies; // 0x9
        bool ReturnValue; // 0xa
    }; // Size: 0xb
    Params_LandscapeExportHeightmapToRenderTarget params{};
    params.InRenderTarget = (UTextureRenderTarget2D*)InRenderTarget;
    params.InExportHeightIntoRGChannel = (bool)InExportHeightIntoRGChannel;
    params.InExportLandscapeProxies = (bool)InExportLandscapeProxies;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ALandscapeProxy::EditorApplySpline(USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeProxy.EditorApplySpline"));
    struct Params_EditorApplySpline {
        USplineComponent* InSplineComponent; // 0x0
        float StartWidth; // 0x8
        float EndWidth; // 0xc
        float StartSideFalloff; // 0x10
        float EndSideFalloff; // 0x14
        float StartRoll; // 0x18
        float EndRoll; // 0x1c
        int32_t NumSubdivisions; // 0x20
        bool bRaiseHeights; // 0x24
        bool bLowerHeights; // 0x25
        char pad_26[0x2];
        ULandscapeLayerInfoObject* PaintLayer; // 0x28
        FName EditLayerName; // 0x30
    }; // Size: 0x38
    Params_EditorApplySpline params{};
    params.InSplineComponent = (USplineComponent*)InSplineComponent;
    params.StartWidth = (float)StartWidth;
    params.EndWidth = (float)EndWidth;
    params.StartSideFalloff = (float)StartSideFalloff;
    params.EndSideFalloff = (float)EndSideFalloff;
    params.StartRoll = (float)StartRoll;
    params.EndRoll = (float)EndRoll;
    params.NumSubdivisions = (int32_t)NumSubdivisions;
    params.bRaiseHeights = (bool)bRaiseHeights;
    params.bLowerHeights = (bool)bLowerHeights;
    params.PaintLayer = (ULandscapeLayerInfoObject*)PaintLayer;
    params.EditLayerName = (FName)EditLayerName;
    ProcessEvent(func, &params);
}
void ALandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff"));
    struct Params_ChangeUseTessellationComponentScreenSizeFalloff {
        bool InComponentScreenSizeToUseSubSections; // 0x0
    }; // Size: 0x1
    Params_ChangeUseTessellationComponentScreenSizeFalloff params{};
    params.InComponentScreenSizeToUseSubSections = (bool)InComponentScreenSizeToUseSubSections;
    ProcessEvent(func, &params);
}
void ALandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff"));
    struct Params_ChangeTessellationComponentScreenSizeFalloff {
        float InUseTessellationComponentScreenSizeFalloff; // 0x0
    }; // Size: 0x4
    Params_ChangeTessellationComponentScreenSizeFalloff params{};
    params.InUseTessellationComponentScreenSizeFalloff = (float)InUseTessellationComponentScreenSizeFalloff;
    ProcessEvent(func, &params);
}
void ALandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize"));
    struct Params_ChangeTessellationComponentScreenSize {
        float InTessellationComponentScreenSize; // 0x0
    }; // Size: 0x4
    Params_ChangeTessellationComponentScreenSize params{};
    params.InTessellationComponentScreenSize = (float)InTessellationComponentScreenSize;
    ProcessEvent(func, &params);
}
void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeProxy.ChangeLODDistanceFactor"));
    struct Params_ChangeLODDistanceFactor {
        float InLODDistanceFactor; // 0x0
    }; // Size: 0x4
    Params_ChangeLODDistanceFactor params{};
    params.InLODDistanceFactor = (float)InLODDistanceFactor;
    ProcessEvent(func, &params);
}
void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections"));
    struct Params_ChangeComponentScreenSizeToUseSubSections {
        float InComponentScreenSizeToUseSubSections; // 0x0
    }; // Size: 0x4
    Params_ChangeComponentScreenSizeToUseSubSections params{};
    params.InComponentScreenSizeToUseSubSections = (float)InComponentScreenSizeToUseSubSections;
    ProcessEvent(func, &params);
}
