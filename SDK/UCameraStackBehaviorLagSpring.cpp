#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorLagSpring.hpp"
UCameraStackBehaviorLagSpring* UCameraStackBehaviorLagSpring::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorLagSpring");
    return (UCameraStackBehaviorLagSpring*)res;
}
