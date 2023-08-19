#include "FSceneRigStage_Actor.hpp"
#include "USceneRig.hpp"
#include "USceneRig_CustomActor.hpp"
USceneRig_CustomActor* USceneRig_CustomActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRig_CustomActor");
    return (USceneRig_CustomActor*)res;
}
