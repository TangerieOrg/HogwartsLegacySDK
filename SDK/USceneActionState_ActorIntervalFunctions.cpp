#include "USceneActionState_ActorIntervalFunctions.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_ActorIntervalFunctions* USceneActionState_ActorIntervalFunctions::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_ActorIntervalFunctions");
    return (USceneActionState_ActorIntervalFunctions*)res;
}
