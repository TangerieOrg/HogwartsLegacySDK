#include "UMeshSelectionToolBuilder.hpp"
#include "UMeshSurfacePointToolBuilder.hpp"
UMeshSelectionToolBuilder* UMeshSelectionToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshSelectionToolBuilder");
    return (UMeshSelectionToolBuilder*)res;
}
