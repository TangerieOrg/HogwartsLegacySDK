#include "UCollectSurfacePathMechanic.hpp"
#include "UConstructionPlaneMechanic.hpp"
#include "UDrawPolyPathExtrudeProperties.hpp"
#include "UDrawPolyPathProperties.hpp"
#include "UDrawPolyPathTool.hpp"
#include "UInteractiveTool.hpp"
#include "UNewMeshMaterialProperties.hpp"
#include "UPlaneDistanceFromHitMechanic.hpp"
#include "UPolyEditPreviewMesh.hpp"
#include "USpatialCurveDistanceMechanic.hpp"
UDrawPolyPathTool* UDrawPolyPathTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DrawPolyPathTool");
    return (UDrawPolyPathTool*)res;
}
