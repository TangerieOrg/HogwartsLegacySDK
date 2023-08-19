#include "USceneActionState_MimicActor.hpp"
#include "USceneRigObjectActionState.hpp"
#include "USkeletalMeshComponent.hpp"
USceneActionState_MimicActor* USceneActionState_MimicActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_MimicActor");
    return (USceneActionState_MimicActor*)res;
}
