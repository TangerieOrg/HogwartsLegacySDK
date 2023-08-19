#pragma once
#include <cstdint>
#include "APhoenixBudgetedActor.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVector.hpp"
class ABP_Sphinx_Puzzle_E_Rock_C;
class USceneComponent;
class UNiagaraComponent;
class USkeletalMeshComponent;
class UObjectStateComponent;
class UStaticMeshComponent;
class UCapsuleComponent;
class UBillboardComponent;
class UPrimitiveComponent;
class AActor;
class ABP_Sphinx_Puzzle_E_Stack_C;
class UObjectStateInfo;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_E_Base_C : public APhoenixBudgetedActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    USkeletalMeshComponent* Vine4; // 0x270
    USkeletalMeshComponent* Vine3; // 0x278
    UObjectStateComponent* ObjectState; // 0x280
    USkeletalMeshComponent* Vine2; // 0x288
    USkeletalMeshComponent* Vine1; // 0x290
    UNiagaraComponent* MagicBurst; // 0x298
    UNiagaraComponent* DustRing; // 0x2a0
    UStaticMeshComponent* Inner_Base; // 0x2a8
    UStaticMeshComponent* Outer_Base; // 0x2b0
    UCapsuleComponent* OverlapTrigger; // 0x2b8
    UBillboardComponent* Billboard4; // 0x2c0
    UBillboardComponent* Billboard3; // 0x2c8
    UBillboardComponent* Billboard2; // 0x2d0
    UBillboardComponent* Billboard1; // 0x2d8
    UBillboardComponent* Billboard; // 0x2e0
    USceneComponent* Root; // 0x2e8
    TArray<ABP_Sphinx_Puzzle_E_Rock_C*> Rocks; // 0x2f0
    ABP_Sphinx_Puzzle_E_Rock_C* CurRock; // 0x300
    char pad_308[0x10];
    TArray<ABP_Sphinx_Puzzle_E_Rock_C*> RemainingRocks; // 0x318
    float SmallestDist; // 0x328
    float SolvedNum; // 0x32c
    TArray<FVector> RemainingLocs; // 0x330
    FVector CurLoc; // 0x340
    int32_t NumLeft; // 0x34c
    bool bRocksSet; // 0x350
    char pad_351[0x3];
    int32_t Time; // 0x354
    bool bSolved; // 0x358
    char pad_359[0x7];
    static ABP_Sphinx_Puzzle_E_Base_C* StaticClass();
    void SetFlockLocs();
    void OnFinished();
    void BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void ReplaceRock(ABP_Sphinx_Puzzle_E_Rock_C* OldRock, ABP_Sphinx_Puzzle_E_Rock_C* NewRock);
    void Rise();
    void Reveal();
    void LoadSolution(ABP_Sphinx_Puzzle_E_Stack_C* Stack);
    void FinishLoadSolution();
    void ExecuteUbergraph_BP_Sphinx_Puzzle_E_Base(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Array_Length_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_4, int32_t CallFunc_Array_Length_ReturnValue_5, int32_t CallFunc_Array_Length_ReturnValue_6, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue_5, TArray<FVector>& K2Node_MakeArray_Array, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32_t CallFunc_Array_Length_ReturnValue_7, int32_t CallFunc_Array_Length_ReturnValue_8, int32_t CallFunc_Array_Length_ReturnValue_9, int32_t Temp_int_Array_Index_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32_t Temp_int_Array_Index_Variable_3, FVector CallFunc_Array_Get_Item_3, float CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_3, int32_t Temp_int_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_3, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32_t CallFunc_Add_IntInt_ReturnValue_4, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, ABP_Sphinx_Puzzle_E_Rock_C* K2Node_CustomEvent_OldRock, ABP_Sphinx_Puzzle_E_Rock_C* K2Node_CustomEvent_NewRock, ABP_Sphinx_Puzzle_E_Rock_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Rock, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_10, bool CallFunc_Array_RemoveItem_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_Array_Contains_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, FVector CallFunc_GetPhysicsLinearVelocity_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorInt_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, int32_t Temp_int_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_5, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_4, FTimerHandle CallFunc_K2_SetTimer_ReturnValue);
    void SolvedEvent__DelegateSignature();
}; // Size: 0x360
#pragma pack(pop)
