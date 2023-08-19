#include "ESceneRigProxyActor_PlatformHide.hpp"
#include "FSceneRigStageRole.hpp"
#include "UActorProvider.hpp"
#include "USceneRigProxyActor.hpp"
#include "UTimeRigElement.hpp"
USceneRigProxyActor* USceneRigProxyActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigProxyActor");
    return (USceneRigProxyActor*)res;
}
