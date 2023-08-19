#include "UCameraStackBehaviorCrossBlendByCrouchingPose.hpp"
#include "UCameraStackBehaviorMultiCrossBlendStandalone.hpp"
UCameraStackBehaviorCrossBlendByCrouchingPose* UCameraStackBehaviorCrossBlendByCrouchingPose::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackBehaviorCrossBlendByCrouchingPose");
    return (UCameraStackBehaviorCrossBlendByCrouchingPose*)res;
}
