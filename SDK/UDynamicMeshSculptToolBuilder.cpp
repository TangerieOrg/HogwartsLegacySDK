#include "UDynamicMeshSculptToolBuilder.hpp"
#include "UMeshSurfacePointToolBuilder.hpp"
UDynamicMeshSculptToolBuilder* UDynamicMeshSculptToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DynamicMeshSculptToolBuilder");
    return (UDynamicMeshSculptToolBuilder*)res;
}
