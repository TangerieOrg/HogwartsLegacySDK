#include "AActor.hpp"
#include "AAmbulatory_Character.hpp"
#include "EJumpingType\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAmbulatory_AnimInstance.hpp"
#include "UAmbulatory_MovementComponent.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Biped_Jump_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBiped_MovementComponent.hpp"
#include "UFunction.hpp"
UBTT_Biped_Jump_C* UBTT_Biped_Jump_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_Jump.BTT_Biped_Jump_C");
    return (UBTT_Biped_Jump_C*)res;
}
void UBTT_Biped_Jump_C::SetAllowLand(bool AllowLand, AActor* CallFunc_GetActorOwner_ReturnValue, UBiped_MovementComponent* CallFunc_GetComponentByClass_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Jump.BTT_Biped_Jump_C.SetAllowLand"));
    struct Params_SetAllowLand {
        bool AllowLand; // 0x0
        char pad_1[0x7];
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
        UBiped_MovementComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_SetAllowLand params{};
    params.AllowLand = (bool)AllowLand;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UBiped_MovementComponent*)CallFunc_GetComponentByClass_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Jump_C::EndIK(UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Jump.BTT_Biped_Jump_C.EndIK"));
    struct Params_EndIK {
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x0
        UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
    }; // Size: 0x11
    Params_EndIK params{};
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.K2Node_DynamicCast_AsAmbulatory_Anim_Instance = (UAmbulatory_AnimInstance*)K2Node_DynamicCast_AsAmbulatory_Anim_Instance;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Jump_C::StartIK(UAnimInstance* CallFunc_GetAnimInstance_ReturnValue) {}
void UBTT_Biped_Jump_C::CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Jump.BTT_Biped_Jump_C.CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_5"));
    struct Params_CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Jump_C::ExecuteJump(AActor* OwnerActor) {}
void UBTT_Biped_Jump_C::CustActionEvt_JumpToFall_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Jump.BTT_Biped_Jump_C.CustActionEvt_JumpToFall_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_JumpToFall_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_JumpToFall_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Jump_C::CalculateJumpingType(AActor* Actor, EJumpingType::Type& JumpingType) {}
void UBTT_Biped_Jump_C::CustActionEvt_Landed_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Jump.BTT_Biped_Jump_C.CustActionEvt_Landed_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_Landed_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Landed_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Jump_C::CustActionEvt_AllowJumpLand_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Jump.BTT_Biped_Jump_C.CustActionEvt_AllowJumpLand_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_AllowJumpLand_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AllowJumpLand_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Jump_C::CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Jump.BTT_Biped_Jump_C.CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ClimbMoveComplete_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Jump_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Jump.BTT_Biped_Jump_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Jump_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Jump.BTT_Biped_Jump_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Jump_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Jump.BTT_Biped_Jump_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Jump_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Jump.BTT_Biped_Jump_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Jump_C::OnCharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Jump.BTT_Biped_Jump_C.OnCharacterTeleported"));
    struct Params_OnCharacterTeleported {
        AAmbulatory_Character* TeleportedCharacter; // 0x0
        FVector AmountDisplaced; // 0x8
        FRotator AmountRotated; // 0x14
    }; // Size: 0x20
    Params_OnCharacterTeleported params{};
    params.TeleportedCharacter = (AAmbulatory_Character*)TeleportedCharacter;
    params.AmountDisplaced = (FVector)AmountDisplaced;
    params.AmountRotated = (FRotator)AmountRotated;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Jump_C::ExecuteUbergraph_BTT_Biped_Jump(int32_t EntryPoint, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAmbulatory_MovementComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, AActor* CallFunc_GetActorOwner_ReturnValue_2, UAmbulatory_MovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, AActor* CallFunc_GetActorOwner_ReturnValue_3) {}
