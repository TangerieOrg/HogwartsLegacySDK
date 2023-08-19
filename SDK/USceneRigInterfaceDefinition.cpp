#include "UObject.hpp"
#include "USceneRigInterfaceDefinition.hpp"
#include "USceneRigParameterDefinition.hpp"
USceneRigInterfaceDefinition* USceneRigInterfaceDefinition::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigInterfaceDefinition");
    return (USceneRigInterfaceDefinition*)res;
}
