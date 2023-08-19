#include "ACameraActor.hpp"
#include "ASceneRigCamera.hpp"
#include "FAnimatedFloatPropertyDriver.hpp"
#include "FAnimatedIntegerPropertyDriver.hpp"
#include "FCameraLookatTrackingSettings.hpp"
#include "FSRCameraFocusSettings.hpp"
#include "FSRCameraPostProcessSettings.hpp"
#include "USkeletalMeshComponent.hpp"
ASceneRigCamera* ASceneRigCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigCamera");
    return (ASceneRigCamera*)res;
}
