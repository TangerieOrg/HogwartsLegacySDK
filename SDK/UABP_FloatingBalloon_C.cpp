#include "FAnimNode_AnimDynamics.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_LinkedInputPose.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_Root.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "FRotator.hpp"
#include "UABP_FloatingBalloon_C.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
UABP_FloatingBalloon_C* UABP_FloatingBalloon_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/RiggedObjects/Props/FloatingBalloonTarget/ABP_FloatingBalloon.ABP_FloatingBalloon_C");
    return (UABP_FloatingBalloon_C*)res;
}
void UABP_FloatingBalloon_C::AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Props/FloatingBalloonTarget/ABP_FloatingBalloon.ABP_FloatingBalloon_C.AnimGraph"));
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
void UABP_FloatingBalloon_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Props/FloatingBalloonTarget/ABP_FloatingBalloon.ABP_FloatingBalloon_C.BlueprintUpdateAnimation"));
    struct Params_BlueprintUpdateAnimation {
        float DeltaTimeX; // 0x0
    }; // Size: 0x4
    Params_BlueprintUpdateAnimation params{};
    params.DeltaTimeX = (float)DeltaTimeX;
    ProcessEvent(func, &params);
}
void UABP_FloatingBalloon_C::BlueprintBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Props/FloatingBalloonTarget/ABP_FloatingBalloon.ABP_FloatingBalloon_C.BlueprintBeginPlay"));
    struct Params_BlueprintBeginPlay {
    }; // Size: 0x0
    Params_BlueprintBeginPlay params{};
    ProcessEvent(func, &params);
}
void UABP_FloatingBalloon_C::ExecuteUbergraph_ABP_FloatingBalloon(int32_t EntryPoint, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Props/FloatingBalloonTarget/ABP_FloatingBalloon.ABP_FloatingBalloon_C.ExecuteUbergraph_ABP_FloatingBalloon"));
    struct Params_ExecuteUbergraph_ABP_FloatingBalloon {
        int32_t EntryPoint; // 0x0
        float CallFunc_BreakRotator_Roll; // 0x4
        float CallFunc_BreakRotator_Pitch; // 0x8
        float CallFunc_BreakRotator_Yaw; // 0xc
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x10
        float K2Node_Event_DeltaTimeX; // 0x14
        float CallFunc_BreakRotator_Roll_1; // 0x18
        float CallFunc_BreakRotator_Pitch_1; // 0x1c
        float CallFunc_BreakRotator_Yaw_1; // 0x20
        float CallFunc_RandomFloatInRange_ReturnValue; // 0x24
        float CallFunc_BreakRotator_Roll_2; // 0x28
        float CallFunc_BreakRotator_Pitch_2; // 0x2c
        float CallFunc_BreakRotator_Yaw_2; // 0x30
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x34
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x38
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x3c
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0x40
        FRotator CallFunc_MakeRotator_ReturnValue; // 0x44
        FRotator CallFunc_MakeRotator_ReturnValue_1; // 0x50
        float CallFunc_RandomFloatInRange_ReturnValue_1; // 0x5c
        float CallFunc_RandomFloatInRange_ReturnValue_2; // 0x60
        FRotator CallFunc_MakeRotator_ReturnValue_2; // 0x64
        FRotator CallFunc_MakeRotator_ReturnValue_3; // 0x70
    }; // Size: 0x7c
    Params_ExecuteUbergraph_ABP_FloatingBalloon params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.K2Node_Event_DeltaTimeX = (float)K2Node_Event_DeltaTimeX;
    params.CallFunc_BreakRotator_Roll_1 = (float)CallFunc_BreakRotator_Roll_1;
    params.CallFunc_BreakRotator_Pitch_1 = (float)CallFunc_BreakRotator_Pitch_1;
    params.CallFunc_BreakRotator_Yaw_1 = (float)CallFunc_BreakRotator_Yaw_1;
    params.CallFunc_RandomFloatInRange_ReturnValue = (float)CallFunc_RandomFloatInRange_ReturnValue;
    params.CallFunc_BreakRotator_Roll_2 = (float)CallFunc_BreakRotator_Roll_2;
    params.CallFunc_BreakRotator_Pitch_2 = (float)CallFunc_BreakRotator_Pitch_2;
    params.CallFunc_BreakRotator_Yaw_2 = (float)CallFunc_BreakRotator_Yaw_2;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.CallFunc_MakeRotator_ReturnValue_1 = (FRotator)CallFunc_MakeRotator_ReturnValue_1;
    params.CallFunc_RandomFloatInRange_ReturnValue_1 = (float)CallFunc_RandomFloatInRange_ReturnValue_1;
    params.CallFunc_RandomFloatInRange_ReturnValue_2 = (float)CallFunc_RandomFloatInRange_ReturnValue_2;
    params.CallFunc_MakeRotator_ReturnValue_2 = (FRotator)CallFunc_MakeRotator_ReturnValue_2;
    params.CallFunc_MakeRotator_ReturnValue_3 = (FRotator)CallFunc_MakeRotator_ReturnValue_3;
    ProcessEvent(func, &params);
}
