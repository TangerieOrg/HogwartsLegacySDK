#include "USceneRigCameraProxyActorState.hpp"
#include "USceneRigProxyActorState.hpp"
USceneRigCameraProxyActorState* USceneRigCameraProxyActorState::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigCameraProxyActorState");
    return (USceneRigCameraProxyActorState*)res;
}
