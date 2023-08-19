#include "ECameraStackLookAtStrength.hpp"
#include "UActorProvider.hpp"
#include "USceneAction_CameraLookAtTarget.hpp"
#include "USceneRigActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_CameraLookAtTarget* USceneAction_CameraLookAtTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_CameraLookAtTarget");
    return (USceneAction_CameraLookAtTarget*)res;
}
