#include "FSceneRigStageActorPlacement.hpp"
#include "UObject.hpp"
#include "USceneRigStageInterface.hpp"
#include "USceneRigStage_NamedParameter.hpp"
USceneRigStageInterface* USceneRigStageInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStageInterface");
    return (USceneRigStageInterface*)res;
}
