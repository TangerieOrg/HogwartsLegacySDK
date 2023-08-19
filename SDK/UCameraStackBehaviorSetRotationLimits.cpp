#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorSetRotationLimits.hpp"
UCameraStackBehaviorSetRotationLimits* UCameraStackBehaviorSetRotationLimits::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorSetRotationLimits");
    return (UCameraStackBehaviorSetRotationLimits*)res;
}
