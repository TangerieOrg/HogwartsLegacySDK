#include "UInteractiveToolBuilder.hpp"
#include "UPhysicsInspectorToolBuilder.hpp"
UPhysicsInspectorToolBuilder* UPhysicsInspectorToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PhysicsInspectorToolBuilder");
    return (UPhysicsInspectorToolBuilder*)res;
}
