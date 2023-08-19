#include "UActorProvider.hpp"
#include "UActor_SceneRigProxyActor.hpp"
#include "USceneRigProxyActor.hpp"
UActor_SceneRigProxyActor* UActor_SceneRigProxyActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Actor_SceneRigProxyActor");
    return (UActor_SceneRigProxyActor*)res;
}
