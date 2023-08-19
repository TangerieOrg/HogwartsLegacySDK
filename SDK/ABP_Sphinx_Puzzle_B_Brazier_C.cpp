#include "ABP_SphinxPuzzle_Base_C.hpp"
#include "ABP_Sphinx_Puzzle_B_Brazier_C.hpp"
#include "ABP_Sphinx_Puzzle_B_Manager_C.hpp"
#include "ABP_Sphinx_Puzzle_B_Part_C.hpp"
#include "EInteractiveState.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_Sphinx_Incendio_Column.hpp"
#include "FTransform.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
void ABP_Sphinx_Puzzle_B_Brazier_C::NotifyBeginPuzzle0(EInteractiveState State) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.NotifyBeginPuzzle"));
    struct Params_NotifyBeginPuzzle {
        EInteractiveState State; // 0x0
    }; // Size: 0x1
    Params_NotifyBeginPuzzle params{};
    params.State = (EInteractiveState)State;
    ProcessEvent(func, &params);
}
ABP_Sphinx_Puzzle_B_Brazier_C* ABP_Sphinx_Puzzle_B_Brazier_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C");
    return (ABP_Sphinx_Puzzle_B_Brazier_C*)res;
}
void ABP_Sphinx_Puzzle_B_Brazier_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Brazier_C::DefaultSetup(FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, FSTR_Sphinx_Incendio_Column K2Node_MakeStruct_STR_Sphinx_Incendio_Column, FSTR_Sphinx_Incendio_Column K2Node_MakeStruct_STR_Sphinx_Incendio_Column_1, FTransform CallFunc_MakeTransform_ReturnValue_2, FSTR_Sphinx_Incendio_Column K2Node_MakeStruct_STR_Sphinx_Incendio_Column_2, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.DefaultSetup"));
    struct Params_DefaultSetup {
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x0
        FTransform CallFunc_MakeTransform_ReturnValue_1; // 0x30
        FSTR_Sphinx_Incendio_Column K2Node_MakeStruct_STR_Sphinx_Incendio_Column; // 0x60
        FSTR_Sphinx_Incendio_Column K2Node_MakeStruct_STR_Sphinx_Incendio_Column_1; // 0xa0
        FTransform CallFunc_MakeTransform_ReturnValue_2; // 0xe0
        FSTR_Sphinx_Incendio_Column K2Node_MakeStruct_STR_Sphinx_Incendio_Column_2; // 0x110
        int32_t CallFunc_Array_Add_ReturnValue; // 0x150
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x154
        int32_t CallFunc_Array_Add_ReturnValue_2; // 0x158
    }; // Size: 0x15c
    Params_DefaultSetup params{};
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue_1 = (FTransform)CallFunc_MakeTransform_ReturnValue_1;
    params.K2Node_MakeStruct_STR_Sphinx_Incendio_Column = (FSTR_Sphinx_Incendio_Column)K2Node_MakeStruct_STR_Sphinx_Incendio_Column;
    params.K2Node_MakeStruct_STR_Sphinx_Incendio_Column_1 = (FSTR_Sphinx_Incendio_Column)K2Node_MakeStruct_STR_Sphinx_Incendio_Column_1;
    params.CallFunc_MakeTransform_ReturnValue_2 = (FTransform)CallFunc_MakeTransform_ReturnValue_2;
    params.K2Node_MakeStruct_STR_Sphinx_Incendio_Column_2 = (FSTR_Sphinx_Incendio_Column)K2Node_MakeStruct_STR_Sphinx_Incendio_Column_2;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue_2 = (int32_t)CallFunc_Array_Add_ReturnValue_2;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Brazier_C::Build0(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, ABP_Sphinx_Puzzle_B_Manager_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_B_Manager, bool K2Node_DynamicCast_bSuccess, FSTR_Sphinx_Incendio_Column CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UChildActorComponent* CallFunc_AddComponent_ReturnValue, ABP_Sphinx_Puzzle_B_Part_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_B_Part, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_Array_Add_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.Build"));
    struct Params_Build {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        ABP_Sphinx_Puzzle_B_Manager_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_B_Manager; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        FSTR_Sphinx_Incendio_Column CallFunc_Array_Get_Item; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x60
        bool CallFunc_Less_IntInt_ReturnValue; // 0x64
        char pad_65[0x3];
        UChildActorComponent* CallFunc_AddComponent_ReturnValue; // 0x68
        ABP_Sphinx_Puzzle_B_Part_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_B_Part; // 0x70
        bool K2Node_DynamicCast_bSuccess_1; // 0x78
        char pad_79[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x7c
    }; // Size: 0x80
    Params_Build params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Sphinx_Puzzle_B_Manager = (ABP_Sphinx_Puzzle_B_Manager_C*)K2Node_DynamicCast_AsBP_Sphinx_Puzzle_B_Manager;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Array_Get_Item = (FSTR_Sphinx_Incendio_Column)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_AddComponent_ReturnValue = (UChildActorComponent*)CallFunc_AddComponent_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Sphinx_Puzzle_B_Part = (ABP_Sphinx_Puzzle_B_Part_C*)K2Node_DynamicCast_AsBP_Sphinx_Puzzle_B_Part;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Brazier_C::NotifyCurrentState0(EInteractiveState CurrentObjectState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.NotifyCurrentState"));
    struct Params_NotifyCurrentState {
        EInteractiveState CurrentObjectState; // 0x0
    }; // Size: 0x1
    Params_NotifyCurrentState params{};
    params.CurrentObjectState = (EInteractiveState)CurrentObjectState;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Brazier_C::Solved() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.Solved"));
    struct Params_Solved {
    }; // Size: 0x0
    Params_Solved params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Brazier_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Brazier_C::PuzzleStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.PuzzleStart"));
    struct Params_PuzzleStart {
    }; // Size: 0x0
    Params_PuzzleStart params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Brazier_C::BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/B-Braziers/BP_Sphinx_Puzzle_B_Brazier.BP_Sphinx_Puzzle_B_Brazier_C.BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature"));
    struct Params_BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_B_Brazier_C::ExecuteUbergraph_BP_Sphinx_Puzzle_B_Brazier(int32_t EntryPoint, int32_t Temp_int_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_AutoSaveGameData_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, EInteractiveState K2Node_Event_CurrentObjectState, EInteractiveState K2Node_Event_state, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, ABP_Sphinx_Puzzle_B_Part_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, ABP_Sphinx_Puzzle_B_Part_C* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1) {}
