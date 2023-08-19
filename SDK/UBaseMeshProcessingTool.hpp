#pragma once
#include <cstdint>
#include "USingleSelectionTool.hpp"
class UMeshOpPreviewWithBackgroundCompute;
#pragma pack(push, 1)
class UBaseMeshProcessingTool : public USingleSelectionTool {
public:
    char pad_88[0x28];
    UMeshOpPreviewWithBackgroundCompute* Preview; // 0xb0
    char pad_b8[0x348];
    static UBaseMeshProcessingTool* StaticClass();
}; // Size: 0x400
#pragma pack(pop)
