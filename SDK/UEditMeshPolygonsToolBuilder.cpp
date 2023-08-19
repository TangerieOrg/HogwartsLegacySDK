#include "UEditMeshPolygonsToolBuilder.hpp"
#include "UMeshSurfacePointToolBuilder.hpp"
UEditMeshPolygonsToolBuilder* UEditMeshPolygonsToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditMeshPolygonsToolBuilder");
    return (UEditMeshPolygonsToolBuilder*)res;
}
