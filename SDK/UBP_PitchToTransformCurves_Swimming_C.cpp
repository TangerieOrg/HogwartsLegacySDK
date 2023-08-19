#include "UBP_PitchToTransformCurves_Swimming_C.hpp"
#include "UCameraStackBehaviorPitchToTransformCurves.hpp"
UBP_PitchToTransformCurves_Swimming_C* UBP_PitchToTransformCurves_Swimming_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_PitchToTransformCurves_Swimming.BP_PitchToTransformCurves_Swimming_C");
    return (UBP_PitchToTransformCurves_Swimming_C*)res;
}
