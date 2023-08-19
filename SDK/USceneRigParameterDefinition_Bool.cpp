#include "USceneRigParameterDefinition.hpp"
#include "USceneRigParameterDefinition_Bool.hpp"
USceneRigParameterDefinition_Bool* USceneRigParameterDefinition_Bool::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameterDefinition_Bool");
    return (USceneRigParameterDefinition_Bool*)res;
}
