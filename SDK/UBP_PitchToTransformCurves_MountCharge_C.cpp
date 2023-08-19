#include "UBP_PitchToTransformCurves_MountCharge_C.hpp"
#include "UCameraStackBehaviorPitchToTransformCurves.hpp"
UBP_PitchToTransformCurves_MountCharge_C* UBP_PitchToTransformCurves_MountCharge_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_PitchToTransformCurves_MountCharge.BP_PitchToTransformCurves_MountCharge_C");
    return (UBP_PitchToTransformCurves_MountCharge_C*)res;
}
