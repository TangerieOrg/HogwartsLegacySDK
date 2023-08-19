#include "UCollisionGeometryVisualizationProperties.hpp"
#include "UMaterialInterface.hpp"
#include "UMultiSelectionTool.hpp"
#include "UPhysicsObjectToolPropertySet.hpp"
#include "UPreviewGeometry.hpp"
#include "USetCollisionGeometryTool.hpp"
#include "USetCollisionGeometryToolProperties.hpp"
USetCollisionGeometryTool* USetCollisionGeometryTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SetCollisionGeometryTool");
    return (USetCollisionGeometryTool*)res;
}
