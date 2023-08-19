#pragma once
#include <cstdint>
#include "ABP_SphinxPuzzle_Base_C.hpp"
#include "EInteractiveState.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UChildActorComponent;
class ABP_Sphinx_Puzzle_H_Part_C;
class ABP_Sphinx_Puzzle_H_Base_C;
class ABP_Sphinx_Puzzle_H_Manager_C;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_H_StupefyTarget_C : public ABP_SphinxPuzzle_Base_C {
public:
    UChildActorComponent* Manager; // 0x3c0
    TArray<FTransform> StoneLocations; // 0x3c8
    TArray<ABP_Sphinx_Puzzle_H_Part_C*> StoneArray; // 0x3d8
    TArray<ABP_Sphinx_Puzzle_H_Base_C*> BaseArray; // 0x3e8
    float CrystalDegree; // 0x3f8
    char pad_3fc[0x4];
    static ABP_Sphinx_Puzzle_H_StupefyTarget_C* StaticClass();
    void Build0(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, ABP_Sphinx_Puzzle_H_Manager_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_H_Manager, bool K2Node_DynamicCast_bSuccess, FTransform CallFunc_Array_Get_Item, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UChildActorComponent* CallFunc_AddComponent_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, ABP_Sphinx_Puzzle_H_Base_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_H_Base, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_Array_Add_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, FVector CallFunc_InverseTransformLocation_ReturnValue, FRotator CallFunc_InverseTransformRotation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UChildActorComponent* CallFunc_AddComponent_ReturnValue_1, ABP_Sphinx_Puzzle_H_Part_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_H_Part, bool K2Node_DynamicCast_bSuccess_2, int32_t CallFunc_Array_Add_ReturnValue_1);
    void UserConstructionScript();
    void NotifyCurrentState0(EInteractiveState CurrentObjectState);
    void NotifyBeginPuzzle0(EInteractiveState State);
    void Solved();
    void ReceiveBeginPlay0();
    void PuzzleStart();
    void BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature();
    void ExecuteUbergraph_BP_Sphinx_Puzzle_H_StupefyTarget(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2, int32_t Temp_int_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Variable_4, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_4, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, int32_t Temp_int_Variable_5, int32_t CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_AutoSaveGameData_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, EInteractiveState K2Node_Event_CurrentObjectState, EInteractiveState K2Node_Event_state, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, ABP_Sphinx_Puzzle_H_Part_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, ABP_Sphinx_Puzzle_H_Part_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, ABP_Sphinx_Puzzle_H_Part_C* CallFunc_Array_Get_Item_2, ABP_Sphinx_Puzzle_H_Base_C* CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_2, ABP_Sphinx_Puzzle_H_Base_C* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t CallFunc_Array_Length_ReturnValue_3, int32_t CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, ABP_Sphinx_Puzzle_H_Part_C* CallFunc_Array_Get_Item_5, int32_t CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5);
}; // Size: 0x400
#pragma pack(pop)
