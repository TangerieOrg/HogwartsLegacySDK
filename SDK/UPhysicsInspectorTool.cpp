#include "UCollisionGeometryVisualizationProperties.hpp"
#include "UMaterialInterface.hpp"
#include "UMultiSelectionTool.hpp"
#include "UPhysicsInspectorTool.hpp"
#include "UPhysicsObjectToolPropertySet.hpp"
#include "UPreviewGeometry.hpp"
UPhysicsInspectorTool* UPhysicsInspectorTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PhysicsInspectorTool");
    return (UPhysicsInspectorTool*)res;
}
