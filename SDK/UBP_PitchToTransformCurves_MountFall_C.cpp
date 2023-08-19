#include "UBP_PitchToTransformCurves_MountFall_C.hpp"
#include "UCameraStackBehaviorPitchToTransformCurves.hpp"
UBP_PitchToTransformCurves_MountFall_C* UBP_PitchToTransformCurves_MountFall_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_PitchToTransformCurves_MountFall.BP_PitchToTransformCurves_MountFall_C");
    return (UBP_PitchToTransformCurves_MountFall_C*)res;
}
