#include "UMeshSurfacePointToolBuilder.hpp"
#include "UMeshVertexSculptToolBuilder.hpp"
UMeshVertexSculptToolBuilder* UMeshVertexSculptToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshVertexSculptToolBuilder");
    return (UMeshVertexSculptToolBuilder*)res;
}
