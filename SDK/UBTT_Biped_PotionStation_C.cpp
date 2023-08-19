#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTT_Biped_PotionStation_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
#include "UKnowledgeManager.hpp"
void UBTT_Biped_PotionStation_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PotionStation.BTT_Biped_PotionStation_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
UBTT_Biped_PotionStation_C* UBTT_Biped_PotionStation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_PotionStation.BTT_Biped_PotionStation_C");
    return (UBTT_Biped_PotionStation_C*)res;
}
void UBTT_Biped_PotionStation_C::SetDesiredRotation(AActor* Player, FVector StationRight, FVector StationForward, FVector PlayerForward, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FRotator CallFunc_MakeRotFromXZ_ReturnValue, FRotator CallFunc_MakeRotFromXZ_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FRotator CallFunc_MakeRotFromXZ_ReturnValue_2, FRotator CallFunc_MakeRotFromXZ_ReturnValue_3, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue_2, float CallFunc_Abs_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_3, float CallFunc_Abs_ReturnValue_1, FVector CallFunc_GetActorRightVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PotionStation.BTT_Biped_PotionStation_C.SetDesiredRotation"));
    struct Params_SetDesiredRotation {
        AActor* Player; // 0x0
        FVector StationRight; // 0x8
        FVector StationForward; // 0x14
        FVector PlayerForward; // 0x20
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x2c
        bool CallFunc_IsValid_ReturnValue; // 0x38
        char pad_39[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x3c
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x48
        FVector CallFunc_Normal_ReturnValue; // 0x54
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x60
        FRotator CallFunc_MakeRotFromXZ_ReturnValue; // 0x6c
        FRotator CallFunc_MakeRotFromXZ_ReturnValue_1; // 0x78
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_1; // 0x84
        FRotator CallFunc_MakeRotFromXZ_ReturnValue_2; // 0x90
        FRotator CallFunc_MakeRotFromXZ_ReturnValue_3; // 0x9c
        float CallFunc_Dot_VectorVector_ReturnValue; // 0xa8
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0xac
        char pad_ad[0x3];
        float CallFunc_Dot_VectorVector_ReturnValue_1; // 0xb0
        bool CallFunc_Greater_FloatFloat_ReturnValue_1; // 0xb4
        char pad_b5[0x3];
        float CallFunc_Dot_VectorVector_ReturnValue_2; // 0xb8
        float CallFunc_Abs_ReturnValue; // 0xbc
        float CallFunc_Dot_VectorVector_ReturnValue_3; // 0xc0
        float CallFunc_Abs_ReturnValue_1; // 0xc4
        FVector CallFunc_GetActorRightVector_ReturnValue; // 0xc8
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0xd4
        char pad_d5[0x3];
        FVector CallFunc_GetActorForwardVector_ReturnValue; // 0xd8
    }; // Size: 0xe4
    Params_SetDesiredRotation params{};
    params.Player = (AActor*)Player;
    params.StationRight = (FVector)StationRight;
    params.StationForward = (FVector)StationForward;
    params.PlayerForward = (FVector)PlayerForward;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_Normal_ReturnValue = (FVector)CallFunc_Normal_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_MakeRotFromXZ_ReturnValue = (FRotator)CallFunc_MakeRotFromXZ_ReturnValue;
    params.CallFunc_MakeRotFromXZ_ReturnValue_1 = (FRotator)CallFunc_MakeRotFromXZ_ReturnValue_1;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_1 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_1;
    params.CallFunc_MakeRotFromXZ_ReturnValue_2 = (FRotator)CallFunc_MakeRotFromXZ_ReturnValue_2;
    params.CallFunc_MakeRotFromXZ_ReturnValue_3 = (FRotator)CallFunc_MakeRotFromXZ_ReturnValue_3;
    params.CallFunc_Dot_VectorVector_ReturnValue = (float)CallFunc_Dot_VectorVector_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_Dot_VectorVector_ReturnValue_1 = (float)CallFunc_Dot_VectorVector_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue_1 = (bool)CallFunc_Greater_FloatFloat_ReturnValue_1;
    params.CallFunc_Dot_VectorVector_ReturnValue_2 = (float)CallFunc_Dot_VectorVector_ReturnValue_2;
    params.CallFunc_Abs_ReturnValue = (float)CallFunc_Abs_ReturnValue;
    params.CallFunc_Dot_VectorVector_ReturnValue_3 = (float)CallFunc_Dot_VectorVector_ReturnValue_3;
    params.CallFunc_Abs_ReturnValue_1 = (float)CallFunc_Abs_ReturnValue_1;
    params.CallFunc_GetActorRightVector_ReturnValue = (FVector)CallFunc_GetActorRightVector_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_GetActorForwardVector_ReturnValue = (FVector)CallFunc_GetActorForwardVector_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PotionStation_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PotionStation.BTT_Biped_PotionStation_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PotionStation_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PotionStation.BTT_Biped_PotionStation_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PotionStation_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PotionStation.BTT_Biped_PotionStation_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PotionStation_C::CustActionEvt_UsePotionStation_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PotionStation.BTT_Biped_PotionStation_C.CustActionEvt_UsePotionStation_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_UsePotionStation_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_UsePotionStation_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PotionStation_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_PotionStation.BTT_Biped_PotionStation_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_PotionStation_C::ExecuteUbergraph_BTT_Biped_PotionStation(int32_t EntryPoint, UKnowledgeManager* CallFunc_Get_ReturnValue, FName CallFunc_GetDbId_ReturnValue, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_RInterpTo_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, AActor* CallFunc_GetActorOwner_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue) {}
