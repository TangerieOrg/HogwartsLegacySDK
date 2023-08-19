#pragma once
#include <cstdint>
#include "UInteractiveTool.hpp"
class UCurveControlPointsMechanic;
class UConstructionPlaneMechanic;
class URevolveToolProperties;
class UNewMeshMaterialProperties;
class UMeshOpPreviewWithBackgroundCompute;
#pragma pack(push, 1)
class UDrawAndRevolveTool : public UInteractiveTool {
public:
    char pad_80[0x78];
    UCurveControlPointsMechanic* ControlPointsMechanic; // 0xf8
    UConstructionPlaneMechanic* PlaneMechanic; // 0x100
    URevolveToolProperties* Settings; // 0x108
    UNewMeshMaterialProperties* MaterialProperties; // 0x110
    UMeshOpPreviewWithBackgroundCompute* Preview; // 0x118
    static UDrawAndRevolveTool* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
