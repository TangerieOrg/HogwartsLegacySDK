#include "UDeformMeshPolygonsTool.hpp"
#include "UDeformMeshPolygonsTransformProperties.hpp"
#include "UMeshSurfacePointTool.hpp"
#include "USimpleDynamicMeshComponent.hpp"
UDeformMeshPolygonsTool* UDeformMeshPolygonsTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DeformMeshPolygonsTool");
    return (UDeformMeshPolygonsTool*)res;
}
