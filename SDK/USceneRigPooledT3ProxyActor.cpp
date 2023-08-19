#include "USceneRigPooledT3ProxyActor.hpp"
#include "USceneRigProxyActor.hpp"
USceneRigPooledT3ProxyActor* USceneRigPooledT3ProxyActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigPooledT3ProxyActor");
    return (USceneRigPooledT3ProxyActor*)res;
}
