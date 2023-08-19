#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ABiped_PlayerController.hpp"
#include "ACharacter.hpp"
#include "ALadder.hpp"
#include "APlayerController.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Biped_ClimbLadder_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBiped_AnimInstance.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStaticMeshComponent.hpp"
void UBTT_Biped_ClimbLadder_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
UBTT_Biped_ClimbLadder_C* UBTT_Biped_ClimbLadder_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C");
    return (UBTT_Biped_ClimbLadder_C*)res;
}
void UBTT_Biped_ClimbLadder_C::RevertMovementMode(AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess) {}
void UBTT_Biped_ClimbLadder_C::IgnoreLadderWhenMoving(bool Ignore, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, TArray<UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, UStaticMeshComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.IgnoreLadderWhenMoving"));
    struct Params_IgnoreLadderWhenMoving {
        bool Ignore; // 0x0
        char pad_1[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0x4
        int32_t Temp_int_Loop_Counter_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x10
        ACharacter* K2Node_DynamicCast_AsCharacter; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        TArray<UStaticMeshComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x28
        UStaticMeshComponent* CallFunc_Array_Get_Item; // 0x38
        int32_t CallFunc_Array_Length_ReturnValue; // 0x40
        bool CallFunc_Less_IntInt_ReturnValue; // 0x44
    }; // Size: 0x45
    Params_IgnoreLadderWhenMoving params{};
    params.Ignore = (bool)Ignore;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.K2Node_DynamicCast_AsCharacter = (ACharacter*)K2Node_DynamicCast_AsCharacter;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<UStaticMeshComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.CallFunc_Array_Get_Item = (UStaticMeshComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
}
bool UBTT_Biped_ClimbLadder_C::CheckForDismountBottom(float CallFunc_GetLadderBottomZ_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, float CallFunc_GetMeshHeight_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_LessEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.CheckForDismountBottom"));
    struct Params_CheckForDismountBottom {
        bool ReturnValue; // 0x0
        char pad_1[0x3];
        float CallFunc_GetLadderBottomZ_ReturnValue; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x10
        float CallFunc_GetMeshHeight_ReturnValue; // 0x18
        char pad_1c[0x4];
        FTransform CallFunc_GetTransform_ReturnValue; // 0x20
        float CallFunc_Multiply_IntFloat_ReturnValue; // 0x50
        FVector CallFunc_BreakTransform_Location; // 0x54
        FRotator CallFunc_BreakTransform_Rotation; // 0x60
        FVector CallFunc_BreakTransform_Scale; // 0x6c
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x78
        float CallFunc_BreakVector_X; // 0x7c
        float CallFunc_BreakVector_Y; // 0x80
        float CallFunc_BreakVector_Z; // 0x84
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x88
    }; // Size: 0x89
    Params_CheckForDismountBottom params{};
    params.CallFunc_GetLadderBottomZ_ReturnValue = (float)CallFunc_GetLadderBottomZ_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_GetMeshHeight_ReturnValue = (float)CallFunc_GetMeshHeight_ReturnValue;
    params.CallFunc_GetTransform_ReturnValue = (FTransform)CallFunc_GetTransform_ReturnValue;
    params.CallFunc_Multiply_IntFloat_ReturnValue = (float)CallFunc_Multiply_IntFloat_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBTT_Biped_ClimbLadder_C::CheckForDismountTop(float CallFunc_GetLadderTopZ_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, float CallFunc_GetMeshHeight_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Greater_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.CheckForDismountTop"));
    struct Params_CheckForDismountTop {
        bool ReturnValue; // 0x0
        char pad_1[0x3];
        float CallFunc_GetLadderTopZ_ReturnValue; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x10
        float CallFunc_GetMeshHeight_ReturnValue; // 0x18
        char pad_1c[0x4];
        FTransform CallFunc_GetTransform_ReturnValue; // 0x20
        float CallFunc_Multiply_IntFloat_ReturnValue; // 0x50
        FVector CallFunc_BreakTransform_Location; // 0x54
        FRotator CallFunc_BreakTransform_Rotation; // 0x60
        FVector CallFunc_BreakTransform_Scale; // 0x6c
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x78
        float CallFunc_BreakVector_X; // 0x7c
        float CallFunc_BreakVector_Y; // 0x80
        float CallFunc_BreakVector_Z; // 0x84
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x88
    }; // Size: 0x89
    Params_CheckForDismountTop params{};
    params.CallFunc_GetLadderTopZ_ReturnValue = (float)CallFunc_GetLadderTopZ_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_GetMeshHeight_ReturnValue = (float)CallFunc_GetMeshHeight_ReturnValue;
    params.CallFunc_GetTransform_ReturnValue = (FTransform)CallFunc_GetTransform_ReturnValue;
    params.CallFunc_Multiply_IntFloat_ReturnValue = (float)CallFunc_Multiply_IntFloat_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBTT_Biped_ClimbLadder_C::CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLadder_C::CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLadder_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLadder_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLadder_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLadder_C::DismountTopAnimStart(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ClimbLadder.BTT_Biped_ClimbLadder_C.DismountTopAnimStart"));
    struct Params_DismountTopAnimStart {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_DismountTopAnimStart params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ClimbLadder_C::ExecuteUbergraph_BTT_Biped_ClimbLadder(int32_t EntryPoint, APlayerController* CallFunc_GetPlayerController_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, uint8_t CallFunc_MakeLiteralByte_ReturnValue, UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance, bool K2Node_DynamicCast_bSuccess_2) {}
