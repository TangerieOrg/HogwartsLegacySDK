#include "USceneRigProxyActorState.hpp"
#include "UTimeRigElementState.hpp"
USceneRigProxyActorState* USceneRigProxyActorState::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigProxyActorState");
    return (USceneRigProxyActorState*)res;
}
