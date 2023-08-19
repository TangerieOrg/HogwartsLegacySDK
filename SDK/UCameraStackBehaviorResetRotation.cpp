#include "FRotator.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorResetRotation.hpp"
#include "UCurveFloat.hpp"
UCameraStackBehaviorResetRotation* UCameraStackBehaviorResetRotation::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorResetRotation");
    return (UCameraStackBehaviorResetRotation*)res;
}
