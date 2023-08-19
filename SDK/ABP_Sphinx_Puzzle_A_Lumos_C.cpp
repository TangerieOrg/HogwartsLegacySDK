#include "ABP_SphinxPuzzle_Base_C.hpp"
#include "ABP_Sphinx_Puzzle_A_Crystal_C.hpp"
#include "ABP_Sphinx_Puzzle_A_GlowBugs_C.hpp"
#include "ABP_Sphinx_Puzzle_A_Lumos_C.hpp"
#include "ABP_Sphinx_Puzzle_A_Manager_C.hpp"
#include "EInteractiveState.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_Sphinx_Lumos.hpp"
#include "FTransform.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
ABP_Sphinx_Puzzle_A_Lumos_C* ABP_Sphinx_Puzzle_A_Lumos_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Lumos.BP_Sphinx_Puzzle_A_Lumos_C");
    return (ABP_Sphinx_Puzzle_A_Lumos_C*)res;
}
void ABP_Sphinx_Puzzle_A_Lumos_C::NotifyBeginPuzzle0(EInteractiveState State) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Lumos.BP_Sphinx_Puzzle_A_Lumos_C.NotifyBeginPuzzle"));
    struct Params_NotifyBeginPuzzle {
        EInteractiveState State; // 0x0
    }; // Size: 0x1
    Params_NotifyBeginPuzzle params{};
    params.State = (EInteractiveState)State;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Lumos_C::Build0(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, ABP_Sphinx_Puzzle_A_Manager_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_A_Manager, bool K2Node_DynamicCast_bSuccess, ABP_Sphinx_Puzzle_A_Crystal_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, FSTR_Sphinx_Lumos CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, UChildActorComponent* CallFunc_AddComponent_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, UChildActorComponent* CallFunc_AddComponent_ReturnValue_1, ABP_Sphinx_Puzzle_A_GlowBugs_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_A_Glow_Bugs, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_Array_Add_ReturnValue_1, ABP_Sphinx_Puzzle_A_Crystal_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_A_Crystal, bool K2Node_DynamicCast_bSuccess_2, int32_t CallFunc_Array_Add_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Lumos.BP_Sphinx_Puzzle_A_Lumos_C.Build"));
    struct Params_Build {
        int32_t Temp_int_Loop_Counter_Variable; // 0x0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x4
        int32_t Temp_int_Array_Index_Variable; // 0x8
        int32_t Temp_int_Array_Index_Variable_1; // 0xc
        ABP_Sphinx_Puzzle_A_Manager_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_A_Manager; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        ABP_Sphinx_Puzzle_A_Crystal_C* CallFunc_Array_Get_Item; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x28
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x2c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x30
        char pad_31[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x34
        char pad_38[0x8];
        FSTR_Sphinx_Lumos CallFunc_Array_Get_Item_1; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0xa0
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0xa4
        char pad_a5[0x3];
        UChildActorComponent* CallFunc_AddComponent_ReturnValue; // 0xa8
        int32_t CallFunc_Array_Add_ReturnValue; // 0xb0
        char pad_b4[0x4];
        UChildActorComponent* CallFunc_AddComponent_ReturnValue_1; // 0xb8
        ABP_Sphinx_Puzzle_A_GlowBugs_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_A_Glow_Bugs; // 0xc0
        bool K2Node_DynamicCast_bSuccess_1; // 0xc8
        char pad_c9[0x3];
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0xcc
        ABP_Sphinx_Puzzle_A_Crystal_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_A_Crystal; // 0xd0
        bool K2Node_DynamicCast_bSuccess_2; // 0xd8
        char pad_d9[0x3];
        int32_t CallFunc_Array_Add_ReturnValue_2; // 0xdc
    }; // Size: 0xe0
    Params_Build params{};
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.K2Node_DynamicCast_AsBP_Sphinx_Puzzle_A_Manager = (ABP_Sphinx_Puzzle_A_Manager_C*)K2Node_DynamicCast_AsBP_Sphinx_Puzzle_A_Manager;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Array_Get_Item = (ABP_Sphinx_Puzzle_A_Crystal_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Get_Item_1 = (FSTR_Sphinx_Lumos)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_AddComponent_ReturnValue = (UChildActorComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_AddComponent_ReturnValue_1 = (UChildActorComponent*)CallFunc_AddComponent_ReturnValue_1;
    params.K2Node_DynamicCast_AsBP_Sphinx_Puzzle_A_Glow_Bugs = (ABP_Sphinx_Puzzle_A_GlowBugs_C*)K2Node_DynamicCast_AsBP_Sphinx_Puzzle_A_Glow_Bugs;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.K2Node_DynamicCast_AsBP_Sphinx_Puzzle_A_Crystal = (ABP_Sphinx_Puzzle_A_Crystal_C*)K2Node_DynamicCast_AsBP_Sphinx_Puzzle_A_Crystal;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.CallFunc_Array_Add_ReturnValue_2 = (int32_t)CallFunc_Array_Add_ReturnValue_2;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Lumos_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Lumos.BP_Sphinx_Puzzle_A_Lumos_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Lumos_C::DefaultSetup(FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue_2, FSTR_Sphinx_Lumos K2Node_MakeStruct_STR_Sphinx_Lumos, FTransform CallFunc_MakeTransform_ReturnValue_3, FTransform CallFunc_MakeTransform_ReturnValue_4, FSTR_Sphinx_Lumos K2Node_MakeStruct_STR_Sphinx_Lumos_1, FTransform CallFunc_MakeTransform_ReturnValue_5, FSTR_Sphinx_Lumos K2Node_MakeStruct_STR_Sphinx_Lumos_2, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Lumos.BP_Sphinx_Puzzle_A_Lumos_C.DefaultSetup"));
    struct Params_DefaultSetup {
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x0
        FTransform CallFunc_MakeTransform_ReturnValue_1; // 0x30
        FTransform CallFunc_MakeTransform_ReturnValue_2; // 0x60
        FSTR_Sphinx_Lumos K2Node_MakeStruct_STR_Sphinx_Lumos; // 0x90
        FTransform CallFunc_MakeTransform_ReturnValue_3; // 0xf0
        FTransform CallFunc_MakeTransform_ReturnValue_4; // 0x120
        FSTR_Sphinx_Lumos K2Node_MakeStruct_STR_Sphinx_Lumos_1; // 0x150
        FTransform CallFunc_MakeTransform_ReturnValue_5; // 0x1b0
        FSTR_Sphinx_Lumos K2Node_MakeStruct_STR_Sphinx_Lumos_2; // 0x1e0
        int32_t CallFunc_Array_Add_ReturnValue; // 0x240
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x244
        int32_t CallFunc_Array_Add_ReturnValue_2; // 0x248
    }; // Size: 0x24c
    Params_DefaultSetup params{};
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue_1 = (FTransform)CallFunc_MakeTransform_ReturnValue_1;
    params.CallFunc_MakeTransform_ReturnValue_2 = (FTransform)CallFunc_MakeTransform_ReturnValue_2;
    params.K2Node_MakeStruct_STR_Sphinx_Lumos = (FSTR_Sphinx_Lumos)K2Node_MakeStruct_STR_Sphinx_Lumos;
    params.CallFunc_MakeTransform_ReturnValue_3 = (FTransform)CallFunc_MakeTransform_ReturnValue_3;
    params.CallFunc_MakeTransform_ReturnValue_4 = (FTransform)CallFunc_MakeTransform_ReturnValue_4;
    params.K2Node_MakeStruct_STR_Sphinx_Lumos_1 = (FSTR_Sphinx_Lumos)K2Node_MakeStruct_STR_Sphinx_Lumos_1;
    params.CallFunc_MakeTransform_ReturnValue_5 = (FTransform)CallFunc_MakeTransform_ReturnValue_5;
    params.K2Node_MakeStruct_STR_Sphinx_Lumos_2 = (FSTR_Sphinx_Lumos)K2Node_MakeStruct_STR_Sphinx_Lumos_2;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue_2 = (int32_t)CallFunc_Array_Add_ReturnValue_2;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Lumos_C::NotifyCurrentState0(EInteractiveState CurrentObjectState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Lumos.BP_Sphinx_Puzzle_A_Lumos_C.NotifyCurrentState"));
    struct Params_NotifyCurrentState {
        EInteractiveState CurrentObjectState; // 0x0
    }; // Size: 0x1
    Params_NotifyCurrentState params{};
    params.CurrentObjectState = (EInteractiveState)CurrentObjectState;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Lumos_C::Solved() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Lumos.BP_Sphinx_Puzzle_A_Lumos_C.Solved"));
    struct Params_Solved {
    }; // Size: 0x0
    Params_Solved params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Lumos_C::PuzzleStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Lumos.BP_Sphinx_Puzzle_A_Lumos_C.PuzzleStart"));
    struct Params_PuzzleStart {
    }; // Size: 0x0
    Params_PuzzleStart params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Lumos_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Lumos.BP_Sphinx_Puzzle_A_Lumos_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Lumos_C::BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/A-Lumos/BP_Sphinx_Puzzle_A_Lumos.BP_Sphinx_Puzzle_A_Lumos_C.BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature"));
    struct Params_BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_A_Lumos_C::ExecuteUbergraph_BP_Sphinx_Puzzle_A_Lumos(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2, int32_t Temp_int_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Variable_4, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_4, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_AutoSaveGameData_ReturnValue, int32_t Temp_int_Variable_5, bool Temp_bool_Has_Been_Initd_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_5, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, EInteractiveState K2Node_Event_CurrentObjectState, EInteractiveState K2Node_Event_state, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, ABP_Sphinx_Puzzle_A_Crystal_C* CallFunc_Array_Get_Item, ABP_Sphinx_Puzzle_A_GlowBugs_C* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, ABP_Sphinx_Puzzle_A_GlowBugs_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, ABP_Sphinx_Puzzle_A_Crystal_C* CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3) {}
