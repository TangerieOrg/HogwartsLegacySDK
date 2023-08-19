#include "EManagedCameraPriority.hpp"
#include "ESceneAction_CameraResetType.hpp"
#include "FCameraActionTransitionSettings.hpp"
#include "UActorProvider.hpp"
#include "UFloatProvider.hpp"
#include "USceneAction_Camera.hpp"
#include "USceneRigActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_Camera* USceneAction_Camera::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_Camera");
    return (USceneAction_Camera*)res;
}
