#pragma once
#include <cstdint>
#include "ABP_SphinxPuzzle_Base_C.hpp"
#include "EInteractiveState.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_Sphinx_Incendio_Column.hpp"
#include "FTransform.hpp"
class UChildActorComponent;
class ABP_Sphinx_Puzzle_B_Part_C;
class ABP_Sphinx_Puzzle_B_Manager_C;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_B_Brazier_C : public ABP_SphinxPuzzle_Base_C {
public:
    UChildActorComponent* Manager; // 0x3c0
    TArray<FSTR_Sphinx_Incendio_Column> ColumnPlacements; // 0x3c8
    TArray<ABP_Sphinx_Puzzle_B_Part_C*> IncendioColumns; // 0x3d8
    ABP_Sphinx_Puzzle_B_Manager_C* ManagerActor; // 0x3e8
    static ABP_Sphinx_Puzzle_B_Brazier_C* StaticClass();
    void Build0(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, ABP_Sphinx_Puzzle_B_Manager_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_B_Manager, bool K2Node_DynamicCast_bSuccess, FSTR_Sphinx_Incendio_Column CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UChildActorComponent* CallFunc_AddComponent_ReturnValue, ABP_Sphinx_Puzzle_B_Part_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_B_Part, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_Array_Add_ReturnValue);
    void DefaultSetup(FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, FSTR_Sphinx_Incendio_Column K2Node_MakeStruct_STR_Sphinx_Incendio_Column, FSTR_Sphinx_Incendio_Column K2Node_MakeStruct_STR_Sphinx_Incendio_Column_1, FTransform CallFunc_MakeTransform_ReturnValue_2, FSTR_Sphinx_Incendio_Column K2Node_MakeStruct_STR_Sphinx_Incendio_Column_2, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_2);
    void UserConstructionScript();
    void NotifyCurrentState0(EInteractiveState CurrentObjectState);
    void NotifyBeginPuzzle0(EInteractiveState State);
    void Solved();
    void ReceiveBeginPlay0();
    void PuzzleStart();
    void BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature();
    void ExecuteUbergraph_BP_Sphinx_Puzzle_B_Brazier(int32_t EntryPoint, int32_t Temp_int_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_AutoSaveGameData_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, EInteractiveState K2Node_Event_CurrentObjectState, EInteractiveState K2Node_Event_state, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, ABP_Sphinx_Puzzle_B_Part_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, ABP_Sphinx_Puzzle_B_Part_C* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
}; // Size: 0x3f0
#pragma pack(pop)
