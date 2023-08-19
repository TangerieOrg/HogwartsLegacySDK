#include "ACameraStackLookAtTargetActor.hpp"
#include "USceneActionState_CameraLookAtTarget.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_CameraLookAtTarget* USceneActionState_CameraLookAtTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_CameraLookAtTarget");
    return (USceneActionState_CameraLookAtTarget*)res;
}
