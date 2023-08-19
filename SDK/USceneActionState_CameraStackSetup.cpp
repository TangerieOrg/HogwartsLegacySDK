#include "USceneActionState_CameraStackSetup.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_CameraStackSetup* USceneActionState_CameraStackSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_CameraStackSetup");
    return (USceneActionState_CameraStackSetup*)res;
}
