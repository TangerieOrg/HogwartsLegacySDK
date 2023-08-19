#pragma once
#include <cstdint>
#include "AStaticMeshActor.hpp"
#include "ECollisionEnabled\Type.hpp"
#include "ECollisionResponse.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EObjectTypeQuery.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class USkeletalMeshComponentBudgeted;
class UScheduler;
class URollingComponent;
class AActor;
class UObjectStateComponent;
class ABP_Sphinx_Puzzle_E_Stack_C;
class ASpellTool;
class APlayerCameraManager;
class UObjectStateInfo;
class USpellToolRecord;
class UInteractionArchitectAsset;
class USkinFXComponent;
class UPrimitiveComponent;
class ABiped_Player;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_E_Rock_C : public AStaticMeshActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x258
    USkeletalMeshComponentBudgeted* Vine; // 0x260
    URollingComponent* Rolling; // 0x268
    UObjectStateComponent* ObjectState; // 0x270
    bool bSolved; // 0x278
    char pad_279[0x47];
    FVector FlockLoc; // 0x2c0
    bool bFlocking; // 0x2cc
    bool bChecking; // 0x2cd
    char pad_2ce[0x12];
    ABP_Sphinx_Puzzle_E_Stack_C* StackRef; // 0x2e0
    char pad_2e8[0x8];
    FTransform StartTransform; // 0x2f0
    char pad_320[0x10];
    APlayerCameraManager* PlayerCamManager; // 0x330
    AActor* PlayerRef; // 0x338
    bool bBlocked; // 0x340
    bool bRevealed; // 0x341
    bool bActivated; // 0x342
    char pad_343[0x1];
    float CurTime; // 0x344
    float TimeLastAffectedBySpell; // 0x348
    bool FlockingPaused; // 0x34c
    char pad_34d[0x3];
    FVector StartLocation; // 0x350
    bool bIsSolving; // 0x35c
    char pad_35d[0x3];
    FVector LastLocation; // 0x360
    float StaleLocationCounter; // 0x36c
    static ABP_Sphinx_Puzzle_E_Rock_C* StaticClass();
    bool StartReveal(AActor* Instigator, bool ShowOccluded);
    void SetIsSolving(bool IsSolving, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void CheckForStaleLocation(float DeltaTime, bool& LocationIsStale, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
    void CheckForImminentZKill(FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void ActivateGroupedRocks(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void SetStaticMesh();
    void OnBeginRevealFade(AActor* Instigator);
    void OnHiddenObjectHinted(AActor* Instigator);
    void OnHiddenObjectRevealed(AActor* Instigator);
    void OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection);
    void OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation);
    void OnSpellEffective(AActor* Instigator);
    void OnSpellIneffective(AActor* Instigator);
    void OnSpellTooWeak(AActor* Instigator);
    void Solved();
    void OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection);
    void OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact);
    void BeginSolving();
    void BeginFlock();
    void EndFlock();
    void PauseFlock();
    void FinalSolve();
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void ReceiveTick(float DeltaSeconds);
    void StartMove();
    void EndMove();
    void AllowTeleport();
    void PauseMove();
    void ResumeFlock();
    void OnEndReveal(AActor* Instigator);
    void Reveal();
    void LoadSolution();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Sphinx_Puzzle_E_Rock(int32_t EntryPoint, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, EEndPlayReason::Type K2Node_Event_EndPlayReason, bool CallFunc_Vector_IsZero_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, bool CallFunc_CheckForStaleLocation_LocationIsStale, FVector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_GetAngularDamping_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsSimulatingPhysics_ReturnValue, FVector K2Node_MathExpression_ReturnValue, bool CallFunc_Vector_IsZero_ReturnValue_1, FVector CallFunc_GetPhysicsLinearVelocity_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, FVector CallFunc_GetDirectionUnitVector_ReturnValue, FVector CallFunc_Normal_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetMass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector K2Node_MathExpression_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_EqualEqual_VectorVector_ReturnValue_2, TArray<EObjectTypeQuery>& K2Node_MakeArray_Array, ASpellTool* K2Node_Event_SpellTool, AActor* K2Node_Event_Instigator_1, USpellToolRecord* K2Node_Event_SpellToolRecord, FName K2Node_Event_SpellType, FGameplayTagContainer K2Node_Event_Impact, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_2, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FGameplayTagContainer K2Node_Event_Impact_1, FHitResult K2Node_Event_Hit, FVector K2Node_Event_ImpactDirection, bool K2Node_SwitchName_CmpSuccess, bool K2Node_SwitchName_CmpSuccess_1, bool CallFunc_EqualEqual_NameName_ReturnValue, FRotator CallFunc_GetCameraRotation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, FVector CallFunc_GetRightVector_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorInt_ReturnValue, FVector CallFunc_Multiply_VectorInt_ReturnValue_1, FVector CallFunc_GetCameraLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_GetCameraLocation_ReturnValue_1, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_Vector_Distance2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, AActor* K2Node_Event_Instigator_3, AActor* K2Node_Event_Instigator_4, AActor* K2Node_Event_Instigator_5, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_6, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FGameplayTagContainer K2Node_Event_Impact_2, FVector K2Node_Event_MunitionLocation, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_7, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FHitResult K2Node_Event_Hit_1, FVector K2Node_Event_ImpactDirection_1, AActor* K2Node_Event_Instigator_8, AActor* K2Node_Event_Instigator_9, AActor* K2Node_Event_Instigator_10, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, float CallFunc_GetAngularDamping_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1, float CallFunc_GetLinearDamping_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, AActor* K2Node_Event_Instigator, float CallFunc_GetLinearDamping_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_2, TArray<AActor*>& Temp_object_Variable, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_2, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult_1, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_3, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_4, FName CallFunc_SkinFXName_name, FName CallFunc_SkinFXName_name_1, TArray<AActor*>& Temp_object_Variable_1, USkinFXComponent* CallFunc_ActorStartSkinFX_skinFXComponent, TArray<UPrimitiveComponent*>& CallFunc_SphereOverlapComponents_OutComponents, bool CallFunc_SphereOverlapComponents_ReturnValue, UPrimitiveComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, ECollisionResponse CallFunc_GetCollisionResponseToChannel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, ECollisionEnabled::Type CallFunc_GetCollisionEnabled_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_4, UScheduler* CallFunc_Get_ReturnValue, UScheduler* CallFunc_Get_ReturnValue_1, float CallFunc_GetTotalSeconds_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_5, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue);
    void Oppugno_Start__DelegateSignature(UPrimitiveComponent* HitComp);
    void Error__DelegateSignature(ABP_Sphinx_Puzzle_E_Rock_C* Rock);
    void Finished__DelegateSignature();
    void Start_Solve__DelegateSignature();
    void Spell_End__DelegateSignature();
    void Spell_Start__DelegateSignature(UPrimitiveComponent* HitComp);
}; // Size: 0x370
#pragma pack(pop)
