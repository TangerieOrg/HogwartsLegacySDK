#pragma once
#include <cstdint>
#include "USingleSelectionTool.hpp"
class UGroupEdgeInsertionProperties;
class UMeshOpPreviewWithBackgroundCompute;
#pragma pack(push, 1)
class UGroupEdgeInsertionTool : public USingleSelectionTool {
public:
    char pad_88[0x10];
    UGroupEdgeInsertionProperties* Settings; // 0x98
    UMeshOpPreviewWithBackgroundCompute* Preview; // 0xa0
    char pad_a8[0x4a8];
    static UGroupEdgeInsertionTool* StaticClass();
}; // Size: 0x550
#pragma pack(pop)
