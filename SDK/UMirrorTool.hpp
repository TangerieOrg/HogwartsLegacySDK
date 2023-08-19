#pragma once
#include <cstdint>
#include "UMultiSelectionTool.hpp"
class UMirrorToolProperties;
class UMirrorToolActionPropertySet;
class UMeshOpPreviewWithBackgroundCompute;
class UDynamicMeshReplacementChangeTarget;
class UConstructionPlaneMechanic;
#pragma pack(push, 1)
class UMirrorTool : public UMultiSelectionTool {
public:
    char pad_90[0x8];
    UMirrorToolProperties* Settings; // 0x98
    UMirrorToolActionPropertySet* ToolActions; // 0xa0
    TArray<UDynamicMeshReplacementChangeTarget*> MeshesToMirror; // 0xa8
    TArray<UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xb8
    char pad_c8[0x48];
    UConstructionPlaneMechanic* PlaneMechanic; // 0x110
    char pad_118[0x20];
    static UMirrorTool* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
