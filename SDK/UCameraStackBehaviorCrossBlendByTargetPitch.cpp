#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorCrossBlendByTargetPitch.hpp"
#include "UCameraStackBehaviorMultiCrossBlendStandalone.hpp"
UCameraStackBehaviorCrossBlendByTargetPitch* UCameraStackBehaviorCrossBlendByTargetPitch::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorCrossBlendByTargetPitch");
    return (UCameraStackBehaviorCrossBlendByTargetPitch*)res;
}
