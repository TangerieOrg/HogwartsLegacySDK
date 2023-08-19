#pragma once
#include <cstdint>
#include "EBroomDismountType.hpp"
#include "EBroomMountType.hpp"
#include "FHitResult.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class ABiped_Player;
class UParticleSystemComponent;
class AFlyingBroom;
class UBiped_AnimInstance;
class AActor;
class UGameLogicObject;
class UAmbulatory_MovementComponent;
class USkeletalMeshComponent;
class UBlackboardComponent;
class UClass;
class UObject;
class UTargetTracker;
#pragma pack(push, 1)
class UBTT_HoverBroom_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    UParticleSystemComponent* EmitterComponent; // 0x158
    AFlyingBroom* HoverBroom; // 0x160
    AFlyingBroom* PropBroom; // 0x168
    bool DiveDismount; // 0x170
    EBroomMountType MountTransition; // 0x171
    EBroomDismountType DismountTransition; // 0x172
    bool MountImpulse; // 0x173
    bool Mounted; // 0x174
    char pad_175[0x3];
    static UBTT_HoverBroom_C* StaticClass();
    void StopCastingAnimation(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue);
    void HandleMuntitionImpact(FMunitionImpactData& MunitionImpactData, bool LightHit, FMunitionImpactData MI_Data, FString CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Contains_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue);
    void DismountBroomCompleted(FVariantMapHandle Variant_Map_Handle, bool CallFunc_GetVariantBool_FromHandle_bFound, bool CallFunc_GetVariantBool_FromHandle_ReturnValue);
    void DismountBroomStarted(FVariantMapHandle Variant_Map_Handle, bool CallFunc_GetVariantFVector_FromHandle_bFound, FVector CallFunc_GetVariantFVector_FromHandle_ReturnValue, bool CallFunc_GetVariantBool_FromHandle_bFound, bool CallFunc_GetVariantBool_FromHandle_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, UGameLogicObject* CallFunc_GetGameLogicObject_ReturnValue, UAmbulatory_MovementComponent* CallFunc_GetComponentByClass_ReturnValue);
    void DestroyBroomDismount(bool Instant, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess);
    void Show_Dismount_Prop(AFlyingBroom* Prop, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue);
    void SpawnBroomInHand(ABiped_Player* ParentActor, bool ScaleIn, float StartScale, bool Attatch, FName CallFunc_MakeLiteralName_ReturnValue, USkeletalMeshComponent* CallFunc_GetSkeletalMesh_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UClass* CallFunc_GetValueAsClass_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, AFlyingBroom* K2Node_DynamicCast_AsFlying_Broom, bool K2Node_DynamicCast_bSuccess, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue);
    void DestroyBroom(ABiped_Player* BipedPlayer, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue_1, FTransform CallFunc_InvertTransform_ReturnValue, FTransform CallFunc_ComposeTransforms_ReturnValue, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, EBroomDismountType CallFunc_GetDismountType_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SpawnFlyingBroom(ABiped_Player* ParentActor, AFlyingBroom* BroomProp);
    void CustActionEvt_Mount_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SpawnBroom_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SpawnBroom_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_JumpImpulse_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_BroomAcceleration_K2Node_CustomAnalogInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireWand_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void MunitionImpactDamage(UObject* Caller, FMunitionImpactData& MunitionImpactData);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTT_HoverBroom(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_3, AActor* K2Node_Event_OwnerActor_2, AActor* K2Node_Event_OwnerActor_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_1, UTargetTracker* CallFunc_GetFaceTargetTracker_ReturnValue, UBiped_AnimInstance* CallFunc_GetBipedAnimInstance_ReturnValue);
}; // Size: 0x178
#pragma pack(pop)
