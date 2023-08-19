#include "UObject.hpp"
#include "USceneRigParameterDefinition.hpp"
USceneRigParameterDefinition* USceneRigParameterDefinition::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameterDefinition");
    return (USceneRigParameterDefinition*)res;
}
