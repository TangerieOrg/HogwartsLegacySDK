#pragma once
#include <cstdint>
#include "UMultiSelectionTool.hpp"
class UEditNormalsToolProperties;
class UEditNormalsAdvancedProperties;
class UMeshOpPreviewWithBackgroundCompute;
#pragma pack(push, 1)
class UEditNormalsTool : public UMultiSelectionTool {
public:
    UEditNormalsToolProperties* BasicProperties; // 0x90
    UEditNormalsAdvancedProperties* AdvancedProperties; // 0x98
    TArray<UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xa0
    char pad_b0[0x50];
    static UEditNormalsTool* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
