#pragma once
#include <cstdint>
#include "ABP_SphinxPuzzle_Base_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EInteractiveState.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
class USkeletalMeshComponent;
class UChildActorComponent;
class UBoxComponent;
class AActor;
class ABP_Sphinx_Puzzle_D_Part_C;
class ATriggerBox;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_D_Ball_C : public ABP_SphinxPuzzle_Base_C {
public:
    USkeletalMeshComponent* Vine; // 0x3c0
    USkeletalMeshComponent* Vine2; // 0x3c8
    UChildActorComponent* Bowl; // 0x3d0
    UBoxComponent* OverlapTrigger; // 0x3d8
    FTransform BoulderPlacement; // 0x3e0
    FTransform TargetPlacement; // 0x410
    ABP_Sphinx_Puzzle_D_Part_C* Boulder; // 0x440
    TArray<AActor*> ResetTriggers; // 0x448
    char pad_458[0x8];
    static ABP_Sphinx_Puzzle_D_Ball_C* StaticClass();
    void UserConstructionScript(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult, AActor* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, ATriggerBox* K2Node_DynamicCast_AsTrigger_Box, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, FHitResult CallFunc_K2_AddRelativeLocation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult, FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult_1, UChildActorComponent* CallFunc_AddComponent_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, ABP_Sphinx_Puzzle_D_Part_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_D_Part, bool K2Node_DynamicCast_bSuccess_1);
    void NotifyCurrentState0(EInteractiveState CurrentObjectState);
    void NotifyBeginPuzzle0(EInteractiveState State);
    void Solved();
    void BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__OverlapTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature();
    void EndHighlight();
    void ReceiveBeginPlay0();
    void PuzzleStart();
    void OnResetTrigger(AActor* OverlappedActor, AActor* OtherActor);
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_Sphinx_Puzzle_D_Ball(int32_t EntryPoint);
}; // Size: 0x460
#pragma pack(pop)
