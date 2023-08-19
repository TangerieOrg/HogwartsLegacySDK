#include "ABP_SphinxPuzzle_Base_C.hpp"
#include "ABP_Sphinx_Puzzle_H_Base_C.hpp"
#include "ABP_Sphinx_Puzzle_H_Manager_C.hpp"
#include "ABP_Sphinx_Puzzle_H_Part_C.hpp"
#include "ABP_Sphinx_Puzzle_H_StupefyTarget_C.hpp"
#include "EInteractiveState.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
ABP_Sphinx_Puzzle_H_StupefyTarget_C* ABP_Sphinx_Puzzle_H_StupefyTarget_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/H-StupefyTargets/BP_Sphinx_Puzzle_H_StupefyTarget.BP_Sphinx_Puzzle_H_StupefyTarget_C");
    return (ABP_Sphinx_Puzzle_H_StupefyTarget_C*)res;
}
void ABP_Sphinx_Puzzle_H_StupefyTarget_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/H-StupefyTargets/BP_Sphinx_Puzzle_H_StupefyTarget.BP_Sphinx_Puzzle_H_StupefyTarget_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_H_StupefyTarget_C::NotifyBeginPuzzle0(EInteractiveState State) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/H-StupefyTargets/BP_Sphinx_Puzzle_H_StupefyTarget.BP_Sphinx_Puzzle_H_StupefyTarget_C.NotifyBeginPuzzle"));
    struct Params_NotifyBeginPuzzle {
        EInteractiveState State; // 0x0
    }; // Size: 0x1
    Params_NotifyBeginPuzzle params{};
    params.State = (EInteractiveState)State;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_H_StupefyTarget_C::Build0(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, ABP_Sphinx_Puzzle_H_Manager_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_H_Manager, bool K2Node_DynamicCast_bSuccess, FTransform CallFunc_Array_Get_Item, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UChildActorComponent* CallFunc_AddComponent_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, ABP_Sphinx_Puzzle_H_Base_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_H_Base, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_Array_Add_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, FVector CallFunc_InverseTransformLocation_ReturnValue, FRotator CallFunc_InverseTransformRotation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UChildActorComponent* CallFunc_AddComponent_ReturnValue_1, ABP_Sphinx_Puzzle_H_Part_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_H_Part, bool K2Node_DynamicCast_bSuccess_2, int32_t CallFunc_Array_Add_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/H-StupefyTargets/BP_Sphinx_Puzzle_H_StupefyTarget.BP_Sphinx_Puzzle_H_StupefyTarget_C.Build"));
    struct Params_Build {
        int32_t Temp_int_Loop_Counter_Variable; // 0x0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x4
        char pad_8[0x8];
        FTransform CallFunc_GetTransform_ReturnValue; // 0x10
        int32_t Temp_int_Array_Index_Variable; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue; // 0x44
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x48
        char pad_49[0x7];
        ABP_Sphinx_Puzzle_H_Manager_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_H_Manager; // 0x50
        bool K2Node_DynamicCast_bSuccess; // 0x58
        char pad_59[0x7];
        FTransform CallFunc_Array_Get_Item; // 0x60
        FVector CallFunc_BreakTransform_Location; // 0x90
        FRotator CallFunc_BreakTransform_Rotation; // 0x9c
        FVector CallFunc_BreakTransform_Scale; // 0xa8
        char pad_b4[0x4];
        UChildActorComponent* CallFunc_AddComponent_ReturnValue; // 0xb8
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0xc0
        bool CallFunc_Less_IntInt_ReturnValue; // 0xc4
        char pad_c5[0x3];
        ABP_Sphinx_Puzzle_H_Base_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_H_Base; // 0xc8
        bool K2Node_DynamicCast_bSuccess_1; // 0xd0
        char pad_d1[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0xd4
        char pad_d8[0x8];
        FTransform CallFunc_GetSocketTransform_ReturnValue; // 0xe0
        FVector CallFunc_BreakTransform_Location_1; // 0x110
        FRotator CallFunc_BreakTransform_Rotation_1; // 0x11c
        FVector CallFunc_BreakTransform_Scale_1; // 0x128
        FVector CallFunc_InverseTransformLocation_ReturnValue; // 0x134
        FRotator CallFunc_InverseTransformRotation_ReturnValue; // 0x140
        char pad_14c[0x4];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x150
        UChildActorComponent* CallFunc_AddComponent_ReturnValue_1; // 0x180
        ABP_Sphinx_Puzzle_H_Part_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_H_Part; // 0x188
        bool K2Node_DynamicCast_bSuccess_2; // 0x190
        char pad_191[0x3];
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x194
    }; // Size: 0x198
    Params_Build params{};
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetTransform_ReturnValue = (FTransform)CallFunc_GetTransform_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Sphinx_Puzzle_H_Manager = (ABP_Sphinx_Puzzle_H_Manager_C*)K2Node_DynamicCast_AsBP_Sphinx_Puzzle_H_Manager;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Array_Get_Item = (FTransform)CallFunc_Array_Get_Item;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_AddComponent_ReturnValue = (UChildActorComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Sphinx_Puzzle_H_Base = (ABP_Sphinx_Puzzle_H_Base_C*)K2Node_DynamicCast_AsBP_Sphinx_Puzzle_H_Base;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_GetSocketTransform_ReturnValue = (FTransform)CallFunc_GetSocketTransform_ReturnValue;
    params.CallFunc_BreakTransform_Location_1 = (FVector)CallFunc_BreakTransform_Location_1;
    params.CallFunc_BreakTransform_Rotation_1 = (FRotator)CallFunc_BreakTransform_Rotation_1;
    params.CallFunc_BreakTransform_Scale_1 = (FVector)CallFunc_BreakTransform_Scale_1;
    params.CallFunc_InverseTransformLocation_ReturnValue = (FVector)CallFunc_InverseTransformLocation_ReturnValue;
    params.CallFunc_InverseTransformRotation_ReturnValue = (FRotator)CallFunc_InverseTransformRotation_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_AddComponent_ReturnValue_1 = (UChildActorComponent*)CallFunc_AddComponent_ReturnValue_1;
    params.K2Node_DynamicCast_AsBP_Sphinx_Puzzle_H_Part = (ABP_Sphinx_Puzzle_H_Part_C*)K2Node_DynamicCast_AsBP_Sphinx_Puzzle_H_Part;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_H_StupefyTarget_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/H-StupefyTargets/BP_Sphinx_Puzzle_H_StupefyTarget.BP_Sphinx_Puzzle_H_StupefyTarget_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_H_StupefyTarget_C::NotifyCurrentState0(EInteractiveState CurrentObjectState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/H-StupefyTargets/BP_Sphinx_Puzzle_H_StupefyTarget.BP_Sphinx_Puzzle_H_StupefyTarget_C.NotifyCurrentState"));
    struct Params_NotifyCurrentState {
        EInteractiveState CurrentObjectState; // 0x0
    }; // Size: 0x1
    Params_NotifyCurrentState params{};
    params.CurrentObjectState = (EInteractiveState)CurrentObjectState;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_H_StupefyTarget_C::Solved() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/H-StupefyTargets/BP_Sphinx_Puzzle_H_StupefyTarget.BP_Sphinx_Puzzle_H_StupefyTarget_C.Solved"));
    struct Params_Solved {
    }; // Size: 0x0
    Params_Solved params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_H_StupefyTarget_C::PuzzleStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/H-StupefyTargets/BP_Sphinx_Puzzle_H_StupefyTarget.BP_Sphinx_Puzzle_H_StupefyTarget_C.PuzzleStart"));
    struct Params_PuzzleStart {
    }; // Size: 0x0
    Params_PuzzleStart params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_H_StupefyTarget_C::BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/H-StupefyTargets/BP_Sphinx_Puzzle_H_StupefyTarget.BP_Sphinx_Puzzle_H_StupefyTarget_C.BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature"));
    struct Params_BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_H_StupefyTarget_C::ExecuteUbergraph_BP_Sphinx_Puzzle_H_StupefyTarget(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2, int32_t Temp_int_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Variable_4, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_4, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, int32_t Temp_int_Variable_5, int32_t CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_AutoSaveGameData_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, EInteractiveState K2Node_Event_CurrentObjectState, EInteractiveState K2Node_Event_state, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, ABP_Sphinx_Puzzle_H_Part_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, ABP_Sphinx_Puzzle_H_Part_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, ABP_Sphinx_Puzzle_H_Part_C* CallFunc_Array_Get_Item_2, ABP_Sphinx_Puzzle_H_Base_C* CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_2, ABP_Sphinx_Puzzle_H_Base_C* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t CallFunc_Array_Length_ReturnValue_3, int32_t CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, ABP_Sphinx_Puzzle_H_Part_C* CallFunc_Array_Get_Item_5, int32_t CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5) {}
