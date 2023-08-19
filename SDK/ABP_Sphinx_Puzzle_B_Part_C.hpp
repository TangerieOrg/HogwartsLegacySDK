#pragma once
#include <cstdint>
#include "APhoenixBudgetedActor.hpp"
#include "E_Size\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class USceneComponent;
class UNiagaraComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UAkComponent;
class UParticleSystemComponent;
class UObjectStateComponent;
class UChildActorComponent;
class UStaticMesh;
class ABP_Torch_C;
class UArrestoMomentumComponent;
class AActor;
class UObjectStateInfo;
class APawn;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_B_Part_C : public APhoenixBudgetedActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    USkeletalMeshComponent* Vine; // 0x270
    UParticleSystemComponent* AmbientSplash; // 0x278
    UParticleSystemComponent* WaterSplash; // 0x280
    UParticleSystemComponent* EmergeSplash; // 0x288
    UParticleSystemComponent* BowlDrips; // 0x290
    UNiagaraComponent* Steam; // 0x298
    UAkComponent* Ak_BP_Sphinx_Puzzle_B_Brazier; // 0x2a0
    UObjectStateComponent* ObjectState; // 0x2a8
    UChildActorComponent* TorchChild; // 0x2b0
    UStaticMeshComponent* Base; // 0x2b8
    USceneComponent* Root; // 0x2c0
    UStaticMeshComponent* Column; // 0x2c8
    UStaticMeshComponent* Brazier; // 0x2d0
    E_Size::Type Size; // 0x2d8
    char pad_2d9[0x3];
    FRotator Rotation; // 0x2dc
    FVector ExtendLOC; // 0x2e8
    FVector RetractLOC; // 0x2f4
    FVector TargetLoc; // 0x300
    FVector SubmergeLOC; // 0x30c
    float MovementSpeed; // 0x318
    float BaseMovementSpeed; // 0x31c
    bool bIsLit; // 0x320
    bool bMoving; // 0x321
    bool bDone; // 0x322
    bool bFailed; // 0x323
    bool bActivated; // 0x324
    char pad_325[0x3];
    float ArrestoDilation; // 0x328
    char pad_32c[0x4];
    TArray<UStaticMesh*> ColumnVariants; // 0x330
    char pad_340[0x30];
    ABP_Torch_C* Torch; // 0x370
    UArrestoMomentumComponent* ArrestoComp; // 0x378
    char pad_380[0x10];
    static ABP_Sphinx_Puzzle_B_Part_C* StaticClass();
    bool DisallowArrestoMomentum();
    void Build(TArray<FName>& K2Node_MakeArray_Array, FName Temp_name_Variable, bool CallFunc_ConstructTorch_ReturnValue, FName Temp_name_Variable_1, bool CallFunc_IsValid_ReturnValue, FName Temp_name_Variable_2, E_Size::Type Temp_byte_Variable, ABP_Torch_C* K2Node_DynamicCast_AsBP_Torch, bool K2Node_DynamicCast_bSuccess, FName K2Node_Select_Default, FTransform CallFunc_GetSocketTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_NegateVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Move();
    void Success();
    void Start();
    void Clear();
    void BndEvt__Torch_K2Node_ComponentBoundEvent_0_OnLit__DelegateSignature(ABP_Torch_C* Torch);
    void BndEvt__Torch_K2Node_ComponentBoundEvent_2_OnExtinguished__DelegateSignature(ABP_Torch_C* Torch);
    void OnArrestoMomentumBegin(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation);
    void OnArrestoMomentumEnd(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent);
    void BndEvt__Torch_K2Node_ComponentBoundEvent_1_ArrestoStart__DelegateSignature(bool bStart, UArrestoMomentumComponent* ArrestoComp, float TimeDilation);
    void Reveal();
    void LoadSolution();
    void ExecuteUbergraph_BP_Sphinx_Puzzle_B_Part(int32_t EntryPoint, FVector CallFunc_GetComponentBounds_Origin, FVector CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_VSize_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, ABP_Torch_C* K2Node_ComponentBoundEvent_Torch_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue_2, FVector CallFunc_Subtract_VectorVector_ReturnValue_3, float CallFunc_VSize_ReturnValue_1, float CallFunc_VSize_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_VLerp_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult_1, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, ABP_Torch_C* K2Node_ComponentBoundEvent_Torch, AActor* K2Node_Event_Instigator_1, UArrestoMomentumComponent* K2Node_Event_ArrestoMomentumComponent_1, float K2Node_Event_TimeDilation, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, AActor* K2Node_Event_Instigator, UArrestoMomentumComponent* K2Node_Event_ArrestoMomentumComponent, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualExactly_VectorVector_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_2, bool K2Node_ComponentBoundEvent_bStart, UArrestoMomentumComponent* K2Node_ComponentBoundEvent_ArrestoComp, float K2Node_ComponentBoundEvent_TimeDilation, float CallFunc_FMin_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_3, APawn* CallFunc_GetPlayerPawn_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
    void Restart__DelegateSignature();
    void Drop__DelegateSignature();
    void Fail__DelegateSignature();
    void Lit__DelegateSignature();
}; // Size: 0x390
#pragma pack(pop)
