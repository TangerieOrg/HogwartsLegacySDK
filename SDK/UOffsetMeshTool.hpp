#pragma once
#include <cstdint>
#include "UBaseMeshProcessingTool.hpp"
class UOffsetMeshToolProperties;
class UIterativeOffsetProperties;
class UImplicitOffsetProperties;
class UOffsetWeightMapSetProperties;
#pragma pack(push, 1)
class UOffsetMeshTool : public UBaseMeshProcessingTool {
public:
    UOffsetMeshToolProperties* OffsetProperties; // 0x400
    UIterativeOffsetProperties* IterativeProperties; // 0x408
    UImplicitOffsetProperties* ImplicitProperties; // 0x410
    UOffsetWeightMapSetProperties* WeightMapProperties; // 0x418
    static UOffsetMeshTool* StaticClass();
}; // Size: 0x420
#pragma pack(pop)
