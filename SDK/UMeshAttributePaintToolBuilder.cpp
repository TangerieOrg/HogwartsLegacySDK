#include "UMeshAttributePaintToolBuilder.hpp"
#include "UMeshSurfacePointToolBuilder.hpp"
UMeshAttributePaintToolBuilder* UMeshAttributePaintToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshAttributePaintToolBuilder");
    return (UMeshAttributePaintToolBuilder*)res;
}
