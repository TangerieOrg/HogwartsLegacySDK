#include "AActor.hpp"
#include "ABP_OL_Spline_Parent_C.hpp"
#include "FHitResult.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USplineComponent.hpp"
#include "USplineMeshComponent.hpp"
#include "UStaticMesh.hpp"
ABP_OL_Spline_Parent_C* ABP_OL_Spline_Parent_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/BluePrints/BP_OL_Spline_Parent.BP_OL_Spline_Parent_C");
    return (ABP_OL_Spline_Parent_C*)res;
}
void ABP_OL_Spline_Parent_C::ReOrder_II(UStaticMesh* A, UStaticMesh* B, UStaticMesh* C, UStaticMesh* D, TArray<int32_t> INDEX_HOLDER, int32_t Temp_int_Array_Index_Variable, TArray<int32_t>& CallFunc_Map_Values_Values, TArray<int32_t>& CallFunc_Map_Keys_Keys, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, TArray<int32_t>& CallFunc_Map_Values_Values_1, TArray<USplineMeshComponent*>& CallFunc_Map_Keys_Keys_1, int32_t CallFunc_Array_Get_Item_2, bool CallFunc_Array_Contains_ReturnValue, USplineMeshComponent* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable, UStaticMesh* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/BluePrints/BP_OL_Spline_Parent.BP_OL_Spline_Parent_C.ReOrder_II"));
    struct Params_ReOrder_II {
        UStaticMesh* A; // 0x0
        UStaticMesh* B; // 0x8
        UStaticMesh* C; // 0x10
        UStaticMesh* D; // 0x18
        TArray<int32_t> INDEX_HOLDER; // 0x20
        int32_t Temp_int_Array_Index_Variable; // 0x30
        char pad_34[0x4];
        TArray<int32_t> CallFunc_Map_Values_Values; // 0x38
        TArray<int32_t> CallFunc_Map_Keys_Keys; // 0x48
        int32_t CallFunc_Array_Get_Item; // 0x58
        int32_t CallFunc_Array_Get_Item_1; // 0x5c
        int32_t CallFunc_Array_Length_ReturnValue; // 0x60
        int32_t Temp_int_Loop_Counter_Variable; // 0x64
        TArray<int32_t> CallFunc_Map_Values_Values_1; // 0x68
        TArray<USplineMeshComponent*> CallFunc_Map_Keys_Keys_1; // 0x78
        int32_t CallFunc_Array_Get_Item_2; // 0x88
        bool CallFunc_Array_Contains_ReturnValue; // 0x8c
        char pad_8d[0x3];
        USplineMeshComponent* CallFunc_Array_Get_Item_3; // 0x90
        bool CallFunc_Less_IntInt_ReturnValue; // 0x98
        char pad_99[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x9c
        int32_t Temp_int_Variable; // 0xa0
        char pad_a4[0x4];
        UStaticMesh* K2Node_Select_Default; // 0xa8
        bool CallFunc_SetStaticMesh_ReturnValue; // 0xb0
    }; // Size: 0xb1
    Params_ReOrder_II params{};
    params.A = (UStaticMesh*)A;
    params.B = (UStaticMesh*)B;
    params.C = (UStaticMesh*)C;
    params.D = (UStaticMesh*)D;
    params.INDEX_HOLDER = (TArray<int32_t>)INDEX_HOLDER;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Map_Values_Values = (TArray<int32_t>)CallFunc_Map_Values_Values;
    params.CallFunc_Map_Keys_Keys = (TArray<int32_t>)CallFunc_Map_Keys_Keys;
    params.CallFunc_Array_Get_Item = (int32_t)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (int32_t)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Map_Values_Values_1 = (TArray<int32_t>)CallFunc_Map_Values_Values_1;
    params.CallFunc_Map_Keys_Keys_1 = (TArray<USplineMeshComponent*>)CallFunc_Map_Keys_Keys_1;
    params.CallFunc_Array_Get_Item_2 = (int32_t)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_Array_Get_Item_3 = (USplineMeshComponent*)CallFunc_Array_Get_Item_3;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.K2Node_Select_Default = (UStaticMesh*)K2Node_Select_Default;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_Map_Keys_Keys = params.CallFunc_Map_Keys_Keys;
    CallFunc_Map_Values_Values = params.CallFunc_Map_Values_Values;
    CallFunc_Map_Keys_Keys_1 = params.CallFunc_Map_Keys_Keys_1;
    CallFunc_Map_Values_Values_1 = params.CallFunc_Map_Values_Values_1;
}
void ABP_OL_Spline_Parent_C::Array_Compare(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_3, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_SelfCompare_containsDuplicate, int32_t CallFunc_SelfCompare_indexOfDuplicate, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32_t CallFunc_Array_Get_Item_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_3, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_SelfCompare_containsDuplicate_1, int32_t CallFunc_SelfCompare_indexOfDuplicate_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_4, bool CallFunc_Array_Contains_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, int32_t CallFunc_Array_Get_Item_2, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_6, bool CallFunc_Array_Contains_ReturnValue_7, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_SelfCompare_containsDuplicate_2, int32_t CallFunc_SelfCompare_indexOfDuplicate_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, int32_t CallFunc_Array_Length_ReturnValue_3, int32_t CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_9, bool CallFunc_Array_Contains_ReturnValue_10, bool CallFunc_Array_Contains_ReturnValue_11, bool CallFunc_SelfCompare_containsDuplicate_3, int32_t CallFunc_SelfCompare_indexOfDuplicate_3, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/BluePrints/BP_OL_Spline_Parent.BP_OL_Spline_Parent_C.Array Compare"));
    struct Params_Array_Compare {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t Temp_int_Loop_Counter_Variable_1; // 0xc
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x10
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x18
        int32_t Temp_int_Array_Index_Variable_1; // 0x1c
        int32_t Temp_int_Array_Index_Variable_2; // 0x20
        int32_t Temp_int_Loop_Counter_Variable_3; // 0x24
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0x28
        int32_t Temp_int_Array_Index_Variable_3; // 0x2c
        int32_t CallFunc_Array_Get_Item; // 0x30
        int32_t CallFunc_Array_Length_ReturnValue; // 0x34
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x38
        bool CallFunc_Less_IntInt_ReturnValue; // 0x39
        bool CallFunc_Array_Contains_ReturnValue; // 0x3a
        bool CallFunc_SelfCompare_containsDuplicate; // 0x3b
        int32_t CallFunc_SelfCompare_indexOfDuplicate; // 0x3c
        bool CallFunc_Array_Contains_ReturnValue_1; // 0x40
        bool CallFunc_Array_Contains_ReturnValue_2; // 0x41
        bool CallFunc_BooleanOR_ReturnValue; // 0x42
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x43
        int32_t CallFunc_Array_Get_Item_1; // 0x44
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x48
        bool CallFunc_Greater_IntInt_ReturnValue_1; // 0x49
        bool CallFunc_Array_Contains_ReturnValue_3; // 0x4a
        char pad_4b[0x1];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x4c
        bool CallFunc_SelfCompare_containsDuplicate_1; // 0x50
        char pad_51[0x3];
        int32_t CallFunc_SelfCompare_indexOfDuplicate_1; // 0x54
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x58
        bool CallFunc_Array_Contains_ReturnValue_4; // 0x59
        bool CallFunc_Array_Contains_ReturnValue_5; // 0x5a
        bool CallFunc_BooleanOR_ReturnValue_3; // 0x5b
        bool CallFunc_BooleanOR_ReturnValue_4; // 0x5c
        char pad_5d[0x3];
        int32_t CallFunc_Array_Get_Item_2; // 0x60
        bool CallFunc_BooleanOR_ReturnValue_5; // 0x64
        bool CallFunc_Greater_IntInt_ReturnValue_2; // 0x65
        bool CallFunc_Array_Contains_ReturnValue_6; // 0x66
        bool CallFunc_Array_Contains_ReturnValue_7; // 0x67
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x68
        bool CallFunc_SelfCompare_containsDuplicate_2; // 0x6c
        char pad_6d[0x3];
        int32_t CallFunc_SelfCompare_indexOfDuplicate_2; // 0x70
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x74
        bool CallFunc_Array_Contains_ReturnValue_8; // 0x75
        bool CallFunc_BooleanOR_ReturnValue_6; // 0x76
        bool CallFunc_BooleanOR_ReturnValue_7; // 0x77
        bool CallFunc_BooleanOR_ReturnValue_8; // 0x78
        char pad_79[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_3; // 0x7c
        int32_t CallFunc_Array_Get_Item_3; // 0x80
        bool CallFunc_Less_IntInt_ReturnValue_3; // 0x84
        bool CallFunc_Greater_IntInt_ReturnValue_3; // 0x85
        bool CallFunc_Array_Contains_ReturnValue_9; // 0x86
        bool CallFunc_Array_Contains_ReturnValue_10; // 0x87
        bool CallFunc_Array_Contains_ReturnValue_11; // 0x88
        bool CallFunc_SelfCompare_containsDuplicate_3; // 0x89
        char pad_8a[0x2];
        int32_t CallFunc_SelfCompare_indexOfDuplicate_3; // 0x8c
        bool CallFunc_BooleanOR_ReturnValue_9; // 0x90
        bool CallFunc_BooleanOR_ReturnValue_10; // 0x91
        bool CallFunc_BooleanOR_ReturnValue_11; // 0x92
    }; // Size: 0x93
    Params_Array_Compare params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.Temp_int_Loop_Counter_Variable_3 = (int32_t)Temp_int_Loop_Counter_Variable_3;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.Temp_int_Array_Index_Variable_3 = (int32_t)Temp_int_Array_Index_Variable_3;
    params.CallFunc_Array_Get_Item = (int32_t)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_SelfCompare_containsDuplicate = (bool)CallFunc_SelfCompare_containsDuplicate;
    params.CallFunc_SelfCompare_indexOfDuplicate = (int32_t)CallFunc_SelfCompare_indexOfDuplicate;
    params.CallFunc_Array_Contains_ReturnValue_1 = (bool)CallFunc_Array_Contains_ReturnValue_1;
    params.CallFunc_Array_Contains_ReturnValue_2 = (bool)CallFunc_Array_Contains_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_Array_Get_Item_1 = (int32_t)CallFunc_Array_Get_Item_1;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_Greater_IntInt_ReturnValue_1 = (bool)CallFunc_Greater_IntInt_ReturnValue_1;
    params.CallFunc_Array_Contains_ReturnValue_3 = (bool)CallFunc_Array_Contains_ReturnValue_3;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_SelfCompare_containsDuplicate_1 = (bool)CallFunc_SelfCompare_containsDuplicate_1;
    params.CallFunc_SelfCompare_indexOfDuplicate_1 = (int32_t)CallFunc_SelfCompare_indexOfDuplicate_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Array_Contains_ReturnValue_4 = (bool)CallFunc_Array_Contains_ReturnValue_4;
    params.CallFunc_Array_Contains_ReturnValue_5 = (bool)CallFunc_Array_Contains_ReturnValue_5;
    params.CallFunc_BooleanOR_ReturnValue_3 = (bool)CallFunc_BooleanOR_ReturnValue_3;
    params.CallFunc_BooleanOR_ReturnValue_4 = (bool)CallFunc_BooleanOR_ReturnValue_4;
    params.CallFunc_Array_Get_Item_2 = (int32_t)CallFunc_Array_Get_Item_2;
    params.CallFunc_BooleanOR_ReturnValue_5 = (bool)CallFunc_BooleanOR_ReturnValue_5;
    params.CallFunc_Greater_IntInt_ReturnValue_2 = (bool)CallFunc_Greater_IntInt_ReturnValue_2;
    params.CallFunc_Array_Contains_ReturnValue_6 = (bool)CallFunc_Array_Contains_ReturnValue_6;
    params.CallFunc_Array_Contains_ReturnValue_7 = (bool)CallFunc_Array_Contains_ReturnValue_7;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_SelfCompare_containsDuplicate_2 = (bool)CallFunc_SelfCompare_containsDuplicate_2;
    params.CallFunc_SelfCompare_indexOfDuplicate_2 = (int32_t)CallFunc_SelfCompare_indexOfDuplicate_2;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_Array_Contains_ReturnValue_8 = (bool)CallFunc_Array_Contains_ReturnValue_8;
    params.CallFunc_BooleanOR_ReturnValue_6 = (bool)CallFunc_BooleanOR_ReturnValue_6;
    params.CallFunc_BooleanOR_ReturnValue_7 = (bool)CallFunc_BooleanOR_ReturnValue_7;
    params.CallFunc_BooleanOR_ReturnValue_8 = (bool)CallFunc_BooleanOR_ReturnValue_8;
    params.CallFunc_Array_Length_ReturnValue_3 = (int32_t)CallFunc_Array_Length_ReturnValue_3;
    params.CallFunc_Array_Get_Item_3 = (int32_t)CallFunc_Array_Get_Item_3;
    params.CallFunc_Less_IntInt_ReturnValue_3 = (bool)CallFunc_Less_IntInt_ReturnValue_3;
    params.CallFunc_Greater_IntInt_ReturnValue_3 = (bool)CallFunc_Greater_IntInt_ReturnValue_3;
    params.CallFunc_Array_Contains_ReturnValue_9 = (bool)CallFunc_Array_Contains_ReturnValue_9;
    params.CallFunc_Array_Contains_ReturnValue_10 = (bool)CallFunc_Array_Contains_ReturnValue_10;
    params.CallFunc_Array_Contains_ReturnValue_11 = (bool)CallFunc_Array_Contains_ReturnValue_11;
    params.CallFunc_SelfCompare_containsDuplicate_3 = (bool)CallFunc_SelfCompare_containsDuplicate_3;
    params.CallFunc_SelfCompare_indexOfDuplicate_3 = (int32_t)CallFunc_SelfCompare_indexOfDuplicate_3;
    params.CallFunc_BooleanOR_ReturnValue_9 = (bool)CallFunc_BooleanOR_ReturnValue_9;
    params.CallFunc_BooleanOR_ReturnValue_10 = (bool)CallFunc_BooleanOR_ReturnValue_10;
    params.CallFunc_BooleanOR_ReturnValue_11 = (bool)CallFunc_BooleanOR_ReturnValue_11;
    ProcessEvent(func, &params);
}
void ABP_OL_Spline_Parent_C::SelfCompare(TArray<int32_t>& ArrayInput, bool& containsDuplicate, int32_t& indexOfDuplicate, TArray<int32_t> Temp, int32_t CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/BluePrints/BP_OL_Spline_Parent.BP_OL_Spline_Parent_C.SelfCompare"));
    struct Params_SelfCompare {
        TArray<int32_t> ArrayInput; // 0x0
        bool containsDuplicate; // 0x10
        char pad_11[0x3];
        int32_t indexOfDuplicate; // 0x14
        TArray<int32_t> Temp; // 0x18
        int32_t CallFunc_Array_Length_ReturnValue; // 0x28
        bool Temp_bool_True_if_break_was_hit_Variable; // 0x2c
        char pad_2d[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0x30
        int32_t CallFunc_Array_Get_Item; // 0x34
        bool CallFunc_Not_PreBool_ReturnValue; // 0x38
        char pad_39[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0x3c
        int32_t CallFunc_Array_Add_ReturnValue; // 0x40
        bool CallFunc_Array_Contains_ReturnValue; // 0x44
        bool CallFunc_Less_IntInt_ReturnValue; // 0x45
        bool CallFunc_BooleanAND_ReturnValue; // 0x46
        char pad_47[0x1];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x48
    }; // Size: 0x4c
    Params_SelfCompare params{};
    params.ArrayInput = (TArray<int32_t>)ArrayInput;
    params.containsDuplicate = (bool)containsDuplicate;
    params.indexOfDuplicate = (int32_t)indexOfDuplicate;
    params.Temp = (TArray<int32_t>)Temp;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_bool_True_if_break_was_hit_Variable = (bool)Temp_bool_True_if_break_was_hit_Variable;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Get_Item = (int32_t)CallFunc_Array_Get_Item;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    ArrayInput = params.ArrayInput;
    containsDuplicate = params.containsDuplicate;
    indexOfDuplicate = params.indexOfDuplicate;
}
void ABP_OL_Spline_Parent_C::Show_Location_Tags(USplineComponent* Spline, int32_t Last_Index, float Section_Length, FTransform Temp_struct_Variable, int32_t Temp_int_Variable) {}
void ABP_OL_Spline_Parent_C::Fix_Array_Limit(int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_3, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, int32_t CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/BluePrints/BP_OL_Spline_Parent.BP_OL_Spline_Parent_C.Fix Array Limit"));
    struct Params_Fix_Array_Limit {
        int32_t Temp_int_Loop_Counter_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0xc
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x10
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x14
        int32_t Temp_int_Array_Index_Variable; // 0x18
        int32_t Temp_int_Array_Index_Variable_1; // 0x1c
        int32_t Temp_int_Array_Index_Variable_2; // 0x20
        int32_t Temp_int_Loop_Counter_Variable_3; // 0x24
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0x28
        int32_t Temp_int_Array_Index_Variable_3; // 0x2c
        int32_t CallFunc_Array_Get_Item; // 0x30
        int32_t CallFunc_Array_Length_ReturnValue; // 0x34
        bool CallFunc_Less_IntInt_ReturnValue; // 0x38
        char pad_39[0x3];
        int32_t CallFunc_Array_Get_Item_1; // 0x3c
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x40
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x44
        char pad_45[0x3];
        int32_t CallFunc_Array_Get_Item_2; // 0x48
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x4c
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x50
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x51
        bool CallFunc_Greater_IntInt_ReturnValue_1; // 0x52
        bool CallFunc_Greater_IntInt_ReturnValue_2; // 0x53
        int32_t CallFunc_Array_Get_Item_3; // 0x54
        int32_t CallFunc_Array_Length_ReturnValue_3; // 0x58
        bool CallFunc_Less_IntInt_ReturnValue_3; // 0x5c
        bool CallFunc_Greater_IntInt_ReturnValue_3; // 0x5d
    }; // Size: 0x5e
    Params_Fix_Array_Limit params{};
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.Temp_int_Loop_Counter_Variable_3 = (int32_t)Temp_int_Loop_Counter_Variable_3;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.Temp_int_Array_Index_Variable_3 = (int32_t)Temp_int_Array_Index_Variable_3;
    params.CallFunc_Array_Get_Item = (int32_t)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (int32_t)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Array_Get_Item_2 = (int32_t)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue_1 = (bool)CallFunc_Greater_IntInt_ReturnValue_1;
    params.CallFunc_Greater_IntInt_ReturnValue_2 = (bool)CallFunc_Greater_IntInt_ReturnValue_2;
    params.CallFunc_Array_Get_Item_3 = (int32_t)CallFunc_Array_Get_Item_3;
    params.CallFunc_Array_Length_ReturnValue_3 = (int32_t)CallFunc_Array_Length_ReturnValue_3;
    params.CallFunc_Less_IntInt_ReturnValue_3 = (bool)CallFunc_Less_IntInt_ReturnValue_3;
    params.CallFunc_Greater_IntInt_ReturnValue_3 = (bool)CallFunc_Greater_IntInt_ReturnValue_3;
    ProcessEvent(func, &params);
}
void ABP_OL_Spline_Parent_C::Relocate_Spline(USplineComponent* Spline, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/BluePrints/BP_OL_Spline_Parent.BP_OL_Spline_Parent_C.Relocate Spline"));
    struct Params_Relocate_Spline {
        USplineComponent* Spline; // 0x0
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x8
        FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult; // 0x14
    }; // Size: 0x9c
    Params_Relocate_Spline params{};
    params.Spline = (USplineComponent*)Spline;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_K2_SetWorldLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetWorldLocation_SweepHitResult;
    ProcessEvent(func, &params);
}
void ABP_OL_Spline_Parent_C::Check_Array_Limit(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_3, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Array_Get_Item_2, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, int32_t CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/BluePrints/BP_OL_Spline_Parent.BP_OL_Spline_Parent_C.Check Array Limit"));
    struct Params_Check_Array_Limit {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t Temp_int_Loop_Counter_Variable_1; // 0xc
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x10
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x18
        int32_t Temp_int_Array_Index_Variable_1; // 0x1c
        int32_t Temp_int_Array_Index_Variable_2; // 0x20
        int32_t Temp_int_Loop_Counter_Variable_3; // 0x24
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0x28
        int32_t Temp_int_Array_Index_Variable_3; // 0x2c
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x30
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x40
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x50
        FString CallFunc_Concat_StrStr_ReturnValue_3; // 0x60
        int32_t CallFunc_Array_Get_Item; // 0x70
        int32_t CallFunc_Array_Get_Item_1; // 0x74
        int32_t CallFunc_Array_Length_ReturnValue; // 0x78
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x7c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x80
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x81
        char pad_82[0x2];
        int32_t CallFunc_Array_Get_Item_2; // 0x84
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x88
        char pad_89[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x8c
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x90
        bool CallFunc_Greater_IntInt_ReturnValue_1; // 0x91
        bool CallFunc_Greater_IntInt_ReturnValue_2; // 0x92
        char pad_93[0x1];
        int32_t CallFunc_Array_Get_Item_3; // 0x94
        int32_t CallFunc_Array_Length_ReturnValue_3; // 0x98
        bool CallFunc_Less_IntInt_ReturnValue_3; // 0x9c
        bool CallFunc_Greater_IntInt_ReturnValue_3; // 0x9d
    }; // Size: 0x9e
    Params_Check_Array_Limit params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.Temp_int_Loop_Counter_Variable_3 = (int32_t)Temp_int_Loop_Counter_Variable_3;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.Temp_int_Array_Index_Variable_3 = (int32_t)Temp_int_Array_Index_Variable_3;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.CallFunc_Concat_StrStr_ReturnValue_3 = (FString)CallFunc_Concat_StrStr_ReturnValue_3;
    params.CallFunc_Array_Get_Item = (int32_t)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (int32_t)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Array_Get_Item_2 = (int32_t)CallFunc_Array_Get_Item_2;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_Greater_IntInt_ReturnValue_1 = (bool)CallFunc_Greater_IntInt_ReturnValue_1;
    params.CallFunc_Greater_IntInt_ReturnValue_2 = (bool)CallFunc_Greater_IntInt_ReturnValue_2;
    params.CallFunc_Array_Get_Item_3 = (int32_t)CallFunc_Array_Get_Item_3;
    params.CallFunc_Array_Length_ReturnValue_3 = (int32_t)CallFunc_Array_Length_ReturnValue_3;
    params.CallFunc_Less_IntInt_ReturnValue_3 = (bool)CallFunc_Less_IntInt_ReturnValue_3;
    params.CallFunc_Greater_IntInt_ReturnValue_3 = (bool)CallFunc_Greater_IntInt_ReturnValue_3;
    ProcessEvent(func, &params);
}
void ABP_OL_Spline_Parent_C::Re_Order_Meshes() {}
