#include "UAnimationProvider.hpp"
#include "USceneRigStage_AnimationValue.hpp"
#include "USceneRigStage_ParameterValue.hpp"
USceneRigStage_AnimationValue* USceneRigStage_AnimationValue::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_AnimationValue");
    return (USceneRigStage_AnimationValue*)res;
}
