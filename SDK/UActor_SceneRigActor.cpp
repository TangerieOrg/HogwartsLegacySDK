#include "UActorProvider.hpp"
#include "UActor_SceneRigActor.hpp"
UActor_SceneRigActor* UActor_SceneRigActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Actor_SceneRigActor");
    return (UActor_SceneRigActor*)res;
}
