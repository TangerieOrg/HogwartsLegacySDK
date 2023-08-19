#include "USceneRigParameterDefinition.hpp"
#include "USceneRigParameterDefinition_Int.hpp"
USceneRigParameterDefinition_Int* USceneRigParameterDefinition_Int::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameterDefinition_Int");
    return (USceneRigParameterDefinition_Int*)res;
}
