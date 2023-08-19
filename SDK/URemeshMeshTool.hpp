#pragma once
#include <cstdint>
#include "UMultiSelectionTool.hpp"
class URemeshMeshToolProperties;
class UMeshStatisticsProperties;
class UMeshOpPreviewWithBackgroundCompute;
#pragma pack(push, 1)
class URemeshMeshTool : public UMultiSelectionTool {
public:
    char pad_90[0x8];
    URemeshMeshToolProperties* BasicProperties; // 0x98
    UMeshStatisticsProperties* MeshStatisticsProperties; // 0xa0
    UMeshOpPreviewWithBackgroundCompute* Preview; // 0xa8
    char pad_b0[0x38];
    static URemeshMeshTool* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
