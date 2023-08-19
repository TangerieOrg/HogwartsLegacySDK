#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorLagSpringAttached.hpp"
UCameraStackBehaviorLagSpringAttached* UCameraStackBehaviorLagSpringAttached::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorLagSpringAttached");
    return (UCameraStackBehaviorLagSpringAttached*)res;
}
