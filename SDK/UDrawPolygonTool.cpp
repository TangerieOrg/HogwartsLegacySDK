#include "UDrawPolygonTool.hpp"
#include "UDrawPolygonToolSnapProperties.hpp"
#include "UDrawPolygonToolStandardProperties.hpp"
#include "UInteractiveTool.hpp"
#include "UNewMeshMaterialProperties.hpp"
#include "UPlaneDistanceFromHitMechanic.hpp"
#include "UPreviewMesh.hpp"
#include "UTransformGizmo.hpp"
#include "UTransformProxy.hpp"
UDrawPolygonTool* UDrawPolygonTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DrawPolygonTool");
    return (UDrawPolygonTool*)res;
}
