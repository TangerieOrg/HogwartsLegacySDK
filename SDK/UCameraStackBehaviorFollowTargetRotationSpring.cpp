#include "FVector2D.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorFollowTargetRotationSpring.hpp"
UCameraStackBehaviorFollowTargetRotationSpring* UCameraStackBehaviorFollowTargetRotationSpring::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorFollowTargetRotationSpring");
    return (UCameraStackBehaviorFollowTargetRotationSpring*)res;
}
