#include "UActorProvider.hpp"
#include "UActor_SceneRigParentProxyActor.hpp"
UActor_SceneRigParentProxyActor* UActor_SceneRigParentProxyActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Actor_SceneRigParentProxyActor");
    return (UActor_SceneRigParentProxyActor*)res;
}
