#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorPitchFromTargetDistance.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackBehaviorPitchFromTargetDistance* UCameraStackBehaviorPitchFromTargetDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorPitchFromTargetDistance");
    return (UCameraStackBehaviorPitchFromTargetDistance*)res;
}
