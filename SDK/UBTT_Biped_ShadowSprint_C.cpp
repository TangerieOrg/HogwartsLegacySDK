#include "AActor.hpp"
#include "ABP_ShadowSprint_C.hpp"
#include "ABiped_Player.hpp"
#include "ACharacter.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTT_Biped_ShadowSprint_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UBTT_Biped_ShadowSprint_C* UBTT_Biped_ShadowSprint_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C");
    return (UBTT_Biped_ShadowSprint_C*)res;
}
void UBTT_Biped_ShadowSprint_C::ShrinkCapsule(ACharacter* Character, float CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.ShrinkCapsule"));
    struct Params_ShrinkCapsule {
        ACharacter* Character; // 0x0
        float CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_ShrinkCapsule params{};
    params.Character = (ACharacter*)Character;
    params.CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue = (float)CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowSprint_C::RecoverCapsule(ACharacter* Character) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.RecoverCapsule"));
    struct Params_RecoverCapsule {
        ACharacter* Character; // 0x0
    }; // Size: 0x8
    Params_RecoverCapsule params{};
    params.Character = (ACharacter*)Character;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowSprint_C::SpawnShadowSprintActor(ABiped_Player* BipedPlayer, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, UCapsuleComponent* CallFunc_GetCapsuleComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_ShadowSprint_C* CallFunc_FinishSpawningActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.SpawnShadowSprintActor"));
    struct Params_SpawnShadowSprintActor {
        ABiped_Player* BipedPlayer; // 0x0
        USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue; // 0x8
        UCapsuleComponent* CallFunc_GetCapsuleComponent_ReturnValue; // 0x10
        bool CallFunc_K2_AttachToComponent_ReturnValue; // 0x18
        char pad_19[0x7];
        FTransform CallFunc_GetTransform_ReturnValue; // 0x20
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x50
        ABP_ShadowSprint_C* CallFunc_FinishSpawningActor_ReturnValue; // 0x58
    }; // Size: 0x60
    Params_SpawnShadowSprintActor params{};
    params.BipedPlayer = (ABiped_Player*)BipedPlayer;
    params.CallFunc_K2_GetRootComponent_ReturnValue = (USceneComponent*)CallFunc_K2_GetRootComponent_ReturnValue;
    params.CallFunc_GetCapsuleComponent_ReturnValue = (UCapsuleComponent*)CallFunc_GetCapsuleComponent_ReturnValue;
    params.CallFunc_K2_AttachToComponent_ReturnValue = (bool)CallFunc_K2_AttachToComponent_ReturnValue;
    params.CallFunc_GetTransform_ReturnValue = (FTransform)CallFunc_GetTransform_ReturnValue;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue = (ABP_ShadowSprint_C*)CallFunc_FinishSpawningActor_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowSprint_C::StopShadowSprint(AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.StopShadowSprint"));
    struct Params_StopShadowSprint {
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x0
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
    }; // Size: 0x11
    Params_StopShadowSprint params{};
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowSprint_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowSprint_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowSprint_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowSprint_C::InpActEvt_Stupefy_K2Node_CustomAnalogInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.InpActEvt_Stupefy_K2Node_CustomAnalogInputActionEvent_0"));
    struct Params_InpActEvt_Stupefy_K2Node_CustomAnalogInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Stupefy_K2Node_CustomAnalogInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowSprint_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowSprint_C::CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowSprint_C::CustActionEvt_MovementModeChanged_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.CustActionEvt_MovementModeChanged_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_MovementModeChanged_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_MovementModeChanged_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowSprint_C::MinShadowSprintTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.MinShadowSprintTimerExpired"));
    struct Params_MinShadowSprintTimerExpired {
    }; // Size: 0x0
    Params_MinShadowSprintTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowSprint_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowSprint_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowSprint.BTT_Biped_ShadowSprint_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowSprint_C::ExecuteUbergraph_BTT_Biped_ShadowSprint(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_2, float K2Node_Event_DeltaSeconds, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_2, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, FVariantMapHandle K2Node_CustomStickInputActionEvent_VariantMapHandle) {}
