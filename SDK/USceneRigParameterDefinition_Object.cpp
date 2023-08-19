#include "UObjectProvider.hpp"
#include "USceneRigParameterDefinition.hpp"
#include "USceneRigParameterDefinition_Object.hpp"
USceneRigParameterDefinition_Object* USceneRigParameterDefinition_Object::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameterDefinition_Object");
    return (USceneRigParameterDefinition_Object*)res;
}
