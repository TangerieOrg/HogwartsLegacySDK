#include "FAnimNode_AnimDynamics.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_LinkedInputPose.hpp"
#include "FAnimNode_Root.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UABP_VenomousTencula_Dynamics_C.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
UABP_VenomousTencula_Dynamics_C* UABP_VenomousTencula_Dynamics_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/RiggedObjects/Characters/Creatures/Plants/VenomousTentacula/ABP_VenomousTencula_Dynamics.ABP_VenomousTencula_Dynamics_C");
    return (UABP_VenomousTencula_Dynamics_C*)res;
}
void UABP_VenomousTencula_Dynamics_C::AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Creatures/Plants/VenomousTentacula/ABP_VenomousTencula_Dynamics.ABP_VenomousTencula_Dynamics_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink InPose; // 0x0
        FPoseLink AnimGraph; // 0x10
    }; // Size: 0x20
    Params_AnimGraph params{};
    params.InPose = (FPoseLink)InPose;
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
void UABP_VenomousTencula_Dynamics_C::ExecuteUbergraph_ABP_VenomousTencula_Dynamics(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Creatures/Plants/VenomousTentacula/ABP_VenomousTencula_Dynamics.ABP_VenomousTencula_Dynamics_C.ExecuteUbergraph_ABP_VenomousTencula_Dynamics"));
    struct Params_ExecuteUbergraph_ABP_VenomousTencula_Dynamics {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_ABP_VenomousTencula_Dynamics params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
