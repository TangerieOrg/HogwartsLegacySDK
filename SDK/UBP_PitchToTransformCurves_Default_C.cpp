#include "UBP_PitchToTransformCurves_Default_C.hpp"
#include "UCameraStackBehaviorPitchToTransformCurves.hpp"
UBP_PitchToTransformCurves_Default_C* UBP_PitchToTransformCurves_Default_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_PitchToTransformCurves_Default.BP_PitchToTransformCurves_Default_C");
    return (UBP_PitchToTransformCurves_Default_C*)res;
}
