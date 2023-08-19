#include "UMeshSurfacePointTool.hpp"
#include "USingleSelectionTool.hpp"
UMeshSurfacePointTool* UMeshSurfacePointTool::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.MeshSurfacePointTool");
    return (UMeshSurfacePointTool*)res;
}
