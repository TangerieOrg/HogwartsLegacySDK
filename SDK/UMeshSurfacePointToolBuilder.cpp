#include "UInteractiveToolBuilder.hpp"
#include "UMeshSurfacePointToolBuilder.hpp"
UMeshSurfacePointToolBuilder* UMeshSurfacePointToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.MeshSurfacePointToolBuilder");
    return (UMeshSurfacePointToolBuilder*)res;
}
