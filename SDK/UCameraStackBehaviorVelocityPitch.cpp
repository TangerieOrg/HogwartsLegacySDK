#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorVelocityPitch.hpp"
#include "UCurveFloat.hpp"
UCameraStackBehaviorVelocityPitch* UCameraStackBehaviorVelocityPitch::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorVelocityPitch");
    return (UCameraStackBehaviorVelocityPitch*)res;
}
