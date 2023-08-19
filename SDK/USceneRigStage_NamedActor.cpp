#include "FSceneRigStage_Actor.hpp"
#include "USceneRigStage_NamedActor.hpp"
#include "USceneRigStage_NamedParameter.hpp"
USceneRigStage_NamedActor* USceneRigStage_NamedActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_NamedActor");
    return (USceneRigStage_NamedActor*)res;
}
