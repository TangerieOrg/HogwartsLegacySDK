#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorRotationLag.hpp"
UCameraStackBehaviorRotationLag* UCameraStackBehaviorRotationLag::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorRotationLag");
    return (UCameraStackBehaviorRotationLag*)res;
}
