#include "FAnimNode_AbilityAnimPlayer.hpp"
#include "FAnimNode_IKMasterNode.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SaveCachedPose.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FAnimNode_TransitionResult.hpp"
#include "FAnimNode_UseCachedPose.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UABP_Dugbog_C.hpp"
#include "UEnemy_AnimInstance.hpp"
#include "UFunction.hpp"
void UABP_Dugbog_C::ExecuteUbergraph_ABP_Dugbog(int32_t EntryPoint, float CallFunc_GetRelevantAnimTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/ABP_Dugbog.ABP_Dugbog_C.ExecuteUbergraph_ABP_Dugbog"));
    struct Params_ExecuteUbergraph_ABP_Dugbog {
        int32_t EntryPoint; // 0x0
        float CallFunc_GetRelevantAnimTime_ReturnValue; // 0x4
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x9
        bool CallFunc_NotEqual_ByteByte_ReturnValue; // 0xa
    }; // Size: 0xb
    Params_ExecuteUbergraph_ABP_Dugbog params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetRelevantAnimTime_ReturnValue = (float)CallFunc_GetRelevantAnimTime_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_NotEqual_ByteByte_ReturnValue = (bool)CallFunc_NotEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
}
void UABP_Dugbog_C::AnimGraph(FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/ABP_Dugbog.ABP_Dugbog_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink AnimGraph; // 0x0
    }; // Size: 0x10
    Params_AnimGraph params{};
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
UABP_Dugbog_C* UABP_Dugbog_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/ABP_Dugbog.ABP_Dugbog_C");
    return (UABP_Dugbog_C*)res;
}
void UABP_Dugbog_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dugbog_AnimGraphNode_TransitionResult_5A37D81243D13AE1038CF7ADFBF69CFD() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/ABP_Dugbog.ABP_Dugbog_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dugbog_AnimGraphNode_TransitionResult_5A37D81243D13AE1038CF7ADFBF69CFD"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dugbog_AnimGraphNode_TransitionResult_5A37D81243D13AE1038CF7ADFBF69CFD {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dugbog_AnimGraphNode_TransitionResult_5A37D81243D13AE1038CF7ADFBF69CFD params{};
    ProcessEvent(func, &params);
}
void UABP_Dugbog_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dugbog_AnimGraphNode_TransitionResult_7A62C6CE45B8DD1F664CD59B7F4FEA43() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/ABP_Dugbog.ABP_Dugbog_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dugbog_AnimGraphNode_TransitionResult_7A62C6CE45B8DD1F664CD59B7F4FEA43"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dugbog_AnimGraphNode_TransitionResult_7A62C6CE45B8DD1F664CD59B7F4FEA43 {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dugbog_AnimGraphNode_TransitionResult_7A62C6CE45B8DD1F664CD59B7F4FEA43 params{};
    ProcessEvent(func, &params);
}
void UABP_Dugbog_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dugbog_AnimGraphNode_TransitionResult_2D3A347D4700DDAD868F8F849FC71401() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/ABP_Dugbog.ABP_Dugbog_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dugbog_AnimGraphNode_TransitionResult_2D3A347D4700DDAD868F8F849FC71401"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dugbog_AnimGraphNode_TransitionResult_2D3A347D4700DDAD868F8F849FC71401 {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dugbog_AnimGraphNode_TransitionResult_2D3A347D4700DDAD868F8F849FC71401 params{};
    ProcessEvent(func, &params);
}
