#include "UCollisionGeometryVisualizationProperties.hpp"
#include "UExtractCollisionGeometryTool.hpp"
#include "UPhysicsObjectToolPropertySet.hpp"
#include "UPreviewGeometry.hpp"
#include "UPreviewMesh.hpp"
#include "USingleSelectionTool.hpp"
UExtractCollisionGeometryTool* UExtractCollisionGeometryTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ExtractCollisionGeometryTool");
    return (UExtractCollisionGeometryTool*)res;
}
