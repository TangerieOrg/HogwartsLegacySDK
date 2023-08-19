#include "FSceneRigStage_AnimationReference.hpp"
#include "UAnimationProvider.hpp"
#include "UAnimation_SceneRigStageParameter.hpp"
UAnimation_SceneRigStageParameter* UAnimation_SceneRigStageParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Animation_SceneRigStageParameter");
    return (UAnimation_SceneRigStageParameter*)res;
}
