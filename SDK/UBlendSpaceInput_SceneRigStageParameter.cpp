#include "FSceneRigStage_FloatReference.hpp"
#include "UBlendSpaceInputProvider.hpp"
#include "UBlendSpaceInput_SceneRigStageParameter.hpp"
UBlendSpaceInput_SceneRigStageParameter* UBlendSpaceInput_SceneRigStageParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.BlendSpaceInput_SceneRigStageParameter");
    return (UBlendSpaceInput_SceneRigStageParameter*)res;
}
