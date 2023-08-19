#include "FSceneRigStage_FloatReference.hpp"
#include "UFloatProvider.hpp"
#include "UFloat_SceneRigStageParameter.hpp"
UFloat_SceneRigStageParameter* UFloat_SceneRigStageParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Float_SceneRigStageParameter");
    return (UFloat_SceneRigStageParameter*)res;
}
