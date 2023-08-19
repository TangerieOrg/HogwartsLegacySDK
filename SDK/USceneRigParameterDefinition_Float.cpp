#include "UFloatProvider.hpp"
#include "USceneRigParameterDefinition.hpp"
#include "USceneRigParameterDefinition_Float.hpp"
USceneRigParameterDefinition_Float* USceneRigParameterDefinition_Float::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameterDefinition_Float");
    return (USceneRigParameterDefinition_Float*)res;
}
