#pragma once
#include <cstdint>
#include "ABP_SphinxPuzzle_Base_C.hpp"
#include "EInteractiveState.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_Sphinx_Platform_Part.hpp"
#include "FTransform.hpp"
class UChildActorComponent;
class ABP_Sphinx_Puzzle_C_Part_C;
class ABP_Sphinx_Puzzle_C_Manager_C;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_C_Platform_C : public ABP_SphinxPuzzle_Base_C {
public:
    UChildActorComponent* Manager; // 0x3c0
    TArray<FSTR_Sphinx_Platform_Part> PlatformPlacements; // 0x3c8
    TArray<ABP_Sphinx_Puzzle_C_Part_C*> Platforms; // 0x3d8
    char pad_3e8[0x8];
    static ABP_Sphinx_Puzzle_C_Platform_C* StaticClass();
    void Build0(int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, ABP_Sphinx_Puzzle_C_Manager_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_C_Manager, bool K2Node_DynamicCast_bSuccess, FSTR_Sphinx_Platform_Part CallFunc_Array_Get_Item, UChildActorComponent* CallFunc_AddComponent_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, ABP_Sphinx_Puzzle_C_Part_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_C_Part, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_Array_Add_ReturnValue);
    void DefaultSetup(FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, FSTR_Sphinx_Platform_Part K2Node_MakeStruct_STR_Sphinx_Platform_Part, FSTR_Sphinx_Platform_Part K2Node_MakeStruct_STR_Sphinx_Platform_Part_1, FTransform CallFunc_MakeTransform_ReturnValue_2, FTransform CallFunc_MakeTransform_ReturnValue_3, FSTR_Sphinx_Platform_Part K2Node_MakeStruct_STR_Sphinx_Platform_Part_2, FSTR_Sphinx_Platform_Part K2Node_MakeStruct_STR_Sphinx_Platform_Part_3, FTransform CallFunc_MakeTransform_ReturnValue_4, FSTR_Sphinx_Platform_Part K2Node_MakeStruct_STR_Sphinx_Platform_Part_4, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue_3, int32_t CallFunc_Array_Add_ReturnValue_4);
    void UserConstructionScript();
    void NotifyCurrentState0(EInteractiveState CurrentObjectState);
    void NotifyBeginPuzzle0(EInteractiveState State);
    void Solved();
    void ReceiveBeginPlay0();
    void PuzzleStart();
    void BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature();
    void ExecuteUbergraph_BP_Sphinx_Puzzle_C_Platform(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_AutoSaveGameData_ReturnValue, int32_t Temp_int_Variable_3, bool Temp_bool_IsClosed_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, EInteractiveState K2Node_Event_CurrentObjectState, EInteractiveState K2Node_Event_state, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_IsClosed_Variable_2, ABP_Sphinx_Puzzle_C_Part_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, ABP_Sphinx_Puzzle_C_Part_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, ABP_Sphinx_Puzzle_C_Part_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, ABP_Sphinx_Puzzle_C_Part_C* CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3);
}; // Size: 0x3f0
#pragma pack(pop)
