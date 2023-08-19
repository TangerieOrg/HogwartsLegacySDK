#pragma once
#include <cstdint>
#include "UMultiSelectionTool.hpp"
class UBakeMeshAttributeMapsToolProperties;
class UBakedNormalMapToolProperties;
class UBakedOcclusionMapToolProperties;
class UMaterialInstanceDynamic;
class UTexture2D;
class UBakedCurvatureMapToolProperties;
class UBakedOcclusionMapVisualizationProperties;
class UBakedTexture2DImageProperties;
#pragma pack(push, 1)
class UBakeMeshAttributeMapsTool : public UMultiSelectionTool {
public:
    UBakeMeshAttributeMapsToolProperties* Settings; // 0x90
    UBakedNormalMapToolProperties* NormalMapProps; // 0x98
    UBakedOcclusionMapToolProperties* OcclusionMapProps; // 0xa0
    UBakedCurvatureMapToolProperties* CurvatureMapProps; // 0xa8
    UBakedTexture2DImageProperties* Texture2DProps; // 0xb0
    UBakedOcclusionMapVisualizationProperties* VisualizationProps; // 0xb8
    char pad_c0[0x10];
    UMaterialInstanceDynamic* PreviewMaterial; // 0xd0
    UMaterialInstanceDynamic* BentNormalPreviewMaterial; // 0xd8
    char pad_e0[0x360];
    UTexture2D* CachedNormalMap; // 0x440
    char pad_448[0x28];
    UTexture2D* CachedOcclusionMap; // 0x470
    UTexture2D* CachedBentNormalMap; // 0x478
    char pad_480[0x28];
    UTexture2D* CachedCurvatureMap; // 0x4a8
    char pad_4b0[0x10];
    UTexture2D* CachedMeshPropertyMap; // 0x4c0
    char pad_4c8[0x10];
    UTexture2D* CachedTexture2DImageMap; // 0x4d8
    UTexture2D* EmptyNormalMap; // 0x4e0
    UTexture2D* EmptyColorMapBlack; // 0x4e8
    UTexture2D* EmptyColorMapWhite; // 0x4f0
    static UBakeMeshAttributeMapsTool* StaticClass();
}; // Size: 0x4f8
#pragma pack(pop)
