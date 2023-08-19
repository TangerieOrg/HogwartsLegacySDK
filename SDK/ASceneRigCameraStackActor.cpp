#include "ACameraStackActor.hpp"
#include "ASceneRigCameraStackActor.hpp"
#include "FAnimatedFloatPropertyDriver.hpp"
#include "FAnimatedIntegerPropertyDriver.hpp"
#include "FSRCameraFocusSettings.hpp"
#include "FSRCameraPostProcessSettings.hpp"
#include "USkeletalMeshComponent.hpp"
ASceneRigCameraStackActor* ASceneRigCameraStackActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigCameraStackActor");
    return (ASceneRigCameraStackActor*)res;
}
