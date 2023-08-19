#pragma once
#include <cstdint>
#include "FMaterialCachedParameters.hpp"
#include "FMaterialFunctionInfo.hpp"
#include "FMaterialParameterCollectionInfo.hpp"
class UObject;
class UMaterialFunctionInterface;
class ULandscapeGrassType;
#pragma pack(push, 1)
struct FMaterialCachedExpressionData {
    FMaterialCachedParameters Parameters; // 0x0
    TArray<UObject*> ReferencedTextures; // 0x150
    TArray<FMaterialFunctionInfo> FunctionInfos; // 0x160
    TArray<FMaterialParameterCollectionInfo> ParameterCollectionInfos; // 0x170
    TArray<UMaterialFunctionInterface*> DefaultLayers; // 0x180
    TArray<UMaterialFunctionInterface*> DefaultLayerBlends; // 0x190
    TArray<ULandscapeGrassType*> GrassTypes; // 0x1a0
    TArray<FName> DynamicParameterNames; // 0x1b0
    TArray<bool> QualityLevelsUsed; // 0x1c0
    uint8_t bHasRuntimeVirtualTextureOutput : 1; // 0x1d0
    uint8_t bHasSceneColor : 1; // 0x1d0
    uint8_t pad_bitfield_1d0_2 : 6;
    char pad_1d1[0x7];
}; // Size: 0x1d8
#pragma pack(pop)
