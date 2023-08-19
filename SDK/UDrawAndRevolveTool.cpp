#include "UConstructionPlaneMechanic.hpp"
#include "UCurveControlPointsMechanic.hpp"
#include "UDrawAndRevolveTool.hpp"
#include "UInteractiveTool.hpp"
#include "UMeshOpPreviewWithBackgroundCompute.hpp"
#include "UNewMeshMaterialProperties.hpp"
#include "URevolveToolProperties.hpp"
UDrawAndRevolveTool* UDrawAndRevolveTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DrawAndRevolveTool");
    return (UDrawAndRevolveTool*)res;
}
