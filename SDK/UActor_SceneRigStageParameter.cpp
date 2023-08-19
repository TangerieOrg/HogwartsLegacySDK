#include "FSceneRigStage_ActorReference.hpp"
#include "UActorProvider.hpp"
#include "UActor_SceneRigStageParameter.hpp"
UActor_SceneRigStageParameter* UActor_SceneRigStageParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Actor_SceneRigStageParameter");
    return (UActor_SceneRigStageParameter*)res;
}
