#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_LayeredBoneBlend.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FAnimNode_TransitionResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "FRotator.hpp"
#include "UABP_AlohomoraLock_C.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
void UABP_AlohomoraLock_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_ModifyBone_D383A54C4203D447DBDC4097AE9875A2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/ABP_AlohomoraLock.ABP_AlohomoraLock_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_ModifyBone_D383A54C4203D447DBDC4097AE9875A2"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_ModifyBone_D383A54C4203D447DBDC4097AE9875A2 {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_ModifyBone_D383A54C4203D447DBDC4097AE9875A2 params{};
    ProcessEvent(func, &params);
}
void UABP_AlohomoraLock_C::AnimGraph(FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/ABP_AlohomoraLock.ABP_AlohomoraLock_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink AnimGraph; // 0x0
    }; // Size: 0x10
    Params_AnimGraph params{};
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
UABP_AlohomoraLock_C* UABP_AlohomoraLock_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/RiggedObjects/Environments/AlohomoraLock/ABP_AlohomoraLock.ABP_AlohomoraLock_C");
    return (UABP_AlohomoraLock_C*)res;
}
void UABP_AlohomoraLock_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_ModifyBone_B03B9B5B4FDB25057E709C8AC29152B0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/ABP_AlohomoraLock.ABP_AlohomoraLock_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_ModifyBone_B03B9B5B4FDB25057E709C8AC29152B0"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_ModifyBone_B03B9B5B4FDB25057E709C8AC29152B0 {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_ModifyBone_B03B9B5B4FDB25057E709C8AC29152B0 params{};
    ProcessEvent(func, &params);
}
void UABP_AlohomoraLock_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_8A070E4340E381CBAE00608EAE642B2C() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/ABP_AlohomoraLock.ABP_AlohomoraLock_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_8A070E4340E381CBAE00608EAE642B2C"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_8A070E4340E381CBAE00608EAE642B2C {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_8A070E4340E381CBAE00608EAE642B2C params{};
    ProcessEvent(func, &params);
}
void UABP_AlohomoraLock_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_B25D100D441BD1DFD0A43ABECCF3BB9D() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/ABP_AlohomoraLock.ABP_AlohomoraLock_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_B25D100D441BD1DFD0A43ABECCF3BB9D"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_B25D100D441BD1DFD0A43ABECCF3BB9D {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_B25D100D441BD1DFD0A43ABECCF3BB9D params{};
    ProcessEvent(func, &params);
}
void UABP_AlohomoraLock_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_8090CB3B4A4F89B751CD3FB32058676B() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/ABP_AlohomoraLock.ABP_AlohomoraLock_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_8090CB3B4A4F89B751CD3FB32058676B"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_8090CB3B4A4F89B751CD3FB32058676B {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_8090CB3B4A4F89B751CD3FB32058676B params{};
    ProcessEvent(func, &params);
}
void UABP_AlohomoraLock_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_TransitionResult_5F88EB444F14D974472F82B244A32D52() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/ABP_AlohomoraLock.ABP_AlohomoraLock_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_TransitionResult_5F88EB444F14D974472F82B244A32D52"));
    struct Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_TransitionResult_5F88EB444F14D974472F82B244A32D52 {
    }; // Size: 0x0
    Params_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_TransitionResult_5F88EB444F14D974472F82B244A32D52 params{};
    ProcessEvent(func, &params);
}
void UABP_AlohomoraLock_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/ABP_AlohomoraLock.ABP_AlohomoraLock_C.BlueprintUpdateAnimation"));
    struct Params_BlueprintUpdateAnimation {
        float DeltaTimeX; // 0x0
    }; // Size: 0x4
    Params_BlueprintUpdateAnimation params{};
    params.DeltaTimeX = (float)DeltaTimeX;
    ProcessEvent(func, &params);
}
void UABP_AlohomoraLock_C::ExecuteUbergraph_ABP_AlohomoraLock(int32_t EntryPoint, float K2Node_Event_DeltaTimeX, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/ABP_AlohomoraLock.ABP_AlohomoraLock_C.ExecuteUbergraph_ABP_AlohomoraLock"));
    struct Params_ExecuteUbergraph_ABP_AlohomoraLock {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_DeltaTimeX; // 0x4
        float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_FloatFloat_ReturnValue; // 0xc
        char pad_d[0x3];
        float CallFunc_Conv_BoolToFloat_ReturnValue; // 0x10
        bool CallFunc_BooleanOR_ReturnValue; // 0x14
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x15
        bool CallFunc_Not_PreBool_ReturnValue; // 0x16
        bool CallFunc_BooleanAND_ReturnValue; // 0x17
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x18
        char pad_19[0x3];
        float CallFunc_Conv_BoolToFloat_ReturnValue_1; // 0x1c
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x20
        char pad_21[0x3];
        float CallFunc_Conv_BoolToFloat_ReturnValue_2; // 0x24
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x28
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x2c
        FRotator CallFunc_MakeRotator_ReturnValue; // 0x30
        FRotator CallFunc_MakeRotator_ReturnValue_1; // 0x3c
    }; // Size: 0x48
    Params_ExecuteUbergraph_ABP_AlohomoraLock params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_DeltaTimeX = (float)K2Node_Event_DeltaTimeX;
    params.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue = (float)CallFunc_GetRelevantAnimTimeRemaining_ReturnValue;
    params.CallFunc_EqualEqual_FloatFloat_ReturnValue = (bool)CallFunc_EqualEqual_FloatFloat_ReturnValue;
    params.CallFunc_Conv_BoolToFloat_ReturnValue = (float)CallFunc_Conv_BoolToFloat_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_Conv_BoolToFloat_ReturnValue_1 = (float)CallFunc_Conv_BoolToFloat_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.CallFunc_Conv_BoolToFloat_ReturnValue_2 = (float)CallFunc_Conv_BoolToFloat_ReturnValue_2;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.CallFunc_MakeRotator_ReturnValue_1 = (FRotator)CallFunc_MakeRotator_ReturnValue_1;
    ProcessEvent(func, &params);
}
