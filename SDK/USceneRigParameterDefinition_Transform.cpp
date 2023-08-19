#include "USceneRigParameterDefinition.hpp"
#include "USceneRigParameterDefinition_Transform.hpp"
#include "UTransformProvider.hpp"
USceneRigParameterDefinition_Transform* USceneRigParameterDefinition_Transform::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameterDefinition_Transform");
    return (USceneRigParameterDefinition_Transform*)res;
}
