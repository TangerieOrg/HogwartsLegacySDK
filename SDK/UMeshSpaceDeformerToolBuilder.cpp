#include "UMeshSpaceDeformerToolBuilder.hpp"
#include "UMeshSurfacePointToolBuilder.hpp"
UMeshSpaceDeformerToolBuilder* UMeshSpaceDeformerToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshSpaceDeformerToolBuilder");
    return (UMeshSpaceDeformerToolBuilder*)res;
}
