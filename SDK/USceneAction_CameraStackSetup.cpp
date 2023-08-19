#include "UCameraStackSettings.hpp"
#include "USceneAction_CameraStackSetup.hpp"
#include "USceneRigObjectActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_CameraStackSetup* USceneAction_CameraStackSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_CameraStackSetup");
    return (USceneAction_CameraStackSetup*)res;
}
