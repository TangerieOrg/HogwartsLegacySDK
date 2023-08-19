#pragma once
#include <cstdint>
#include "ABP_SphinxPuzzle_Base_C.hpp"
#include "EInteractiveState.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FSTR_Sphinx_Rock_Stack.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class ABP_Sphinx_Puzzle_E_Rock_C;
class ABP_Sphinx_Puzzle_E_Stack_C;
class ABP_Sphinx_Puzzle_E_Base_C;
class UChildActorComponent;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_E_RockStack_C : public ABP_SphinxPuzzle_Base_C {
public:
    TArray<FSTR_Sphinx_Rock_Stack> StackPlacements; // 0x3c0
    int32_t NumSolved; // 0x3d0
    char pad_3d4[0x4];
    TArray<ABP_Sphinx_Puzzle_E_Rock_C*> Rocks; // 0x3d8
    TArray<ABP_Sphinx_Puzzle_E_Rock_C*> CurRocks; // 0x3e8
    TArray<ABP_Sphinx_Puzzle_E_Stack_C*> RockStacks; // 0x3f8
    TArray<ABP_Sphinx_Puzzle_E_Base_C*> RockBases; // 0x408
    char pad_418[0x8];
    static ABP_Sphinx_Puzzle_E_RockStack_C* StaticClass();
    void Build(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_1, FTransform Temp_struct_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, UChildActorComponent* CallFunc_AddComponent_ReturnValue, ABP_Sphinx_Puzzle_E_Stack_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Stack, bool K2Node_DynamicCast_bSuccess, ABP_Sphinx_Puzzle_E_Base_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, ABP_Sphinx_Puzzle_E_Stack_C* CallFunc_Array_Get_Item_1, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_3, FSTR_Sphinx_Rock_Stack CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_2, TArray<FTransform>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue_2, FTransform CallFunc_Array_Get_Item_4, UChildActorComponent* CallFunc_AddComponent_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, ABP_Sphinx_Puzzle_E_Rock_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Rock, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_Array_Add_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_2, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, FVector CallFunc_BreakTransform_Location_2, FRotator CallFunc_BreakTransform_Rotation_2, FVector CallFunc_BreakTransform_Scale_2, FVector CallFunc_BreakTransform_Location_3, FRotator CallFunc_BreakTransform_Rotation_3, FVector CallFunc_BreakTransform_Scale_3, FVector CallFunc_Add_VectorVector_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_3, FTransform CallFunc_MakeTransform_ReturnValue_2, FTransform CallFunc_MakeTransform_ReturnValue_3, FSTR_Sphinx_Rock_Stack K2Node_MakeStruct_STR_Sphinx_Rock_Stack, UChildActorComponent* CallFunc_AddComponent_ReturnValue_2, ABP_Sphinx_Puzzle_E_Base_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Base, bool K2Node_DynamicCast_bSuccess_2, int32_t CallFunc_Array_Length_ReturnValue_4, int32_t CallFunc_Array_Add_ReturnValue_3, bool CallFunc_NotEqual_IntInt_ReturnValue);
    void UserConstructionScript();
    void NotifyCurrentState(EInteractiveState CurrentObjectState);
    void NotifyBeginPuzzle(EInteractiveState State);
    void Solved();
    void ReceiveBeginPlay();
    void PuzzleStart();
    void Error(ABP_Sphinx_Puzzle_E_Rock_C* Rock);
    void BaseSolved();
    void BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature();
    void ExecuteUbergraph_BP_Sphinx_Puzzle_E_RockStack(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x420
#pragma pack(pop)
