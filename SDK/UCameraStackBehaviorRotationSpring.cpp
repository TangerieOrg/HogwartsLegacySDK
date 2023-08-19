#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorRotationSpring.hpp"
UCameraStackBehaviorRotationSpring* UCameraStackBehaviorRotationSpring::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorRotationSpring");
    return (UCameraStackBehaviorRotationSpring*)res;
}
