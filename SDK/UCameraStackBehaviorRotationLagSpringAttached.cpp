#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorRotationLagSpringAttached.hpp"
UCameraStackBehaviorRotationLagSpringAttached* UCameraStackBehaviorRotationLagSpringAttached::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorRotationLagSpringAttached");
    return (UCameraStackBehaviorRotationLagSpringAttached*)res;
}
