#include "UActorProvider.hpp"
#include "USceneAction_CameraSetNamedTargetActor.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_CameraSetNamedTargetActor* USceneAction_CameraSetNamedTargetActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_CameraSetNamedTargetActor");
    return (USceneAction_CameraSetNamedTargetActor*)res;
}
