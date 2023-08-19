#include "FSceneActionActorFunctionReference.hpp"
#include "USceneAction_ActorFunction.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_ActorFunction* USceneAction_ActorFunction::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_ActorFunction");
    return (USceneAction_ActorFunction*)res;
}
