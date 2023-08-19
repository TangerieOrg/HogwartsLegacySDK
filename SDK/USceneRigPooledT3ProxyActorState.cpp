#include "USceneRigPooledT3ProxyActorState.hpp"
#include "USceneRigProxyActorState.hpp"
USceneRigPooledT3ProxyActorState* USceneRigPooledT3ProxyActorState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigPooledT3ProxyActorState");
    return (USceneRigPooledT3ProxyActorState*)res;
}
