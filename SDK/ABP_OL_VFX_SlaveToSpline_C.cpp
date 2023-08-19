#include "ABP_OL_VFX_SlaveToSpline_C.hpp"
#include "ASlaveToSplineActor.hpp"
ABP_OL_VFX_SlaveToSpline_C* ABP_OL_VFX_SlaveToSpline_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/VFX/Overland/BP_OL_VFX_SlaveToSpline.BP_OL_VFX_SlaveToSpline_C");
    return (ABP_OL_VFX_SlaveToSpline_C*)res;
}
