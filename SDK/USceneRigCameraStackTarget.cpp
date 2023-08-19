#include "UCameraStackTarget.hpp"
#include "USceneRigCameraStackTarget.hpp"
USceneRigCameraStackTarget* USceneRigCameraStackTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigCameraStackTarget");
    return (USceneRigCameraStackTarget*)res;
}
