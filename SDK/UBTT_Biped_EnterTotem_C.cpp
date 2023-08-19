#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBTT_Biped_EnterTotem_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
UBTT_Biped_EnterTotem_C* UBTT_Biped_EnterTotem_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_EnterTotem.BTT_Biped_EnterTotem_C");
    return (UBTT_Biped_EnterTotem_C*)res;
}
void UBTT_Biped_EnterTotem_C::SetDesiredLocationAndRotation(AActor* Player, FVector TotemRight, FVector TotemForward, FVector PlayerForward, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FRotator CallFunc_MakeRotFromXZ_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_GetActorRightVector_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_EnterTotem.BTT_Biped_EnterTotem_C.SetDesiredLocationAndRotation"));
    struct Params_SetDesiredLocationAndRotation {
        AActor* Player; // 0x0
        FVector TotemRight; // 0x8
        FVector TotemForward; // 0x14
        FVector PlayerForward; // 0x20
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x2c
        FVector CallFunc_GetActorForwardVector_ReturnValue; // 0x38
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x44
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x50
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x5c
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_1; // 0x68
        FVector CallFunc_K2_GetActorLocation_ReturnValue_2; // 0x74
        FRotator CallFunc_MakeRotFromXZ_ReturnValue; // 0x80
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x8c
        FVector CallFunc_Normal_ReturnValue; // 0x98
        FVector CallFunc_GetActorRightVector_ReturnValue; // 0xa4
        FVector CallFunc_GetActorForwardVector_ReturnValue_1; // 0xb0
    }; // Size: 0xbc
    Params_SetDesiredLocationAndRotation params{};
    params.Player = (AActor*)Player;
    params.TotemRight = (FVector)TotemRight;
    params.TotemForward = (FVector)TotemForward;
    params.PlayerForward = (FVector)PlayerForward;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_GetActorForwardVector_ReturnValue = (FVector)CallFunc_GetActorForwardVector_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_1 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_1;
    params.CallFunc_K2_GetActorLocation_ReturnValue_2 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_2;
    params.CallFunc_MakeRotFromXZ_ReturnValue = (FRotator)CallFunc_MakeRotFromXZ_ReturnValue;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_Normal_ReturnValue = (FVector)CallFunc_Normal_ReturnValue;
    params.CallFunc_GetActorRightVector_ReturnValue = (FVector)CallFunc_GetActorRightVector_ReturnValue;
    params.CallFunc_GetActorForwardVector_ReturnValue_1 = (FVector)CallFunc_GetActorForwardVector_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UBTT_Biped_EnterTotem_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_EnterTotem.BTT_Biped_EnterTotem_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_EnterTotem_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_EnterTotem.BTT_Biped_EnterTotem_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_EnterTotem_C::ExecuteUbergraph_BTT_Biped_EnterTotem(int32_t EntryPoint, int32_t Temp_int_Array_Index_Variable, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor) {}
