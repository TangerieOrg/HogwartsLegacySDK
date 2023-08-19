#include "UDeformMeshPolygonsToolBuilder.hpp"
#include "UMeshSurfacePointToolBuilder.hpp"
UDeformMeshPolygonsToolBuilder* UDeformMeshPolygonsToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DeformMeshPolygonsToolBuilder");
    return (UDeformMeshPolygonsToolBuilder*)res;
}
