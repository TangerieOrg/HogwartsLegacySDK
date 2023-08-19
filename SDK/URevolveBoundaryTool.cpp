#include "UConstructionPlaneMechanic.hpp"
#include "UMeshBoundaryToolBase.hpp"
#include "UMeshOpPreviewWithBackgroundCompute.hpp"
#include "UNewMeshMaterialProperties.hpp"
#include "URevolveBoundaryTool.hpp"
#include "URevolveBoundaryToolProperties.hpp"
URevolveBoundaryTool* URevolveBoundaryTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.RevolveBoundaryTool");
    return (URevolveBoundaryTool*)res;
}
