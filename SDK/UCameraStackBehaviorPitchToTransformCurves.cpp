#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorPitchToTransformCurves.hpp"
#include "UCameraStackTransformCurveData.hpp"
UCameraStackBehaviorPitchToTransformCurves* UCameraStackBehaviorPitchToTransformCurves::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorPitchToTransformCurves");
    return (UCameraStackBehaviorPitchToTransformCurves*)res;
}
