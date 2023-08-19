#include "FTransform.hpp"
#include "UActorProvider.hpp"
#include "USceneAction_MimicActor.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_MimicActor* USceneAction_MimicActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_MimicActor");
    return (USceneAction_MimicActor*)res;
}
