#include "UCameraStackBehaviorCamera.hpp"
#include "UCameraStackBehaviorCameraLookAtOverride.hpp"
UCameraStackBehaviorCameraLookAtOverride* UCameraStackBehaviorCameraLookAtOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorCameraLookAtOverride");
    return (UCameraStackBehaviorCameraLookAtOverride*)res;
}
