#pragma once
#include <cstdint>
#include "UMultiSelectionTool.hpp"
class URemoveOccludedTrianglesToolProperties;
class UPreviewMesh;
class URemoveOccludedTrianglesAdvancedProperties;
class UMeshOpPreviewWithBackgroundCompute;
#pragma pack(push, 1)
class URemoveOccludedTrianglesTool : public UMultiSelectionTool {
public:
    URemoveOccludedTrianglesToolProperties* BasicProperties; // 0x90
    URemoveOccludedTrianglesAdvancedProperties* AdvancedProperties; // 0x98
    TArray<UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xa0
    TArray<UPreviewMesh*> PreviewCopies; // 0xb0
    char pad_c0[0x90];
    static URemoveOccludedTrianglesTool* StaticClass();
}; // Size: 0x150
#pragma pack(pop)
