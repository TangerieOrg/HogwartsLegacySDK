#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorCameraSpaceRotationLag.hpp"
UCameraStackBehaviorCameraSpaceRotationLag* UCameraStackBehaviorCameraSpaceRotationLag::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorCameraSpaceRotationLag");
    return (UCameraStackBehaviorCameraSpaceRotationLag*)res;
}
