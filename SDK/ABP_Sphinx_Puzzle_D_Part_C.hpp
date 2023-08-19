#pragma once
#include <cstdint>
#include "APhoenixBudgetedStaticMeshActor.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UAkComponent;
class URollingComponent;
class ASpellTool;
class USkeletalMeshComponent;
class AActor;
class UObjectStateComponent;
class USpellToolRecord;
class UPrimitiveComponent;
class UInteractionArchitectAsset;
class UObjectStateInfo;
class APawn;
class UClass;
class UNiagaraComponent;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_D_Part_C : public APhoenixBudgetedStaticMeshActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UAkComponent* Ak_BP_Sphinx_Puzzle_D_Part; // 0x270
    URollingComponent* Rolling; // 0x278
    USkeletalMeshComponent* Vine; // 0x280
    UObjectStateComponent* ObjectState; // 0x288
    char pad_290[0x10];
    FTransform InitialTransform; // 0x2a0
    bool bFinished; // 0x2d0
    char pad_2d1[0xf];
    static ABP_Sphinx_Puzzle_D_Part_C* StaticClass();
    void OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact);
    void OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection);
    void OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation);
    void OnSpellEffective(AActor* Instigator);
    void OnSpellIneffective(AActor* Instigator);
    void OnSpellTooWeak(AActor* Instigator);
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult& Hit);
    void Success();
    void Teleport();
    void BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature(UPrimitiveComponent* WakingComponent, FName BoneName);
    void BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature(UPrimitiveComponent* SleepingComponent, FName BoneName);
    void Reveal();
    void ReceiveBeginPlay();
    void LoadSolution();
    void Velocity_Check_Teleport();
    void OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection);
    void ExecuteUbergraph_BP_Sphinx_Puzzle_D_Part(int32_t EntryPoint, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_6, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FGameplayTagContainer K2Node_Event_Impact_2, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_5, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FHitResult K2Node_Event_Hit_2, FVector K2Node_Event_ImpactDirection_1, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_4, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FGameplayTagContainer K2Node_Event_Impact_1, FVector K2Node_Event_MunitionLocation, AActor* K2Node_Event_Instigator_3, AActor* K2Node_Event_Instigator_2, AActor* K2Node_Event_Instigator_1, UPrimitiveComponent* K2Node_Event_MyComp, AActor* K2Node_Event_Other, UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, FVector K2Node_Event_hitLocation, FVector K2Node_Event_HitNormal, FVector K2Node_Event_NormalImpulse, FHitResult K2Node_Event_Hit_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_IsClosed_Variable, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, FHitResult CallFunc_K2_SetWorldTransform_SweepHitResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_IsClosed_Variable_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue_1, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_WakingComponent, FName K2Node_ComponentBoundEvent_BoneName_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_SleepingComponent, FName K2Node_ComponentBoundEvent_BoneName, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue);
    void Start__DelegateSignature();
}; // Size: 0x2e0
#pragma pack(pop)
