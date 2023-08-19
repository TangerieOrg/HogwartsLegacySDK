#include "AActor.hpp"
#include "ABP_ShadowBlinkTravelActor_C.hpp"
#include "ABiped_Player.hpp"
#include "ACharacter.hpp"
#include "APawn.hpp"
#include "EPhysicalSurface.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAmbulatory_MovementComponent.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Biped_ShadowBlink_2_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UCogGroupFocusDirection_ActorFacing.hpp"
#include "UCogGroupUpDirection_World.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "UPawnMovementComponent.hpp"
void UBTT_Biped_ShadowBlink_2_C::Destroy_Shadow_Blink_FX(bool OnExit, bool CallFunc_IsValid_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlink_2.BTT_Biped_ShadowBlink_2_C.Destroy Shadow Blink FX"));
    struct Params_Destroy_Shadow_Blink_FX {
        bool OnExit; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x1
        char pad_2[0x6];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1; // 0x10
        bool CallFunc_EqualEqual_GameplayTag_ReturnValue; // 0x18
        bool CallFunc_IsValid_ReturnValue_1; // 0x19
    }; // Size: 0x1a
    Params_Destroy_Shadow_Blink_FX params{};
    params.OnExit = (bool)OnExit;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue_1 = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue_1;
    params.CallFunc_EqualEqual_GameplayTag_ReturnValue = (bool)CallFunc_EqualEqual_GameplayTag_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlink_2_C::TestForButtSlide(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, UAmbulatory_MovementComponent* K2Node_DynamicCast_AsAmbulatory_Movement_Component, bool K2Node_DynamicCast_bSuccess, EPhysicalSurface CallFunc_GetCurrentSurfaceType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlink_2.BTT_Biped_ShadowBlink_2_C.TestForButtSlide"));
    struct Params_TestForButtSlide {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue; // 0x8
        UAmbulatory_MovementComponent* K2Node_DynamicCast_AsAmbulatory_Movement_Component; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        EPhysicalSurface CallFunc_GetCurrentSurfaceType_ReturnValue; // 0x19
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x1a
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x1b
        bool CallFunc_BooleanOR_ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_TestForButtSlide params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetMovementComponent_ReturnValue = (UPawnMovementComponent*)CallFunc_GetMovementComponent_ReturnValue;
    params.K2Node_DynamicCast_AsAmbulatory_Movement_Component = (UAmbulatory_MovementComponent*)K2Node_DynamicCast_AsAmbulatory_Movement_Component;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetCurrentSurfaceType_ReturnValue = (EPhysicalSurface)CallFunc_GetCurrentSurfaceType_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
}
UBTT_Biped_ShadowBlink_2_C* UBTT_Biped_ShadowBlink_2_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlink_2.BTT_Biped_ShadowBlink_2_C");
    return (UBTT_Biped_ShadowBlink_2_C*)res;
}
void UBTT_Biped_ShadowBlink_2_C::ShadowBlinkExit(TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void UBTT_Biped_ShadowBlink_2_C::CreateShadowBlinkFX(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlink_2.BTT_Biped_ShadowBlink_2_C.CreateShadowBlinkFX"));
    struct Params_CreateShadowBlinkFX {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x8
        char pad_14[0x4];
        UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue; // 0x18
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x20
        char pad_2c[0x4];
        UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue; // 0x30
    }; // Size: 0x38
    Params_CreateShadowBlinkFX params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_SpawnSystemAttached_ReturnValue = (UNiagaraComponent*)CallFunc_SpawnSystemAttached_ReturnValue;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_SpawnSystemAtLocation_ReturnValue = (UNiagaraComponent*)CallFunc_SpawnSystemAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlink_2_C::ClampButtslideVelocity(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, UAmbulatory_MovementComponent* K2Node_DynamicCast_AsAmbulatory_Movement_Component, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_Vector_ClampSizeMax_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlink_2.BTT_Biped_ShadowBlink_2_C.ClampButtslideVelocity"));
    struct Params_ClampButtslideVelocity {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue; // 0x8
        UAmbulatory_MovementComponent* K2Node_DynamicCast_AsAmbulatory_Movement_Component; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x3];
        FVector CallFunc_Vector_ClampSizeMax_ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_ClampButtslideVelocity params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetMovementComponent_ReturnValue = (UPawnMovementComponent*)CallFunc_GetMovementComponent_ReturnValue;
    params.K2Node_DynamicCast_AsAmbulatory_Movement_Component = (UAmbulatory_MovementComponent*)K2Node_DynamicCast_AsAmbulatory_Movement_Component;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Vector_ClampSizeMax_ReturnValue = (FVector)CallFunc_Vector_ClampSizeMax_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlink_2_C::BlinkEndBeforeEnemy(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue) {}
void UBTT_Biped_ShadowBlink_2_C::AcquireTarget(APawn* BipedPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlink_2.BTT_Biped_ShadowBlink_2_C.AcquireTarget"));
    struct Params_AcquireTarget {
        APawn* BipedPlayer; // 0x0
    }; // Size: 0x8
    Params_AcquireTarget params{};
    params.BipedPlayer = (APawn*)BipedPlayer;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlink_2_C::FallingTest(bool& Falling, AActor* CallFunc_GetActorOwner_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess) {}
void UBTT_Biped_ShadowBlink_2_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlink_2.BTT_Biped_ShadowBlink_2_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlink_2_C::CustActionEvt_ShadowBlinkExit_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlink_2.BTT_Biped_ShadowBlink_2_C.CustActionEvt_ShadowBlinkExit_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_ShadowBlinkExit_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ShadowBlinkExit_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlink_2_C::PlayerNearDoor(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlink_2.BTT_Biped_ShadowBlink_2_C.PlayerNearDoor"));
    struct Params_PlayerNearDoor {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_PlayerNearDoor params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlink_2_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlink_2.BTT_Biped_ShadowBlink_2_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlink_2_C::CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlink_2.BTT_Biped_ShadowBlink_2_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlink_2_C::ShadowBlinkSphereHitSomething(UObject* Caller, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlink_2.BTT_Biped_ShadowBlink_2_C.ShadowBlinkSphereHitSomething"));
    struct Params_ShadowBlinkSphereHitSomething {
        UObject* Caller; // 0x0
        AActor* Actor; // 0x8
    }; // Size: 0x10
    Params_ShadowBlinkSphereHitSomething params{};
    params.Caller = (UObject*)Caller;
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlink_2_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlink_2.BTT_Biped_ShadowBlink_2_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlink_2_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlink_2.BTT_Biped_ShadowBlink_2_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlink_2_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlink_2.BTT_Biped_ShadowBlink_2_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlink_2_C::ExecuteUbergraph_BTT_Biped_ShadowBlink_2(int32_t EntryPoint, FVariantMapHandle K2Node_CustomStickInputActionEvent_VariantMapHandle, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1) {}
