#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorTargetPitchToPitch.hpp"
UCameraStackBehaviorTargetPitchToPitch* UCameraStackBehaviorTargetPitchToPitch::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorTargetPitchToPitch");
    return (UCameraStackBehaviorTargetPitchToPitch*)res;
}
