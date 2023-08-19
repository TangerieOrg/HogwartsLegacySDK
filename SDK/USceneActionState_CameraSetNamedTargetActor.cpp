#include "USceneActionState_CameraSetNamedTargetActor.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_CameraSetNamedTargetActor* USceneActionState_CameraSetNamedTargetActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_CameraSetNamedTargetActor");
    return (USceneActionState_CameraSetNamedTargetActor*)res;
}
