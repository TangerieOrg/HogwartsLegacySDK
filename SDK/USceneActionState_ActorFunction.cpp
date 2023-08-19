#include "USceneActionState_ActorFunction.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_ActorFunction* USceneActionState_ActorFunction::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_ActorFunction");
    return (USceneActionState_ActorFunction*)res;
}
