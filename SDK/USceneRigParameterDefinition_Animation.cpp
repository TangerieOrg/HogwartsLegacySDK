#include "UAnimationProvider.hpp"
#include "USceneRigParameterDefinition.hpp"
#include "USceneRigParameterDefinition_Animation.hpp"
USceneRigParameterDefinition_Animation* USceneRigParameterDefinition_Animation::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameterDefinition_Animation");
    return (USceneRigParameterDefinition_Animation*)res;
}
