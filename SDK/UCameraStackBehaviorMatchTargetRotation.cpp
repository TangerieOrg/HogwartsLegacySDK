#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorMatchTargetRotation.hpp"
UCameraStackBehaviorMatchTargetRotation* UCameraStackBehaviorMatchTargetRotation::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorMatchTargetRotation");
    return (UCameraStackBehaviorMatchTargetRotation*)res;
}
