#include "UEditUVIslandsToolBuilder.hpp"
#include "UMeshSurfacePointToolBuilder.hpp"
UEditUVIslandsToolBuilder* UEditUVIslandsToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditUVIslandsToolBuilder");
    return (UEditUVIslandsToolBuilder*)res;
}
