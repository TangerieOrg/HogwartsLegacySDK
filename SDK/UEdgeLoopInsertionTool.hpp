#pragma once
#include <cstdint>
#include "USingleSelectionTool.hpp"
class UEdgeLoopInsertionProperties;
class UMeshOpPreviewWithBackgroundCompute;
#pragma pack(push, 1)
class UEdgeLoopInsertionTool : public USingleSelectionTool {
public:
    char pad_88[0x10];
    UEdgeLoopInsertionProperties* Settings; // 0x98
    char pad_a0[0x260];
    UMeshOpPreviewWithBackgroundCompute* Preview; // 0x300
    char pad_308[0x1f8];
    static UEdgeLoopInsertionTool* StaticClass();
}; // Size: 0x500
#pragma pack(pop)
