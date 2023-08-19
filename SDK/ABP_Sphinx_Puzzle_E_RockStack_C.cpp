#include "ABP_SphinxPuzzle_Base_C.hpp"
#include "ABP_Sphinx_Puzzle_E_Base_C.hpp"
#include "ABP_Sphinx_Puzzle_E_RockStack_C.hpp"
#include "ABP_Sphinx_Puzzle_E_Rock_C.hpp"
#include "ABP_Sphinx_Puzzle_E_Stack_C.hpp"
#include "EInteractiveState.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FSTR_Sphinx_Rock_Stack.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
ABP_Sphinx_Puzzle_E_RockStack_C* ABP_Sphinx_Puzzle_E_RockStack_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C");
    return (ABP_Sphinx_Puzzle_E_RockStack_C*)res;
}
void ABP_Sphinx_Puzzle_E_RockStack_C::NotifyCurrentState(EInteractiveState CurrentObjectState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.NotifyCurrentState"));
    struct Params_NotifyCurrentState {
        EInteractiveState CurrentObjectState; // 0x0
    }; // Size: 0x1
    Params_NotifyCurrentState params{};
    params.CurrentObjectState = (EInteractiveState)CurrentObjectState;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_RockStack_C::Build(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_1, FTransform Temp_struct_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, UChildActorComponent* CallFunc_AddComponent_ReturnValue, ABP_Sphinx_Puzzle_E_Stack_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Stack, bool K2Node_DynamicCast_bSuccess, ABP_Sphinx_Puzzle_E_Base_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, ABP_Sphinx_Puzzle_E_Stack_C* CallFunc_Array_Get_Item_1, ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_3, FSTR_Sphinx_Rock_Stack CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_2, TArray<FTransform>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue_2, FTransform CallFunc_Array_Get_Item_4, UChildActorComponent* CallFunc_AddComponent_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, ABP_Sphinx_Puzzle_E_Rock_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Rock, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_Array_Add_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_2, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, FVector CallFunc_BreakTransform_Location_2, FRotator CallFunc_BreakTransform_Rotation_2, FVector CallFunc_BreakTransform_Scale_2, FVector CallFunc_BreakTransform_Location_3, FRotator CallFunc_BreakTransform_Rotation_3, FVector CallFunc_BreakTransform_Scale_3, FVector CallFunc_Add_VectorVector_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_3, FTransform CallFunc_MakeTransform_ReturnValue_2, FTransform CallFunc_MakeTransform_ReturnValue_3, FSTR_Sphinx_Rock_Stack K2Node_MakeStruct_STR_Sphinx_Rock_Stack, UChildActorComponent* CallFunc_AddComponent_ReturnValue_2, ABP_Sphinx_Puzzle_E_Base_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Base, bool K2Node_DynamicCast_bSuccess_2, int32_t CallFunc_Array_Length_ReturnValue_4, int32_t CallFunc_Array_Add_ReturnValue_3, bool CallFunc_NotEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.Build"));
    struct Params_Build {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t Temp_int_Array_Index_Variable_1; // 0xc
        int32_t Temp_int_Array_Index_Variable_2; // 0x10
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x14
        char pad_18[0x8];
        FTransform Temp_struct_Variable; // 0x20
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x50
        char pad_54[0x4];
        UChildActorComponent* CallFunc_AddComponent_ReturnValue; // 0x58
        ABP_Sphinx_Puzzle_E_Stack_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Stack; // 0x60
        bool K2Node_DynamicCast_bSuccess; // 0x68
        char pad_69[0x7];
        ABP_Sphinx_Puzzle_E_Base_C* CallFunc_Array_Get_Item; // 0x70
        int32_t CallFunc_Array_Length_ReturnValue; // 0x78
        int32_t Temp_int_Variable; // 0x7c
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x80
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x84
        int32_t CallFunc_Array_Add_ReturnValue; // 0x88
        bool CallFunc_Less_IntInt_ReturnValue; // 0x8c
        char pad_8d[0x3];
        ABP_Sphinx_Puzzle_E_Stack_C* CallFunc_Array_Get_Item_1; // 0x90
        ABP_Sphinx_Puzzle_E_Rock_C* CallFunc_Array_Get_Item_2; // 0x98
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0xa0
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0xa4
        char pad_a5[0x3];
        int32_t CallFunc_Percent_IntInt_ReturnValue; // 0xa8
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0xac
        char pad_ad[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0xb0
        char pad_b4[0xc];
        FSTR_Sphinx_Rock_Stack CallFunc_Array_Get_Item_3; // 0xc0
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x1f0
        char pad_1f4[0x4];
        TArray<FTransform> K2Node_MakeArray_Array; // 0x1f8
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x208
        char pad_209[0x7];
        FTransform CallFunc_Array_Get_Item_4; // 0x210
        UChildActorComponent* CallFunc_AddComponent_ReturnValue_1; // 0x240
        int32_t CallFunc_Array_Length_ReturnValue_3; // 0x248
        bool CallFunc_Less_IntInt_ReturnValue_3; // 0x24c
        char pad_24d[0x3];
        ABP_Sphinx_Puzzle_E_Rock_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Rock; // 0x250
        bool K2Node_DynamicCast_bSuccess_1; // 0x258
        char pad_259[0x3];
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x25c
        int32_t CallFunc_Array_Add_ReturnValue_2; // 0x260
        FVector CallFunc_BreakTransform_Location; // 0x264
        FRotator CallFunc_BreakTransform_Rotation; // 0x270
        FVector CallFunc_BreakTransform_Scale; // 0x27c
        FVector CallFunc_BreakTransform_Location_1; // 0x288
        FRotator CallFunc_BreakTransform_Rotation_1; // 0x294
        FVector CallFunc_BreakTransform_Scale_1; // 0x2a0
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x2ac
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0x2b8
        char pad_2c4[0xc];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x2d0
        FTransform CallFunc_MakeTransform_ReturnValue_1; // 0x300
        FVector CallFunc_BreakTransform_Location_2; // 0x330
        FRotator CallFunc_BreakTransform_Rotation_2; // 0x33c
        FVector CallFunc_BreakTransform_Scale_2; // 0x348
        FVector CallFunc_BreakTransform_Location_3; // 0x354
        FRotator CallFunc_BreakTransform_Rotation_3; // 0x360
        FVector CallFunc_BreakTransform_Scale_3; // 0x36c
        FVector CallFunc_Add_VectorVector_ReturnValue_2; // 0x378
        FVector CallFunc_Add_VectorVector_ReturnValue_3; // 0x384
        FTransform CallFunc_MakeTransform_ReturnValue_2; // 0x390
        FTransform CallFunc_MakeTransform_ReturnValue_3; // 0x3c0
        FSTR_Sphinx_Rock_Stack K2Node_MakeStruct_STR_Sphinx_Rock_Stack; // 0x3f0
        UChildActorComponent* CallFunc_AddComponent_ReturnValue_2; // 0x520
        ABP_Sphinx_Puzzle_E_Base_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Base; // 0x528
        bool K2Node_DynamicCast_bSuccess_2; // 0x530
        char pad_531[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_4; // 0x534
        int32_t CallFunc_Array_Add_ReturnValue_3; // 0x538
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x53c
    }; // Size: 0x53d
    Params_Build params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_AddComponent_ReturnValue = (UChildActorComponent*)CallFunc_AddComponent_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Stack = (ABP_Sphinx_Puzzle_E_Stack_C*)K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Stack;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Array_Get_Item = (ABP_Sphinx_Puzzle_E_Base_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (ABP_Sphinx_Puzzle_E_Stack_C*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Get_Item_2 = (ABP_Sphinx_Puzzle_E_Rock_C*)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Percent_IntInt_ReturnValue = (int32_t)CallFunc_Percent_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.CallFunc_Array_Get_Item_3 = (FSTR_Sphinx_Rock_Stack)CallFunc_Array_Get_Item_3;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.K2Node_MakeArray_Array = (TArray<FTransform>)K2Node_MakeArray_Array;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_Array_Get_Item_4 = (FTransform)CallFunc_Array_Get_Item_4;
    params.CallFunc_AddComponent_ReturnValue_1 = (UChildActorComponent*)CallFunc_AddComponent_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_3 = (int32_t)CallFunc_Array_Length_ReturnValue_3;
    params.CallFunc_Less_IntInt_ReturnValue_3 = (bool)CallFunc_Less_IntInt_ReturnValue_3;
    params.K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Rock = (ABP_Sphinx_Puzzle_E_Rock_C*)K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Rock;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue_2 = (int32_t)CallFunc_Array_Add_ReturnValue_2;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_BreakTransform_Location_1 = (FVector)CallFunc_BreakTransform_Location_1;
    params.CallFunc_BreakTransform_Rotation_1 = (FRotator)CallFunc_BreakTransform_Rotation_1;
    params.CallFunc_BreakTransform_Scale_1 = (FVector)CallFunc_BreakTransform_Scale_1;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue_1 = (FTransform)CallFunc_MakeTransform_ReturnValue_1;
    params.CallFunc_BreakTransform_Location_2 = (FVector)CallFunc_BreakTransform_Location_2;
    params.CallFunc_BreakTransform_Rotation_2 = (FRotator)CallFunc_BreakTransform_Rotation_2;
    params.CallFunc_BreakTransform_Scale_2 = (FVector)CallFunc_BreakTransform_Scale_2;
    params.CallFunc_BreakTransform_Location_3 = (FVector)CallFunc_BreakTransform_Location_3;
    params.CallFunc_BreakTransform_Rotation_3 = (FRotator)CallFunc_BreakTransform_Rotation_3;
    params.CallFunc_BreakTransform_Scale_3 = (FVector)CallFunc_BreakTransform_Scale_3;
    params.CallFunc_Add_VectorVector_ReturnValue_2 = (FVector)CallFunc_Add_VectorVector_ReturnValue_2;
    params.CallFunc_Add_VectorVector_ReturnValue_3 = (FVector)CallFunc_Add_VectorVector_ReturnValue_3;
    params.CallFunc_MakeTransform_ReturnValue_2 = (FTransform)CallFunc_MakeTransform_ReturnValue_2;
    params.CallFunc_MakeTransform_ReturnValue_3 = (FTransform)CallFunc_MakeTransform_ReturnValue_3;
    params.K2Node_MakeStruct_STR_Sphinx_Rock_Stack = (FSTR_Sphinx_Rock_Stack)K2Node_MakeStruct_STR_Sphinx_Rock_Stack;
    params.CallFunc_AddComponent_ReturnValue_2 = (UChildActorComponent*)CallFunc_AddComponent_ReturnValue_2;
    params.K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Base = (ABP_Sphinx_Puzzle_E_Base_C*)K2Node_DynamicCast_AsBP_Sphinx_Puzzle_E_Base;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.CallFunc_Array_Length_ReturnValue_4 = (int32_t)CallFunc_Array_Length_ReturnValue_4;
    params.CallFunc_Array_Add_ReturnValue_3 = (int32_t)CallFunc_Array_Add_ReturnValue_3;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void ABP_Sphinx_Puzzle_E_RockStack_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_RockStack_C::NotifyBeginPuzzle(EInteractiveState State) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.NotifyBeginPuzzle"));
    struct Params_NotifyBeginPuzzle {
        EInteractiveState State; // 0x0
    }; // Size: 0x1
    Params_NotifyBeginPuzzle params{};
    params.State = (EInteractiveState)State;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_RockStack_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_RockStack_C::Solved() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.Solved"));
    struct Params_Solved {
    }; // Size: 0x0
    Params_Solved params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_RockStack_C::BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature"));
    struct Params_BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_RockStack_C::PuzzleStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.PuzzleStart"));
    struct Params_PuzzleStart {
    }; // Size: 0x0
    Params_PuzzleStart params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_RockStack_C::Error(ABP_Sphinx_Puzzle_E_Rock_C* Rock) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.Error"));
    struct Params_Error {
        ABP_Sphinx_Puzzle_E_Rock_C* Rock; // 0x0
    }; // Size: 0x8
    Params_Error params{};
    params.Rock = (ABP_Sphinx_Puzzle_E_Rock_C*)Rock;
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_RockStack_C::BaseSolved() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/E-RockStack/BP_Sphinx_Puzzle_E_RockStack.BP_Sphinx_Puzzle_E_RockStack_C.BaseSolved"));
    struct Params_BaseSolved {
    }; // Size: 0x0
    Params_BaseSolved params{};
    ProcessEvent(func, &params);
}
void ABP_Sphinx_Puzzle_E_RockStack_C::ExecuteUbergraph_BP_Sphinx_Puzzle_E_RockStack(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
