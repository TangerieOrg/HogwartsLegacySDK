#include "FSceneRigActorMemberReference.hpp"
#include "UActorProvider.hpp"
#include "UActor_SceneRigActorMember.hpp"
#include "UClass.hpp"
UActor_SceneRigActorMember* UActor_SceneRigActorMember::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Actor_SceneRigActorMember");
    return (UActor_SceneRigActorMember*)res;
}
