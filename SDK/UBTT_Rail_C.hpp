#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class UBlackboardComponent;
class ABiped_Player;
class UParticleSystemComponent;
class ARailTravelStatue;
class USplineComponent;
class UObject;
class APawn;
class ABP_RailTravel_C;
class UClass;
class USkeletalMeshComponent;
class UAnimInstance;
class UAmbulatory_AnimInstance;
#pragma pack(push, 1)
class UBTT_Rail_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    AActor* RailActor; // 0x158
    UParticleSystemComponent* EmitterComponent; // 0x160
    bool ExitingRail; // 0x168
    char pad_169[0x7];
    ARailTravelStatue* RailTravelObject; // 0x170
    USplineComponent* RailSplineComponent; // 0x178
    float TravelDirection; // 0x180
    float AddToYaw; // 0x184
    float FadeOutTime; // 0x188
    float WaitTime; // 0x18c
    float FadeInTime; // 0x190
    bool StickPressed; // 0x194
    char pad_195[0x3];
    float StickX; // 0x198
    float StickY; // 0x19c
    static UBTT_Rail_C* StaticClass();
    void TeleportToSplineEnd(FVector CallFunc_GetSplineTransformAtEnd_SplineLocation, FRotator CallFunc_GetSplineTransformAtEnd_SplineRotation, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SafeTeleportTo_ReturnValue);
    void GetSplineTransformAtEnd(FVector& SplineLocation, FRotator& SplineRotation, float DistanceAlongSpline, FRotator CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
    void GetInteractActor(UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess);
    void SpawnStatue(AActor* ParentActor, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, ABP_RailTravel_C* K2Node_DynamicCast_AsBP_Rail_Travel, bool K2Node_DynamicCast_bSuccess_1, FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, ARailTravelStatue* K2Node_DynamicCast_AsRail_Travel_Statue, bool K2Node_DynamicCast_bSuccess_2);
    void ExitRail(bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess);
    void SetContexts(bool Flag);
    void ComputeTravelDirection(USplineComponent* SplineComponent, float& TravelDirection, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_Get_DesiredWorldDirection_OutWorldDirection, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_FindDirectionClosestToWorldLocation_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void FadeOutComplete();
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTT_Rail(int32_t EntryPoint);
}; // Size: 0x1a0
#pragma pack(pop)
