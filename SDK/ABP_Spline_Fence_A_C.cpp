#include "ABP_HM_Spline_Parent_C.hpp"
#include "ABP_Spline_Fence_A_C.hpp"
ABP_Spline_Fence_A_C* ABP_Spline_Fence_A_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hamlets/Hamlet_Props/Blueprints/BP_Spline_Fence_A.BP_Spline_Fence_A_C");
    return (ABP_Spline_Fence_A_C*)res;
}
