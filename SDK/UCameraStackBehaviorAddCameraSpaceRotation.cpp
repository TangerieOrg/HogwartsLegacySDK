#include "FRotator.hpp"
#include "UCameraStackBehaviorAddCameraSpaceRotation.hpp"
#include "UCameraStackBehaviorBlend.hpp"
UCameraStackBehaviorAddCameraSpaceRotation* UCameraStackBehaviorAddCameraSpaceRotation::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAddCameraSpaceRotation");
    return (UCameraStackBehaviorAddCameraSpaceRotation*)res;
}
