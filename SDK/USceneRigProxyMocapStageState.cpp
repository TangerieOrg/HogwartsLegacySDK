#include "USceneRigProxyActorState.hpp"
#include "USceneRigProxyMocapStageState.hpp"
USceneRigProxyMocapStageState* USceneRigProxyMocapStageState::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigProxyMocapStageState");
    return (USceneRigProxyMocapStageState*)res;
}
