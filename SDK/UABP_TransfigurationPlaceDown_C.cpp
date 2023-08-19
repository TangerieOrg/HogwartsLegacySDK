#include "ABP_TransfigurationPreviewPlacementAnimator_C.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FAnimNode_TransitionResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "FVector.hpp"
#include "UABP_TransfigurationPlaceDown_C.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
UABP_TransfigurationPlaceDown_C* UABP_TransfigurationPlaceDown_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Transformation/ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C");
    return (UABP_TransfigurationPlaceDown_C*)res;
}
void UABP_TransfigurationPlaceDown_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.BlueprintUpdateAnimation"));
    struct Params_BlueprintUpdateAnimation {
        float DeltaTimeX; // 0x0
    }; // Size: 0x4
    Params_BlueprintUpdateAnimation params{};
    params.DeltaTimeX = (float)DeltaTimeX;
    ProcessEvent(func, &params);
}
void UABP_TransfigurationPlaceDown_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_4120AD794D27CE49AF1F02B0A930B772() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_4120AD794D27CE49AF1F02B0A930B772"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_4120AD794D27CE49AF1F02B0A930B772 {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_4120AD794D27CE49AF1F02B0A930B772 params{};
    ProcessEvent(func, &params);
}
void UABP_TransfigurationPlaceDown_C::AnimGraph(FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink AnimGraph; // 0x0
    }; // Size: 0x10
    Params_AnimGraph params{};
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
void UABP_TransfigurationPlaceDown_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_051B8CFF45064601BFF0468A2B3AF2CB() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_051B8CFF45064601BFF0468A2B3AF2CB"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_051B8CFF45064601BFF0468A2B3AF2CB {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_051B8CFF45064601BFF0468A2B3AF2CB params{};
    ProcessEvent(func, &params);
}
void UABP_TransfigurationPlaceDown_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_710B6E30478BC906DAC337AF37347A01() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_710B6E30478BC906DAC337AF37347A01"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_710B6E30478BC906DAC337AF37347A01 {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_710B6E30478BC906DAC337AF37347A01 params{};
    ProcessEvent(func, &params);
}
void UABP_TransfigurationPlaceDown_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_330310B7402253D0DF9F099347ED1411() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_330310B7402253D0DF9F099347ED1411"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_330310B7402253D0DF9F099347ED1411 {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_330310B7402253D0DF9F099347ED1411 params{};
    ProcessEvent(func, &params);
}
void UABP_TransfigurationPlaceDown_C::AnimNotify_PlacementImpact() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.AnimNotify_PlacementImpact"));
    struct Params_AnimNotify_PlacementImpact {
    }; // Size: 0x0
    Params_AnimNotify_PlacementImpact params{};
    ProcessEvent(func, &params);
}
void UABP_TransfigurationPlaceDown_C::AnimNotify_PlaceDownFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.AnimNotify_PlaceDownFinished"));
    struct Params_AnimNotify_PlaceDownFinished {
    }; // Size: 0x0
    Params_AnimNotify_PlaceDownFinished params{};
    ProcessEvent(func, &params);
}
void UABP_TransfigurationPlaceDown_C::ExecuteUbergraph_ABP_TransfigurationPlaceDown(int32_t EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_GetSelectedAnimIndex_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetPreviewBounds_OutCenter, FVector CallFunc_GetPreviewBounds_OutExtent, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetMaxElement_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/ABP_TransfigurationPlaceDown.ABP_TransfigurationPlaceDown_C.ExecuteUbergraph_ABP_TransfigurationPlaceDown"));
    struct Params_ExecuteUbergraph_ABP_TransfigurationPlaceDown {
        int32_t EntryPoint; // 0x0
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_IntInt_ReturnValue_1; // 0x5
        bool CallFunc_EqualEqual_IntInt_ReturnValue_2; // 0x6
        bool CallFunc_EqualEqual_IntInt_ReturnValue_3; // 0x7
        float K2Node_Event_DeltaTimeX; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0xc
        char pad_d[0x3];
        int32_t CallFunc_GetSelectedAnimIndex_ReturnValue; // 0x10
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x14
        FVector CallFunc_GetPreviewBounds_OutCenter; // 0x20
        FVector CallFunc_GetPreviewBounds_OutExtent; // 0x2c
        bool CallFunc_IsValid_ReturnValue_1; // 0x38
        char pad_39[0x3];
        float CallFunc_GetMaxElement_ReturnValue; // 0x3c
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x40
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x44
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x48
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0x4c
        bool CallFunc_IsValid_ReturnValue_2; // 0x50
    }; // Size: 0x51
    Params_ExecuteUbergraph_ABP_TransfigurationPlaceDown params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_1 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_1;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_2 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_2;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_3 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_3;
    params.K2Node_Event_DeltaTimeX = (float)K2Node_Event_DeltaTimeX;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetSelectedAnimIndex_ReturnValue = (int32_t)CallFunc_GetSelectedAnimIndex_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_GetPreviewBounds_OutCenter = (FVector)CallFunc_GetPreviewBounds_OutCenter;
    params.CallFunc_GetPreviewBounds_OutExtent = (FVector)CallFunc_GetPreviewBounds_OutExtent;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetMaxElement_ReturnValue = (float)CallFunc_GetMaxElement_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    ProcessEvent(func, &params);
}
