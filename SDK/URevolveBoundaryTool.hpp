#pragma once
#include <cstdint>
#include "UMeshBoundaryToolBase.hpp"
class URevolveBoundaryToolProperties;
class UNewMeshMaterialProperties;
class UConstructionPlaneMechanic;
class UMeshOpPreviewWithBackgroundCompute;
#pragma pack(push, 1)
class URevolveBoundaryTool : public UMeshBoundaryToolBase {
public:
    char pad_150[0x10];
    URevolveBoundaryToolProperties* Settings; // 0x160
    UNewMeshMaterialProperties* MaterialProperties; // 0x168
    UConstructionPlaneMechanic* PlaneMechanic; // 0x170
    UMeshOpPreviewWithBackgroundCompute* Preview; // 0x178
    char pad_180[0x30];
    static URevolveBoundaryTool* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
