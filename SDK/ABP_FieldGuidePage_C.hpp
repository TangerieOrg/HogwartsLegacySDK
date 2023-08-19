#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FQuat.hpp"
#include "FRotator.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UCognitionStimuliSourceComponent;
class UObject;
class UAkComponent;
class ABiped_Player;
class USceneComponent;
class USkeletalMeshComponent;
class USphereComponent;
class UObjectStateComponent;
class UTimelineComponent;
class AFieldGuideHotSpot;
class UABP_PaperAndQuill_C;
class UAnimInstance;
class UMaterialInstanceDynamic;
class ASpellTool;
class USpellToolRecord;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class ABP_FieldGuidePage_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UAkComponent* Ak_audio_location_start_stop; // 0x250
    USkeletalMeshComponent* SkeletalMesh; // 0x258
    USphereComponent* Sphere; // 0x260
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x268
    UObjectStateComponent* ObjectState; // 0x270
    USceneComponent* DefaultScene; // 0x278
    float Timeline_0_Emissive_8071C35F44CBD9FE64FA88AAFB0A9482; // 0x280
    ETimelineDirection::Type Timeline_0__Direction_8071C35F44CBD9FE64FA88AAFB0A9482; // 0x284
    char pad_285[0x3];
    UTimelineComponent* Timeline_0; // 0x288
    bool AllowMoveToDestination; // 0x290
    char pad_291[0xf];
    FTransform Destination; // 0x2a0
    bool MoveOutFromPlayer; // 0x2d0
    bool MoveToObjectOfInterest; // 0x2d1
    char pad_2d2[0x6];
    AFieldGuideHotSpot* FieldGuideHotSpot; // 0x2d8
    float InterpSpeed; // 0x2e0
    bool MoveBackIntoBook; // 0x2e4
    char pad_2e5[0x3];
    FTimerHandle SelfDestructTimerHandle; // 0x2e8
    UABP_PaperAndQuill_C* AnimBP; // 0x2f0
    bool CollectedByAccio; // 0x2f8
    char pad_2f9[0x7];
    static ABP_FieldGuidePage_C* StaticClass();
    void AccioStart();
    void PageGoAway(TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    void CollectPage();
    void ComputeMoveToObjectOfInterestDestination(FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue);
    void ComputeMoveOutFromPlayerDestination(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_Vector_Normal2D_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, UABP_PaperAndQuill_C* K2Node_DynamicCast_AsABP_Paper_and_Quill, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_NegateVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FQuat CallFunc_Conv_VectorToQuaternion_ReturnValue, FRotator CallFunc_Quat_Rotator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue);
    void SelfDestruct();
    void MoveToDestination(float DeltaTime, float InterpSpeed, bool& ReachedDestination, float DesiredDelta, FVector DirectionToDestination, float DistanceToDestination, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_VInterpTo_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_VectorVector_ReturnValue, FRotator CallFunc_RInterpTo_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
    void UserConstructionScript0(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnSpellTooWeak(AActor* Instigator);
    void RevelioEnd(UObject* Caller);
    void RevelioStart(UObject* Caller, float float);
    void Perceived_AutoTarget(UObject* Caller);
    void NoLongerPerceived_AutoTarget(UObject* Caller);
    void OnSpellIneffective(AActor* Instigator);
    void InteractionInitiated(UObject* Caller);
    void OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection);
    void ReceiveBeginPlay0();
    void OnSpellEffective(AActor* Instigator);
    void OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation);
    void ReceiveTick0(float DeltaSeconds);
    void OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact);
    void OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection);
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_FieldGuidePage(int32_t EntryPoint);
}; // Size: 0x300
#pragma pack(pop)
