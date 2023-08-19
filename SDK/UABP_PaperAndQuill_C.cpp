#include "FAnimNode_Root.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FAnimNode_TransitionResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UABP_PaperAndQuill_C.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
void UABP_PaperAndQuill_C::AnimGraph(FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Meshes/Animated/FieldGuide/ABP_PaperAndQuill.ABP_PaperAndQuill_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink AnimGraph; // 0x0
    }; // Size: 0x10
    Params_AnimGraph params{};
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
UABP_PaperAndQuill_C* UABP_PaperAndQuill_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/VFX/Meshes/Animated/FieldGuide/ABP_PaperAndQuill.ABP_PaperAndQuill_C");
    return (UABP_PaperAndQuill_C*)res;
}
void UABP_PaperAndQuill_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_3981D324470AF618F324E59C57ED6F96() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Meshes/Animated/FieldGuide/ABP_PaperAndQuill.ABP_PaperAndQuill_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_3981D324470AF618F324E59C57ED6F96"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_3981D324470AF618F324E59C57ED6F96 {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_3981D324470AF618F324E59C57ED6F96 params{};
    ProcessEvent(func, &params);
}
void UABP_PaperAndQuill_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_C53472604BB9C2892F6411AFBDC80169() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Meshes/Animated/FieldGuide/ABP_PaperAndQuill.ABP_PaperAndQuill_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_C53472604BB9C2892F6411AFBDC80169"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_C53472604BB9C2892F6411AFBDC80169 {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_C53472604BB9C2892F6411AFBDC80169 params{};
    ProcessEvent(func, &params);
}
void UABP_PaperAndQuill_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_143541534A8F66F545DEB48B2B284F33() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Meshes/Animated/FieldGuide/ABP_PaperAndQuill.ABP_PaperAndQuill_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_143541534A8F66F545DEB48B2B284F33"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_143541534A8F66F545DEB48B2B284F33 {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_143541534A8F66F545DEB48B2B284F33 params{};
    ProcessEvent(func, &params);
}
void UABP_PaperAndQuill_C::AnimNotify_HitBySpell_Entered() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Meshes/Animated/FieldGuide/ABP_PaperAndQuill.ABP_PaperAndQuill_C.AnimNotify_HitBySpell_Entered"));
    struct Params_AnimNotify_HitBySpell_Entered {
    }; // Size: 0x0
    Params_AnimNotify_HitBySpell_Entered params{};
    ProcessEvent(func, &params);
}
void UABP_PaperAndQuill_C::AccioPull() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Meshes/Animated/FieldGuide/ABP_PaperAndQuill.ABP_PaperAndQuill_C.AccioPull"));
    struct Params_AccioPull {
    }; // Size: 0x0
    Params_AccioPull params{};
    ProcessEvent(func, &params);
}
void UABP_PaperAndQuill_C::HitByOtherSpell() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Meshes/Animated/FieldGuide/ABP_PaperAndQuill.ABP_PaperAndQuill_C.HitByOtherSpell"));
    struct Params_HitByOtherSpell {
    }; // Size: 0x0
    Params_HitByOtherSpell params{};
    ProcessEvent(func, &params);
}
void UABP_PaperAndQuill_C::AnimNotify_HitBySpellAgain_Entered() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Meshes/Animated/FieldGuide/ABP_PaperAndQuill.ABP_PaperAndQuill_C.AnimNotify_HitBySpellAgain_Entered"));
    struct Params_AnimNotify_HitBySpellAgain_Entered {
    }; // Size: 0x0
    Params_AnimNotify_HitBySpellAgain_Entered params{};
    ProcessEvent(func, &params);
}
void UABP_PaperAndQuill_C::AnimNotify_HitBySpell_Left() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Meshes/Animated/FieldGuide/ABP_PaperAndQuill.ABP_PaperAndQuill_C.AnimNotify_HitBySpell_Left"));
    struct Params_AnimNotify_HitBySpell_Left {
    }; // Size: 0x0
    Params_AnimNotify_HitBySpell_Left params{};
    ProcessEvent(func, &params);
}
void UABP_PaperAndQuill_C::ExecuteUbergraph_ABP_PaperAndQuill(int32_t EntryPoint, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Meshes/Animated/FieldGuide/ABP_PaperAndQuill.ABP_PaperAndQuill_C.ExecuteUbergraph_ABP_PaperAndQuill"));
    struct Params_ExecuteUbergraph_ABP_PaperAndQuill {
        int32_t EntryPoint; // 0x0
        float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue; // 0x4
        float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1; // 0x8
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0xc
        bool CallFunc_LessEqual_FloatFloat_ReturnValue_1; // 0xd
        char pad_e[0x2];
        float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2; // 0x10
        bool CallFunc_LessEqual_FloatFloat_ReturnValue_2; // 0x14
    }; // Size: 0x15
    Params_ExecuteUbergraph_ABP_PaperAndQuill params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue = (float)CallFunc_GetRelevantAnimTimeRemaining_ReturnValue;
    params.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1 = (float)CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue_1;
    params.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2 = (float)CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue_2;
    ProcessEvent(func, &params);
}
