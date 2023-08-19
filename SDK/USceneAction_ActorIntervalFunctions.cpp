#include "FSceneActionActorFunctionReference.hpp"
#include "FSceneActionActorTickFunctionReference.hpp"
#include "USceneAction_ActorIntervalFunctions.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_ActorIntervalFunctions* USceneAction_ActorIntervalFunctions::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_ActorIntervalFunctions");
    return (USceneAction_ActorIntervalFunctions*)res;
}
