#pragma once
#include <cstdint>
#include "UBaseMeshProcessingTool.hpp"
class USmoothMeshToolProperties;
class UIterativeSmoothProperties;
class UDiffusionSmoothProperties;
class UImplicitSmoothProperties;
class USmoothWeightMapSetProperties;
#pragma pack(push, 1)
class USmoothMeshTool : public UBaseMeshProcessingTool {
public:
    USmoothMeshToolProperties* SmoothProperties; // 0x400
    UIterativeSmoothProperties* IterativeProperties; // 0x408
    UDiffusionSmoothProperties* DiffusionProperties; // 0x410
    UImplicitSmoothProperties* ImplicitProperties; // 0x418
    USmoothWeightMapSetProperties* WeightMapProperties; // 0x420
    char pad_428[0x8];
    static USmoothMeshTool* StaticClass();
}; // Size: 0x430
#pragma pack(pop)
