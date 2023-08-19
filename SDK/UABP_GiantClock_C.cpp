#include "AActor.hpp"
#include "ABP_Clocktower_C.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UABP_GiantClock_C.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
UABP_GiantClock_C* UABP_GiantClock_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/Animation/Environment/Hogwarts/HW_CT_GiantClock/ABP_GiantClock.ABP_GiantClock_C");
    return (UABP_GiantClock_C*)res;
}
void UABP_GiantClock_C::AnimGraph(FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Environment/Hogwarts/HW_CT_GiantClock/ABP_GiantClock.ABP_GiantClock_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink AnimGraph; // 0x0
    }; // Size: 0x10
    Params_AnimGraph params{};
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
void UABP_GiantClock_C::AnimNotify_NotifyWhoosh() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Environment/Hogwarts/HW_CT_GiantClock/ABP_GiantClock.ABP_GiantClock_C.AnimNotify_NotifyWhoosh"));
    struct Params_AnimNotify_NotifyWhoosh {
    }; // Size: 0x0
    Params_AnimNotify_NotifyWhoosh params{};
    ProcessEvent(func, &params);
}
void UABP_GiantClock_C::ExecuteUbergraph_ABP_GiantClock(int32_t EntryPoint, AActor* CallFunc_GetOwningActor_ReturnValue, ABP_Clocktower_C* K2Node_DynamicCast_AsBP_Clocktower, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Environment/Hogwarts/HW_CT_GiantClock/ABP_GiantClock.ABP_GiantClock_C.ExecuteUbergraph_ABP_GiantClock"));
    struct Params_ExecuteUbergraph_ABP_GiantClock {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetOwningActor_ReturnValue; // 0x8
        ABP_Clocktower_C* K2Node_DynamicCast_AsBP_Clocktower; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_ExecuteUbergraph_ABP_GiantClock params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetOwningActor_ReturnValue = (AActor*)CallFunc_GetOwningActor_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Clocktower = (ABP_Clocktower_C*)K2Node_DynamicCast_AsBP_Clocktower;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
