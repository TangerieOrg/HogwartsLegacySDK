#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorSlopeMovementPitch.hpp"
#include "UCurveFloat.hpp"
UCameraStackBehaviorSlopeMovementPitch* UCameraStackBehaviorSlopeMovementPitch::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorSlopeMovementPitch");
    return (UCameraStackBehaviorSlopeMovementPitch*)res;
}
