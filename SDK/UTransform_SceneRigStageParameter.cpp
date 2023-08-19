#include "FSceneRigStage_TransformReference.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_SceneRigStageParameter.hpp"
UTransform_SceneRigStageParameter* UTransform_SceneRigStageParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Transform_SceneRigStageParameter");
    return (UTransform_SceneRigStageParameter*)res;
}
