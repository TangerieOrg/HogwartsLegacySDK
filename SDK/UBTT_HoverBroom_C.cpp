#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "AFlyingBroom.hpp"
#include "EBroomDismountType.hpp"
#include "EBroomMountType.hpp"
#include "FHitResult.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAmbulatory_MovementComponent.hpp"
#include "UBTT_HoverBroom_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBiped_AnimInstance.hpp"
#include "UBlackboardComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UGameLogicObject.hpp"
#include "UObject.hpp"
#include "UParticleSystemComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UTargetTracker.hpp"
void UBTT_HoverBroom_C::CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
UBTT_HoverBroom_C* UBTT_HoverBroom_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C");
    return (UBTT_HoverBroom_C*)res;
}
void UBTT_HoverBroom_C::SpawnBroomInHand(ABiped_Player* ParentActor, bool ScaleIn, float StartScale, bool Attatch, FName CallFunc_MakeLiteralName_ReturnValue, USkeletalMeshComponent* CallFunc_GetSkeletalMesh_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UClass* CallFunc_GetValueAsClass_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, AFlyingBroom* K2Node_DynamicCast_AsFlying_Broom, bool K2Node_DynamicCast_bSuccess, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.SpawnBroomInHand"));
    struct Params_SpawnBroomInHand {
        ABiped_Player* ParentActor; // 0x0
        bool ScaleIn; // 0x8
        char pad_9[0x3];
        float StartScale; // 0xc
        bool Attatch; // 0x10
        char pad_11[0x3];
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x14
        char pad_1c[0x4];
        USkeletalMeshComponent* CallFunc_GetSkeletalMesh_ReturnValue; // 0x20
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x28
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x30
        char pad_3c[0x4];
        UClass* CallFunc_GetValueAsClass_ReturnValue; // 0x40
        char pad_48[0x8];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x50
        UClass* K2Node_ClassDynamicCast_AsActor; // 0x80
        bool K2Node_ClassDynamicCast_bSuccess; // 0x88
        char pad_89[0x7];
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x90
        AActor* CallFunc_FinishSpawningActor_ReturnValue; // 0x98
        AFlyingBroom* K2Node_DynamicCast_AsFlying_Broom; // 0xa0
        bool K2Node_DynamicCast_bSuccess; // 0xa8
        char pad_a9[0x7];
        USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue; // 0xb0
    }; // Size: 0xb8
    Params_SpawnBroomInHand params{};
    params.ParentActor = (ABiped_Player*)ParentActor;
    params.ScaleIn = (bool)ScaleIn;
    params.StartScale = (float)StartScale;
    params.Attatch = (bool)Attatch;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_GetSkeletalMesh_ReturnValue = (USkeletalMeshComponent*)CallFunc_GetSkeletalMesh_ReturnValue;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_GetValueAsClass_ReturnValue = (UClass*)CallFunc_GetValueAsClass_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.K2Node_ClassDynamicCast_AsActor = (UClass*)K2Node_ClassDynamicCast_AsActor;
    params.K2Node_ClassDynamicCast_bSuccess = (bool)K2Node_ClassDynamicCast_bSuccess;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue = (AActor*)CallFunc_FinishSpawningActor_ReturnValue;
    params.K2Node_DynamicCast_AsFlying_Broom = (AFlyingBroom*)K2Node_DynamicCast_AsFlying_Broom;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetComponentByClass_ReturnValue = (USkeletalMeshComponent*)CallFunc_GetComponentByClass_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_HoverBroom_C::StopCastingAnimation(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue) {}
void UBTT_HoverBroom_C::SpawnFlyingBroom(ABiped_Player* ParentActor, AFlyingBroom* BroomProp) {}
void UBTT_HoverBroom_C::HandleMuntitionImpact(FMunitionImpactData& MunitionImpactData, bool LightHit, FMunitionImpactData MI_Data, FString CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Contains_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue) {}
void UBTT_HoverBroom_C::DismountBroomCompleted(FVariantMapHandle Variant_Map_Handle, bool CallFunc_GetVariantBool_FromHandle_bFound, bool CallFunc_GetVariantBool_FromHandle_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.DismountBroomCompleted"));
    struct Params_DismountBroomCompleted {
        FVariantMapHandle Variant_Map_Handle; // 0x0
        bool CallFunc_GetVariantBool_FromHandle_bFound; // 0x4
        bool CallFunc_GetVariantBool_FromHandle_ReturnValue; // 0x5
    }; // Size: 0x6
    Params_DismountBroomCompleted params{};
    params.Variant_Map_Handle = (FVariantMapHandle)Variant_Map_Handle;
    params.CallFunc_GetVariantBool_FromHandle_bFound = (bool)CallFunc_GetVariantBool_FromHandle_bFound;
    params.CallFunc_GetVariantBool_FromHandle_ReturnValue = (bool)CallFunc_GetVariantBool_FromHandle_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_HoverBroom_C::DismountBroomStarted(FVariantMapHandle Variant_Map_Handle, bool CallFunc_GetVariantFVector_FromHandle_bFound, FVector CallFunc_GetVariantFVector_FromHandle_ReturnValue, bool CallFunc_GetVariantBool_FromHandle_bFound, bool CallFunc_GetVariantBool_FromHandle_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, UGameLogicObject* CallFunc_GetGameLogicObject_ReturnValue, UAmbulatory_MovementComponent* CallFunc_GetComponentByClass_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.DismountBroomStarted"));
    struct Params_DismountBroomStarted {
        FVariantMapHandle Variant_Map_Handle; // 0x0
        bool CallFunc_GetVariantFVector_FromHandle_bFound; // 0x4
        char pad_5[0x3];
        FVector CallFunc_GetVariantFVector_FromHandle_ReturnValue; // 0x8
        bool CallFunc_GetVariantBool_FromHandle_bFound; // 0x14
        bool CallFunc_GetVariantBool_FromHandle_ReturnValue; // 0x15
        char pad_16[0x2];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x18
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x20
        UGameLogicObject* CallFunc_GetGameLogicObject_ReturnValue; // 0x28
        UAmbulatory_MovementComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x30
    }; // Size: 0x38
    Params_DismountBroomStarted params{};
    params.Variant_Map_Handle = (FVariantMapHandle)Variant_Map_Handle;
    params.CallFunc_GetVariantFVector_FromHandle_bFound = (bool)CallFunc_GetVariantFVector_FromHandle_bFound;
    params.CallFunc_GetVariantFVector_FromHandle_ReturnValue = (FVector)CallFunc_GetVariantFVector_FromHandle_ReturnValue;
    params.CallFunc_GetVariantBool_FromHandle_bFound = (bool)CallFunc_GetVariantBool_FromHandle_bFound;
    params.CallFunc_GetVariantBool_FromHandle_ReturnValue = (bool)CallFunc_GetVariantBool_FromHandle_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_GetGameLogicObject_ReturnValue = (UGameLogicObject*)CallFunc_GetGameLogicObject_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UAmbulatory_MovementComponent*)CallFunc_GetComponentByClass_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_HoverBroom_C::DestroyBroomDismount(bool Instant, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.DestroyBroomDismount"));
    struct Params_DestroyBroomDismount {
        bool Instant; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x1
        char pad_2[0x6];
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_DestroyBroomDismount params{};
    params.Instant = (bool)Instant;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_HoverBroom_C::Show_Dismount_Prop(AFlyingBroom* Prop, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.Show Dismount Prop"));
    struct Params_Show_Dismount_Prop {
        AFlyingBroom* Prop; // 0x0
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x20
    }; // Size: 0x28
    Params_Show_Dismount_Prop params{};
    params.Prop = (AFlyingBroom*)Prop;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetComponentByClass_ReturnValue = (USkeletalMeshComponent*)CallFunc_GetComponentByClass_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_HoverBroom_C::DestroyBroom(ABiped_Player* BipedPlayer, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue_1, FTransform CallFunc_InvertTransform_ReturnValue, FTransform CallFunc_ComposeTransforms_ReturnValue, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, EBroomDismountType CallFunc_GetDismountType_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.DestroyBroom"));
    struct Params_DestroyBroom {
        ABiped_Player* BipedPlayer; // 0x0
        USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x8
        FTransform CallFunc_GetSocketTransform_ReturnValue; // 0x10
        FTransform CallFunc_GetSocketTransform_ReturnValue_1; // 0x40
        FTransform CallFunc_InvertTransform_ReturnValue; // 0x70
        FTransform CallFunc_ComposeTransforms_ReturnValue; // 0xa0
        FHitResult CallFunc_K2_SetActorTransform_SweepHitResult; // 0xd0
        bool CallFunc_K2_SetActorTransform_ReturnValue; // 0x158
        EBroomDismountType CallFunc_GetDismountType_ReturnValue; // 0x159
        bool CallFunc_IsValid_ReturnValue; // 0x15a
    }; // Size: 0x15b
    Params_DestroyBroom params{};
    params.BipedPlayer = (ABiped_Player*)BipedPlayer;
    params.CallFunc_GetComponentByClass_ReturnValue = (USkeletalMeshComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetSocketTransform_ReturnValue = (FTransform)CallFunc_GetSocketTransform_ReturnValue;
    params.CallFunc_GetSocketTransform_ReturnValue_1 = (FTransform)CallFunc_GetSocketTransform_ReturnValue_1;
    params.CallFunc_InvertTransform_ReturnValue = (FTransform)CallFunc_InvertTransform_ReturnValue;
    params.CallFunc_ComposeTransforms_ReturnValue = (FTransform)CallFunc_ComposeTransforms_ReturnValue;
    params.CallFunc_K2_SetActorTransform_SweepHitResult = (FHitResult)CallFunc_K2_SetActorTransform_SweepHitResult;
    params.CallFunc_K2_SetActorTransform_ReturnValue = (bool)CallFunc_K2_SetActorTransform_ReturnValue;
    params.CallFunc_GetDismountType_ReturnValue = (EBroomDismountType)CallFunc_GetDismountType_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_HoverBroom_C::CustActionEvt_Mount_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.CustActionEvt_Mount_K2Node_BTCustomActionEvent_5"));
    struct Params_CustActionEvt_Mount_K2Node_BTCustomActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Mount_K2Node_BTCustomActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_HoverBroom_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_HoverBroom_C::CustActionEvt_SpawnBroom_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.CustActionEvt_SpawnBroom_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_SpawnBroom_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SpawnBroom_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_HoverBroom_C::CustActionEvt_SpawnBroom_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.CustActionEvt_SpawnBroom_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_SpawnBroom_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SpawnBroom_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_HoverBroom_C::CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_HoverBroom_C::InpActEvt_BroomAcceleration_K2Node_CustomAnalogInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.InpActEvt_BroomAcceleration_K2Node_CustomAnalogInputActionEvent_0"));
    struct Params_InpActEvt_BroomAcceleration_K2Node_CustomAnalogInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_BroomAcceleration_K2Node_CustomAnalogInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_HoverBroom_C::CustActionEvt_FireWand_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.CustActionEvt_FireWand_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_FireWand_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireWand_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_HoverBroom_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_HoverBroom_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_HoverBroom_C::MunitionImpactDamage(UObject* Caller, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_HoverBroom.BTT_HoverBroom_C.MunitionImpactDamage"));
    struct Params_MunitionImpactDamage {
        UObject* Caller; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_MunitionImpactDamage params{};
    params.Caller = (UObject*)Caller;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
void UBTT_HoverBroom_C::ExecuteUbergraph_BTT_HoverBroom(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_3, AActor* K2Node_Event_OwnerActor_2, AActor* K2Node_Event_OwnerActor_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_1, UTargetTracker* CallFunc_GetFaceTargetTracker_ReturnValue, UBiped_AnimInstance* CallFunc_GetBipedAnimInstance_ReturnValue) {}
