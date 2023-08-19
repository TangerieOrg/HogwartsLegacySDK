#include "FVector2D.hpp"
#include "UCameraStackBehaviorFollowTargetRotationSpring.hpp"
#include "UCameraStackBehaviorFollowTargetRotationSpringMountSteering.hpp"
UCameraStackBehaviorFollowTargetRotationSpringMountSteering* UCameraStackBehaviorFollowTargetRotationSpringMountSteering::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackBehaviorFollowTargetRotationSpringMountSteering");
    return (UCameraStackBehaviorFollowTargetRotationSpringMountSteering*)res;
}
