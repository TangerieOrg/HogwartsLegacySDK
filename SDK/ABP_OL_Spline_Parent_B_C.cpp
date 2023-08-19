#include "AActor.hpp"
#include "ABP_OL_Spline_Parent_B_C.hpp"
#include "FHitResult.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USplineComponent.hpp"
#include "USplineMeshComponent.hpp"
#include "UStaticMesh.hpp"
void ABP_OL_Spline_Parent_B_C::Show_Location_Tags(USplineComponent* Spline, int32_t Last_Index, float Section_Length, FTransform Temp_struct_Variable, int32_t Temp_int_Variable) {}
ABP_OL_Spline_Parent_B_C* ABP_OL_Spline_Parent_B_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/BluePrints/BP_OL_Spline_Parent_B.BP_OL_Spline_Parent_B_C");
    return (ABP_OL_Spline_Parent_B_C*)res;
}
void ABP_OL_Spline_Parent_B_C::ReOrder_II(UStaticMesh* A, UStaticMesh* B, UStaticMesh* C, UStaticMesh* D, UStaticMesh* E, UStaticMesh* F, TArray<int32_t> INDEX_HOLDER, int32_t Temp_int_Array_Index_Variable, TArray<int32_t>& CallFunc_Map_Values_Values, TArray<int32_t>& CallFunc_Map_Keys_Keys, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, TArray<int32_t>& CallFunc_Map_Values_Values_1, TArray<USplineMeshComponent*>& CallFunc_Map_Keys_Keys_1, int32_t CallFunc_Array_Get_Item_2, bool CallFunc_Array_Contains_ReturnValue, USplineMeshComponent* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable, UStaticMesh* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/BluePrints/BP_OL_Spline_Parent_B.BP_OL_Spline_Parent_B_C.ReOrder_II"));
    struct Params_ReOrder_II {
        UStaticMesh* A; // 0x0
        UStaticMesh* B; // 0x8
        UStaticMesh* C; // 0x10
        UStaticMesh* D; // 0x18
        UStaticMesh* E; // 0x20
        UStaticMesh* F; // 0x28
        TArray<int32_t> INDEX_HOLDER; // 0x30
        int32_t Temp_int_Array_Index_Variable; // 0x40
        char pad_44[0x4];
        TArray<int32_t> CallFunc_Map_Values_Values; // 0x48
        TArray<int32_t> CallFunc_Map_Keys_Keys; // 0x58
        int32_t CallFunc_Array_Get_Item; // 0x68
        int32_t CallFunc_Array_Get_Item_1; // 0x6c
        int32_t CallFunc_Array_Length_ReturnValue; // 0x70
        int32_t Temp_int_Loop_Counter_Variable; // 0x74
        TArray<int32_t> CallFunc_Map_Values_Values_1; // 0x78
        TArray<USplineMeshComponent*> CallFunc_Map_Keys_Keys_1; // 0x88
        int32_t CallFunc_Array_Get_Item_2; // 0x98
        bool CallFunc_Array_Contains_ReturnValue; // 0x9c
        char pad_9d[0x3];
        USplineMeshComponent* CallFunc_Array_Get_Item_3; // 0xa0
        bool CallFunc_Less_IntInt_ReturnValue; // 0xa8
        char pad_a9[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xac
        int32_t Temp_int_Variable; // 0xb0
        char pad_b4[0x4];
        UStaticMesh* K2Node_Select_Default; // 0xb8
        bool CallFunc_SetStaticMesh_ReturnValue; // 0xc0
    }; // Size: 0xc1
    Params_ReOrder_II params{};
    params.A = (UStaticMesh*)A;
    params.B = (UStaticMesh*)B;
    params.C = (UStaticMesh*)C;
    params.D = (UStaticMesh*)D;
    params.E = (UStaticMesh*)E;
    params.F = (UStaticMesh*)F;
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
    CallFunc_Map_Values_Values = params.CallFunc_Map_Values_Values;
    CallFunc_Map_Keys_Keys = params.CallFunc_Map_Keys_Keys;
    CallFunc_Map_Values_Values_1 = params.CallFunc_Map_Values_Values_1;
    CallFunc_Map_Keys_Keys_1 = params.CallFunc_Map_Keys_Keys_1;
}
void ABP_OL_Spline_Parent_B_C::SelfCompare(TArray<int32_t>& ArrayInput, bool& containsDuplicate, int32_t& indexOfDuplicate, TArray<int32_t> Temp, int32_t CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/BluePrints/BP_OL_Spline_Parent_B.BP_OL_Spline_Parent_B_C.SelfCompare"));
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
void ABP_OL_Spline_Parent_B_C::Check_Array_Limit(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_3, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Loop_Counter_Variable_4, int32_t Temp_int_Loop_Counter_Variable_5, int32_t CallFunc_Add_IntInt_ReturnValue_4, int32_t CallFunc_Add_IntInt_ReturnValue_5, int32_t Temp_int_Array_Index_Variable_4, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, int32_t Temp_int_Array_Index_Variable_5, FString CallFunc_Concat_StrStr_ReturnValue_1, int32_t CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4, FString CallFunc_Concat_StrStr_ReturnValue_5, int32_t CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32_t CallFunc_Array_Get_Item_4, int32_t CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_4, int32_t CallFunc_Array_Get_Item_5, int32_t CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/BluePrints/BP_OL_Spline_Parent_B.BP_OL_Spline_Parent_B_C.Check Array Limit"));
    struct Params_Check_Array_Limit {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t Temp_int_Loop_Counter_Variable_1; // 0xc
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x10
        int32_t Temp_int_Array_Index_Variable_1; // 0x14
        int32_t Temp_int_Array_Index_Variable_2; // 0x18
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x1c
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x20
        int32_t Temp_int_Array_Index_Variable_3; // 0x24
        int32_t Temp_int_Loop_Counter_Variable_3; // 0x28
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0x2c
        int32_t Temp_int_Loop_Counter_Variable_4; // 0x30
        int32_t Temp_int_Loop_Counter_Variable_5; // 0x34
        int32_t CallFunc_Add_IntInt_ReturnValue_4; // 0x38
        int32_t CallFunc_Add_IntInt_ReturnValue_5; // 0x3c
        int32_t Temp_int_Array_Index_Variable_4; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue; // 0x44
        bool CallFunc_Less_IntInt_ReturnValue; // 0x48
        char pad_49[0x3];
        int32_t CallFunc_Array_Get_Item; // 0x4c
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x50
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x54
        char pad_55[0x3];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x58
        int32_t Temp_int_Array_Index_Variable_5; // 0x68
        char pad_6c[0x4];
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x70
        int32_t CallFunc_Array_Get_Item_1; // 0x80
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x84
        bool CallFunc_Greater_IntInt_ReturnValue_1; // 0x85
        char pad_86[0x2];
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x88
        FString CallFunc_Concat_StrStr_ReturnValue_3; // 0x98
        FString CallFunc_Concat_StrStr_ReturnValue_4; // 0xa8
        FString CallFunc_Concat_StrStr_ReturnValue_5; // 0xb8
        int32_t CallFunc_Array_Get_Item_2; // 0xc8
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0xcc
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0xd0
        char pad_d1[0x3];
        int32_t CallFunc_Array_Get_Item_3; // 0xd4
        int32_t CallFunc_Array_Length_ReturnValue_3; // 0xd8
        bool CallFunc_Less_IntInt_ReturnValue_3; // 0xdc
        char pad_dd[0x3];
        int32_t CallFunc_Array_Get_Item_4; // 0xe0
        int32_t CallFunc_Array_Length_ReturnValue_4; // 0xe4
        bool CallFunc_Less_IntInt_ReturnValue_4; // 0xe8
        bool CallFunc_Greater_IntInt_ReturnValue_2; // 0xe9
        bool CallFunc_Greater_IntInt_ReturnValue_3; // 0xea
        bool CallFunc_Greater_IntInt_ReturnValue_4; // 0xeb
        int32_t CallFunc_Array_Get_Item_5; // 0xec
        int32_t CallFunc_Array_Length_ReturnValue_5; // 0xf0
        bool CallFunc_Less_IntInt_ReturnValue_5; // 0xf4
        bool CallFunc_Greater_IntInt_ReturnValue_5; // 0xf5
    }; // Size: 0xf6
    Params_Check_Array_Limit params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_int_Array_Index_Variable_3 = (int32_t)Temp_int_Array_Index_Variable_3;
    params.Temp_int_Loop_Counter_Variable_3 = (int32_t)Temp_int_Loop_Counter_Variable_3;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.Temp_int_Loop_Counter_Variable_4 = (int32_t)Temp_int_Loop_Counter_Variable_4;
    params.Temp_int_Loop_Counter_Variable_5 = (int32_t)Temp_int_Loop_Counter_Variable_5;
    params.CallFunc_Add_IntInt_ReturnValue_4 = (int32_t)CallFunc_Add_IntInt_ReturnValue_4;
    params.CallFunc_Add_IntInt_ReturnValue_5 = (int32_t)CallFunc_Add_IntInt_ReturnValue_5;
    params.Temp_int_Array_Index_Variable_4 = (int32_t)Temp_int_Array_Index_Variable_4;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (int32_t)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.Temp_int_Array_Index_Variable_5 = (int32_t)Temp_int_Array_Index_Variable_5;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Array_Get_Item_1 = (int32_t)CallFunc_Array_Get_Item_1;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue_1 = (bool)CallFunc_Greater_IntInt_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.CallFunc_Concat_StrStr_ReturnValue_3 = (FString)CallFunc_Concat_StrStr_ReturnValue_3;
    params.CallFunc_Concat_StrStr_ReturnValue_4 = (FString)CallFunc_Concat_StrStr_ReturnValue_4;
    params.CallFunc_Concat_StrStr_ReturnValue_5 = (FString)CallFunc_Concat_StrStr_ReturnValue_5;
    params.CallFunc_Array_Get_Item_2 = (int32_t)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_Array_Get_Item_3 = (int32_t)CallFunc_Array_Get_Item_3;
    params.CallFunc_Array_Length_ReturnValue_3 = (int32_t)CallFunc_Array_Length_ReturnValue_3;
    params.CallFunc_Less_IntInt_ReturnValue_3 = (bool)CallFunc_Less_IntInt_ReturnValue_3;
    params.CallFunc_Array_Get_Item_4 = (int32_t)CallFunc_Array_Get_Item_4;
    params.CallFunc_Array_Length_ReturnValue_4 = (int32_t)CallFunc_Array_Length_ReturnValue_4;
    params.CallFunc_Less_IntInt_ReturnValue_4 = (bool)CallFunc_Less_IntInt_ReturnValue_4;
    params.CallFunc_Greater_IntInt_ReturnValue_2 = (bool)CallFunc_Greater_IntInt_ReturnValue_2;
    params.CallFunc_Greater_IntInt_ReturnValue_3 = (bool)CallFunc_Greater_IntInt_ReturnValue_3;
    params.CallFunc_Greater_IntInt_ReturnValue_4 = (bool)CallFunc_Greater_IntInt_ReturnValue_4;
    params.CallFunc_Array_Get_Item_5 = (int32_t)CallFunc_Array_Get_Item_5;
    params.CallFunc_Array_Length_ReturnValue_5 = (int32_t)CallFunc_Array_Length_ReturnValue_5;
    params.CallFunc_Less_IntInt_ReturnValue_5 = (bool)CallFunc_Less_IntInt_ReturnValue_5;
    params.CallFunc_Greater_IntInt_ReturnValue_5 = (bool)CallFunc_Greater_IntInt_ReturnValue_5;
    ProcessEvent(func, &params);
}
void ABP_OL_Spline_Parent_B_C::Fix_Array_Limit(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_3, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Loop_Counter_Variable_4, int32_t Temp_int_Loop_Counter_Variable_5, int32_t CallFunc_Add_IntInt_ReturnValue_4, int32_t CallFunc_Add_IntInt_ReturnValue_5, int32_t Temp_int_Array_Index_Variable_4, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_5, int32_t CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Get_Item_4, int32_t CallFunc_Array_Length_ReturnValue_3, int32_t CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_3, int32_t CallFunc_Array_Get_Item_5, int32_t CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/BluePrints/BP_OL_Spline_Parent_B.BP_OL_Spline_Parent_B_C.Fix Array Limit"));
    struct Params_Fix_Array_Limit {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t Temp_int_Loop_Counter_Variable_1; // 0xc
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x10
        int32_t Temp_int_Array_Index_Variable_1; // 0x14
        int32_t Temp_int_Array_Index_Variable_2; // 0x18
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x1c
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x20
        int32_t Temp_int_Array_Index_Variable_3; // 0x24
        int32_t Temp_int_Loop_Counter_Variable_3; // 0x28
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0x2c
        int32_t Temp_int_Loop_Counter_Variable_4; // 0x30
        int32_t Temp_int_Loop_Counter_Variable_5; // 0x34
        int32_t CallFunc_Add_IntInt_ReturnValue_4; // 0x38
        int32_t CallFunc_Add_IntInt_ReturnValue_5; // 0x3c
        int32_t Temp_int_Array_Index_Variable_4; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue; // 0x44
        bool CallFunc_Less_IntInt_ReturnValue; // 0x48
        char pad_49[0x3];
        int32_t CallFunc_Array_Get_Item; // 0x4c
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x50
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x54
        char pad_55[0x3];
        int32_t Temp_int_Array_Index_Variable_5; // 0x58
        int32_t CallFunc_Array_Get_Item_1; // 0x5c
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x60
        char pad_61[0x3];
        int32_t CallFunc_Array_Get_Item_2; // 0x64
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x68
        bool CallFunc_Greater_IntInt_ReturnValue_1; // 0x6c
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x6d
        char pad_6e[0x2];
        int32_t CallFunc_Array_Get_Item_3; // 0x70
        int32_t CallFunc_Array_Get_Item_4; // 0x74
        int32_t CallFunc_Array_Length_ReturnValue_3; // 0x78
        int32_t CallFunc_Array_Length_ReturnValue_4; // 0x7c
        bool CallFunc_Less_IntInt_ReturnValue_3; // 0x80
        bool CallFunc_Less_IntInt_ReturnValue_4; // 0x81
        bool CallFunc_Greater_IntInt_ReturnValue_2; // 0x82
        bool CallFunc_Greater_IntInt_ReturnValue_3; // 0x83
        int32_t CallFunc_Array_Get_Item_5; // 0x84
        int32_t CallFunc_Array_Length_ReturnValue_5; // 0x88
        bool CallFunc_Greater_IntInt_ReturnValue_4; // 0x8c
        bool CallFunc_Less_IntInt_ReturnValue_5; // 0x8d
        bool CallFunc_Greater_IntInt_ReturnValue_5; // 0x8e
    }; // Size: 0x8f
    Params_Fix_Array_Limit params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_int_Array_Index_Variable_3 = (int32_t)Temp_int_Array_Index_Variable_3;
    params.Temp_int_Loop_Counter_Variable_3 = (int32_t)Temp_int_Loop_Counter_Variable_3;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.Temp_int_Loop_Counter_Variable_4 = (int32_t)Temp_int_Loop_Counter_Variable_4;
    params.Temp_int_Loop_Counter_Variable_5 = (int32_t)Temp_int_Loop_Counter_Variable_5;
    params.CallFunc_Add_IntInt_ReturnValue_4 = (int32_t)CallFunc_Add_IntInt_ReturnValue_4;
    params.CallFunc_Add_IntInt_ReturnValue_5 = (int32_t)CallFunc_Add_IntInt_ReturnValue_5;
    params.Temp_int_Array_Index_Variable_4 = (int32_t)Temp_int_Array_Index_Variable_4;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (int32_t)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable_5 = (int32_t)Temp_int_Array_Index_Variable_5;
    params.CallFunc_Array_Get_Item_1 = (int32_t)CallFunc_Array_Get_Item_1;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_2 = (int32_t)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Greater_IntInt_ReturnValue_1 = (bool)CallFunc_Greater_IntInt_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_Array_Get_Item_3 = (int32_t)CallFunc_Array_Get_Item_3;
    params.CallFunc_Array_Get_Item_4 = (int32_t)CallFunc_Array_Get_Item_4;
    params.CallFunc_Array_Length_ReturnValue_3 = (int32_t)CallFunc_Array_Length_ReturnValue_3;
    params.CallFunc_Array_Length_ReturnValue_4 = (int32_t)CallFunc_Array_Length_ReturnValue_4;
    params.CallFunc_Less_IntInt_ReturnValue_3 = (bool)CallFunc_Less_IntInt_ReturnValue_3;
    params.CallFunc_Less_IntInt_ReturnValue_4 = (bool)CallFunc_Less_IntInt_ReturnValue_4;
    params.CallFunc_Greater_IntInt_ReturnValue_2 = (bool)CallFunc_Greater_IntInt_ReturnValue_2;
    params.CallFunc_Greater_IntInt_ReturnValue_3 = (bool)CallFunc_Greater_IntInt_ReturnValue_3;
    params.CallFunc_Array_Get_Item_5 = (int32_t)CallFunc_Array_Get_Item_5;
    params.CallFunc_Array_Length_ReturnValue_5 = (int32_t)CallFunc_Array_Length_ReturnValue_5;
    params.CallFunc_Greater_IntInt_ReturnValue_4 = (bool)CallFunc_Greater_IntInt_ReturnValue_4;
    params.CallFunc_Less_IntInt_ReturnValue_5 = (bool)CallFunc_Less_IntInt_ReturnValue_5;
    params.CallFunc_Greater_IntInt_ReturnValue_5 = (bool)CallFunc_Greater_IntInt_ReturnValue_5;
    ProcessEvent(func, &params);
}
void ABP_OL_Spline_Parent_B_C::Array_Compare(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_3, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Loop_Counter_Variable_4, int32_t Temp_int_Loop_Counter_Variable_5, int32_t CallFunc_Add_IntInt_ReturnValue_4, int32_t CallFunc_Add_IntInt_ReturnValue_5, int32_t Temp_int_Array_Index_Variable_4, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_SelfCompare_containsDuplicate, int32_t CallFunc_SelfCompare_indexOfDuplicate, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_SelfCompare_containsDuplicate_1, int32_t CallFunc_SelfCompare_indexOfDuplicate_1, int32_t Temp_int_Array_Index_Variable_5, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Get_Item_1, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_4, bool CallFunc_Array_Contains_ReturnValue_5, bool CallFunc_Array_Contains_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_Array_Contains_ReturnValue_8, bool CallFunc_Array_Contains_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, int32_t CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_10, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_11, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_12, bool CallFunc_SelfCompare_containsDuplicate_2, int32_t CallFunc_SelfCompare_indexOfDuplicate_2, bool CallFunc_Array_Contains_ReturnValue_13, bool CallFunc_Array_Contains_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, int32_t CallFunc_Array_Get_Item_3, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_Array_Contains_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_Array_Contains_ReturnValue_16, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_17, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_SelfCompare_containsDuplicate_3, int32_t CallFunc_SelfCompare_indexOfDuplicate_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_18, bool CallFunc_Array_Contains_ReturnValue_19, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_16, bool CallFunc_BooleanOR_ReturnValue_17, int32_t CallFunc_Array_Get_Item_4, bool CallFunc_BooleanOR_ReturnValue_18, bool CallFunc_Array_Contains_ReturnValue_20, bool CallFunc_BooleanOR_ReturnValue_19, bool CallFunc_Array_Contains_ReturnValue_21, bool CallFunc_Greater_IntInt_ReturnValue_4, bool CallFunc_Array_Contains_ReturnValue_22, bool CallFunc_Array_Contains_ReturnValue_23, int32_t CallFunc_Array_Length_ReturnValue_4, bool CallFunc_SelfCompare_containsDuplicate_4, int32_t CallFunc_SelfCompare_indexOfDuplicate_4, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_Array_Contains_ReturnValue_24, bool CallFunc_BooleanOR_ReturnValue_20, bool CallFunc_BooleanOR_ReturnValue_21, bool CallFunc_BooleanOR_ReturnValue_22, bool CallFunc_BooleanOR_ReturnValue_23, bool CallFunc_BooleanOR_ReturnValue_24, int32_t CallFunc_Array_Get_Item_5, bool CallFunc_Array_Contains_ReturnValue_25, bool CallFunc_Array_Contains_ReturnValue_26, bool CallFunc_Greater_IntInt_ReturnValue_5, bool CallFunc_Array_Contains_ReturnValue_27, bool CallFunc_Array_Contains_ReturnValue_28, bool CallFunc_Array_Contains_ReturnValue_29, bool CallFunc_SelfCompare_containsDuplicate_5, int32_t CallFunc_SelfCompare_indexOfDuplicate_5, int32_t CallFunc_Array_Length_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_25, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_26, bool CallFunc_BooleanOR_ReturnValue_27, bool CallFunc_BooleanOR_ReturnValue_28, bool CallFunc_BooleanOR_ReturnValue_29) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/BluePrints/BP_OL_Spline_Parent_B.BP_OL_Spline_Parent_B_C.Array Compare"));
    struct Params_Array_Compare {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t Temp_int_Loop_Counter_Variable_1; // 0xc
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x10
        int32_t Temp_int_Array_Index_Variable_1; // 0x14
        int32_t Temp_int_Array_Index_Variable_2; // 0x18
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x1c
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x20
        int32_t Temp_int_Array_Index_Variable_3; // 0x24
        int32_t Temp_int_Loop_Counter_Variable_3; // 0x28
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0x2c
        int32_t Temp_int_Loop_Counter_Variable_4; // 0x30
        int32_t Temp_int_Loop_Counter_Variable_5; // 0x34
        int32_t CallFunc_Add_IntInt_ReturnValue_4; // 0x38
        int32_t CallFunc_Add_IntInt_ReturnValue_5; // 0x3c
        int32_t Temp_int_Array_Index_Variable_4; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue; // 0x44
        int32_t CallFunc_Array_Get_Item; // 0x48
        bool CallFunc_Less_IntInt_ReturnValue; // 0x4c
        bool CallFunc_Array_Contains_ReturnValue; // 0x4d
        bool CallFunc_Array_Contains_ReturnValue_1; // 0x4e
        char pad_4f[0x1];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x50
        bool CallFunc_SelfCompare_containsDuplicate; // 0x54
        char pad_55[0x3];
        int32_t CallFunc_SelfCompare_indexOfDuplicate; // 0x58
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x5c
        bool CallFunc_SelfCompare_containsDuplicate_1; // 0x5d
        char pad_5e[0x2];
        int32_t CallFunc_SelfCompare_indexOfDuplicate_1; // 0x60
        int32_t Temp_int_Array_Index_Variable_5; // 0x64
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x68
        char pad_69[0x3];
        int32_t CallFunc_Array_Get_Item_1; // 0x6c
        bool CallFunc_Array_Contains_ReturnValue_2; // 0x70
        bool CallFunc_Array_Contains_ReturnValue_3; // 0x71
        bool CallFunc_Greater_IntInt_ReturnValue_1; // 0x72
        bool CallFunc_Array_Contains_ReturnValue_4; // 0x73
        bool CallFunc_Array_Contains_ReturnValue_5; // 0x74
        bool CallFunc_Array_Contains_ReturnValue_6; // 0x75
        bool CallFunc_BooleanOR_ReturnValue; // 0x76
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x77
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x78
        bool CallFunc_Array_Contains_ReturnValue_7; // 0x79
        bool CallFunc_BooleanOR_ReturnValue_3; // 0x7a
        bool CallFunc_BooleanOR_ReturnValue_4; // 0x7b
        bool CallFunc_Array_Contains_ReturnValue_8; // 0x7c
        bool CallFunc_Array_Contains_ReturnValue_9; // 0x7d
        bool CallFunc_BooleanOR_ReturnValue_5; // 0x7e
        bool CallFunc_BooleanOR_ReturnValue_6; // 0x7f
        bool CallFunc_BooleanOR_ReturnValue_7; // 0x80
        bool CallFunc_BooleanOR_ReturnValue_8; // 0x81
        bool CallFunc_BooleanOR_ReturnValue_9; // 0x82
        char pad_83[0x1];
        int32_t CallFunc_Array_Get_Item_2; // 0x84
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x88
        bool CallFunc_Array_Contains_ReturnValue_10; // 0x8c
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x8d
        bool CallFunc_Array_Contains_ReturnValue_11; // 0x8e
        bool CallFunc_Greater_IntInt_ReturnValue_2; // 0x8f
        bool CallFunc_Array_Contains_ReturnValue_12; // 0x90
        bool CallFunc_SelfCompare_containsDuplicate_2; // 0x91
        char pad_92[0x2];
        int32_t CallFunc_SelfCompare_indexOfDuplicate_2; // 0x94
        bool CallFunc_Array_Contains_ReturnValue_13; // 0x98
        bool CallFunc_Array_Contains_ReturnValue_14; // 0x99
        bool CallFunc_BooleanOR_ReturnValue_10; // 0x9a
        bool CallFunc_BooleanOR_ReturnValue_11; // 0x9b
        int32_t CallFunc_Array_Get_Item_3; // 0x9c
        bool CallFunc_BooleanOR_ReturnValue_12; // 0xa0
        bool CallFunc_Array_Contains_ReturnValue_15; // 0xa1
        bool CallFunc_BooleanOR_ReturnValue_13; // 0xa2
        bool CallFunc_Array_Contains_ReturnValue_16; // 0xa3
        bool CallFunc_BooleanOR_ReturnValue_14; // 0xa4
        bool CallFunc_Greater_IntInt_ReturnValue_3; // 0xa5
        bool CallFunc_Array_Contains_ReturnValue_17; // 0xa6
        char pad_a7[0x1];
        int32_t CallFunc_Array_Length_ReturnValue_3; // 0xa8
        bool CallFunc_SelfCompare_containsDuplicate_3; // 0xac
        char pad_ad[0x3];
        int32_t CallFunc_SelfCompare_indexOfDuplicate_3; // 0xb0
        bool CallFunc_Less_IntInt_ReturnValue_3; // 0xb4
        bool CallFunc_Array_Contains_ReturnValue_18; // 0xb5
        bool CallFunc_Array_Contains_ReturnValue_19; // 0xb6
        bool CallFunc_BooleanOR_ReturnValue_15; // 0xb7
        bool CallFunc_BooleanOR_ReturnValue_16; // 0xb8
        bool CallFunc_BooleanOR_ReturnValue_17; // 0xb9
        char pad_ba[0x2];
        int32_t CallFunc_Array_Get_Item_4; // 0xbc
        bool CallFunc_BooleanOR_ReturnValue_18; // 0xc0
        bool CallFunc_Array_Contains_ReturnValue_20; // 0xc1
        bool CallFunc_BooleanOR_ReturnValue_19; // 0xc2
        bool CallFunc_Array_Contains_ReturnValue_21; // 0xc3
        bool CallFunc_Greater_IntInt_ReturnValue_4; // 0xc4
        bool CallFunc_Array_Contains_ReturnValue_22; // 0xc5
        bool CallFunc_Array_Contains_ReturnValue_23; // 0xc6
        char pad_c7[0x1];
        int32_t CallFunc_Array_Length_ReturnValue_4; // 0xc8
        bool CallFunc_SelfCompare_containsDuplicate_4; // 0xcc
        char pad_cd[0x3];
        int32_t CallFunc_SelfCompare_indexOfDuplicate_4; // 0xd0
        bool CallFunc_Less_IntInt_ReturnValue_4; // 0xd4
        bool CallFunc_Array_Contains_ReturnValue_24; // 0xd5
        bool CallFunc_BooleanOR_ReturnValue_20; // 0xd6
        bool CallFunc_BooleanOR_ReturnValue_21; // 0xd7
        bool CallFunc_BooleanOR_ReturnValue_22; // 0xd8
        bool CallFunc_BooleanOR_ReturnValue_23; // 0xd9
        bool CallFunc_BooleanOR_ReturnValue_24; // 0xda
        char pad_db[0x1];
        int32_t CallFunc_Array_Get_Item_5; // 0xdc
        bool CallFunc_Array_Contains_ReturnValue_25; // 0xe0
        bool CallFunc_Array_Contains_ReturnValue_26; // 0xe1
        bool CallFunc_Greater_IntInt_ReturnValue_5; // 0xe2
        bool CallFunc_Array_Contains_ReturnValue_27; // 0xe3
        bool CallFunc_Array_Contains_ReturnValue_28; // 0xe4
        bool CallFunc_Array_Contains_ReturnValue_29; // 0xe5
        bool CallFunc_SelfCompare_containsDuplicate_5; // 0xe6
        char pad_e7[0x1];
        int32_t CallFunc_SelfCompare_indexOfDuplicate_5; // 0xe8
        int32_t CallFunc_Array_Length_ReturnValue_5; // 0xec
        bool CallFunc_BooleanOR_ReturnValue_25; // 0xf0
        bool CallFunc_Less_IntInt_ReturnValue_5; // 0xf1
        bool CallFunc_BooleanOR_ReturnValue_26; // 0xf2
        bool CallFunc_BooleanOR_ReturnValue_27; // 0xf3
        bool CallFunc_BooleanOR_ReturnValue_28; // 0xf4
        bool CallFunc_BooleanOR_ReturnValue_29; // 0xf5
    }; // Size: 0xf6
    Params_Array_Compare params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_int_Array_Index_Variable_3 = (int32_t)Temp_int_Array_Index_Variable_3;
    params.Temp_int_Loop_Counter_Variable_3 = (int32_t)Temp_int_Loop_Counter_Variable_3;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.Temp_int_Loop_Counter_Variable_4 = (int32_t)Temp_int_Loop_Counter_Variable_4;
    params.Temp_int_Loop_Counter_Variable_5 = (int32_t)Temp_int_Loop_Counter_Variable_5;
    params.CallFunc_Add_IntInt_ReturnValue_4 = (int32_t)CallFunc_Add_IntInt_ReturnValue_4;
    params.CallFunc_Add_IntInt_ReturnValue_5 = (int32_t)CallFunc_Add_IntInt_ReturnValue_5;
    params.Temp_int_Array_Index_Variable_4 = (int32_t)Temp_int_Array_Index_Variable_4;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (int32_t)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue_1 = (bool)CallFunc_Array_Contains_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_SelfCompare_containsDuplicate = (bool)CallFunc_SelfCompare_containsDuplicate;
    params.CallFunc_SelfCompare_indexOfDuplicate = (int32_t)CallFunc_SelfCompare_indexOfDuplicate;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_SelfCompare_containsDuplicate_1 = (bool)CallFunc_SelfCompare_containsDuplicate_1;
    params.CallFunc_SelfCompare_indexOfDuplicate_1 = (int32_t)CallFunc_SelfCompare_indexOfDuplicate_1;
    params.Temp_int_Array_Index_Variable_5 = (int32_t)Temp_int_Array_Index_Variable_5;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (int32_t)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Contains_ReturnValue_2 = (bool)CallFunc_Array_Contains_ReturnValue_2;
    params.CallFunc_Array_Contains_ReturnValue_3 = (bool)CallFunc_Array_Contains_ReturnValue_3;
    params.CallFunc_Greater_IntInt_ReturnValue_1 = (bool)CallFunc_Greater_IntInt_ReturnValue_1;
    params.CallFunc_Array_Contains_ReturnValue_4 = (bool)CallFunc_Array_Contains_ReturnValue_4;
    params.CallFunc_Array_Contains_ReturnValue_5 = (bool)CallFunc_Array_Contains_ReturnValue_5;
    params.CallFunc_Array_Contains_ReturnValue_6 = (bool)CallFunc_Array_Contains_ReturnValue_6;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_Array_Contains_ReturnValue_7 = (bool)CallFunc_Array_Contains_ReturnValue_7;
    params.CallFunc_BooleanOR_ReturnValue_3 = (bool)CallFunc_BooleanOR_ReturnValue_3;
    params.CallFunc_BooleanOR_ReturnValue_4 = (bool)CallFunc_BooleanOR_ReturnValue_4;
    params.CallFunc_Array_Contains_ReturnValue_8 = (bool)CallFunc_Array_Contains_ReturnValue_8;
    params.CallFunc_Array_Contains_ReturnValue_9 = (bool)CallFunc_Array_Contains_ReturnValue_9;
    params.CallFunc_BooleanOR_ReturnValue_5 = (bool)CallFunc_BooleanOR_ReturnValue_5;
    params.CallFunc_BooleanOR_ReturnValue_6 = (bool)CallFunc_BooleanOR_ReturnValue_6;
    params.CallFunc_BooleanOR_ReturnValue_7 = (bool)CallFunc_BooleanOR_ReturnValue_7;
    params.CallFunc_BooleanOR_ReturnValue_8 = (bool)CallFunc_BooleanOR_ReturnValue_8;
    params.CallFunc_BooleanOR_ReturnValue_9 = (bool)CallFunc_BooleanOR_ReturnValue_9;
    params.CallFunc_Array_Get_Item_2 = (int32_t)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Array_Contains_ReturnValue_10 = (bool)CallFunc_Array_Contains_ReturnValue_10;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_Array_Contains_ReturnValue_11 = (bool)CallFunc_Array_Contains_ReturnValue_11;
    params.CallFunc_Greater_IntInt_ReturnValue_2 = (bool)CallFunc_Greater_IntInt_ReturnValue_2;
    params.CallFunc_Array_Contains_ReturnValue_12 = (bool)CallFunc_Array_Contains_ReturnValue_12;
    params.CallFunc_SelfCompare_containsDuplicate_2 = (bool)CallFunc_SelfCompare_containsDuplicate_2;
    params.CallFunc_SelfCompare_indexOfDuplicate_2 = (int32_t)CallFunc_SelfCompare_indexOfDuplicate_2;
    params.CallFunc_Array_Contains_ReturnValue_13 = (bool)CallFunc_Array_Contains_ReturnValue_13;
    params.CallFunc_Array_Contains_ReturnValue_14 = (bool)CallFunc_Array_Contains_ReturnValue_14;
    params.CallFunc_BooleanOR_ReturnValue_10 = (bool)CallFunc_BooleanOR_ReturnValue_10;
    params.CallFunc_BooleanOR_ReturnValue_11 = (bool)CallFunc_BooleanOR_ReturnValue_11;
    params.CallFunc_Array_Get_Item_3 = (int32_t)CallFunc_Array_Get_Item_3;
    params.CallFunc_BooleanOR_ReturnValue_12 = (bool)CallFunc_BooleanOR_ReturnValue_12;
    params.CallFunc_Array_Contains_ReturnValue_15 = (bool)CallFunc_Array_Contains_ReturnValue_15;
    params.CallFunc_BooleanOR_ReturnValue_13 = (bool)CallFunc_BooleanOR_ReturnValue_13;
    params.CallFunc_Array_Contains_ReturnValue_16 = (bool)CallFunc_Array_Contains_ReturnValue_16;
    params.CallFunc_BooleanOR_ReturnValue_14 = (bool)CallFunc_BooleanOR_ReturnValue_14;
    params.CallFunc_Greater_IntInt_ReturnValue_3 = (bool)CallFunc_Greater_IntInt_ReturnValue_3;
    params.CallFunc_Array_Contains_ReturnValue_17 = (bool)CallFunc_Array_Contains_ReturnValue_17;
    params.CallFunc_Array_Length_ReturnValue_3 = (int32_t)CallFunc_Array_Length_ReturnValue_3;
    params.CallFunc_SelfCompare_containsDuplicate_3 = (bool)CallFunc_SelfCompare_containsDuplicate_3;
    params.CallFunc_SelfCompare_indexOfDuplicate_3 = (int32_t)CallFunc_SelfCompare_indexOfDuplicate_3;
    params.CallFunc_Less_IntInt_ReturnValue_3 = (bool)CallFunc_Less_IntInt_ReturnValue_3;
    params.CallFunc_Array_Contains_ReturnValue_18 = (bool)CallFunc_Array_Contains_ReturnValue_18;
    params.CallFunc_Array_Contains_ReturnValue_19 = (bool)CallFunc_Array_Contains_ReturnValue_19;
    params.CallFunc_BooleanOR_ReturnValue_15 = (bool)CallFunc_BooleanOR_ReturnValue_15;
    params.CallFunc_BooleanOR_ReturnValue_16 = (bool)CallFunc_BooleanOR_ReturnValue_16;
    params.CallFunc_BooleanOR_ReturnValue_17 = (bool)CallFunc_BooleanOR_ReturnValue_17;
    params.CallFunc_Array_Get_Item_4 = (int32_t)CallFunc_Array_Get_Item_4;
    params.CallFunc_BooleanOR_ReturnValue_18 = (bool)CallFunc_BooleanOR_ReturnValue_18;
    params.CallFunc_Array_Contains_ReturnValue_20 = (bool)CallFunc_Array_Contains_ReturnValue_20;
    params.CallFunc_BooleanOR_ReturnValue_19 = (bool)CallFunc_BooleanOR_ReturnValue_19;
    params.CallFunc_Array_Contains_ReturnValue_21 = (bool)CallFunc_Array_Contains_ReturnValue_21;
    params.CallFunc_Greater_IntInt_ReturnValue_4 = (bool)CallFunc_Greater_IntInt_ReturnValue_4;
    params.CallFunc_Array_Contains_ReturnValue_22 = (bool)CallFunc_Array_Contains_ReturnValue_22;
    params.CallFunc_Array_Contains_ReturnValue_23 = (bool)CallFunc_Array_Contains_ReturnValue_23;
    params.CallFunc_Array_Length_ReturnValue_4 = (int32_t)CallFunc_Array_Length_ReturnValue_4;
    params.CallFunc_SelfCompare_containsDuplicate_4 = (bool)CallFunc_SelfCompare_containsDuplicate_4;
    params.CallFunc_SelfCompare_indexOfDuplicate_4 = (int32_t)CallFunc_SelfCompare_indexOfDuplicate_4;
    params.CallFunc_Less_IntInt_ReturnValue_4 = (bool)CallFunc_Less_IntInt_ReturnValue_4;
    params.CallFunc_Array_Contains_ReturnValue_24 = (bool)CallFunc_Array_Contains_ReturnValue_24;
    params.CallFunc_BooleanOR_ReturnValue_20 = (bool)CallFunc_BooleanOR_ReturnValue_20;
    params.CallFunc_BooleanOR_ReturnValue_21 = (bool)CallFunc_BooleanOR_ReturnValue_21;
    params.CallFunc_BooleanOR_ReturnValue_22 = (bool)CallFunc_BooleanOR_ReturnValue_22;
    params.CallFunc_BooleanOR_ReturnValue_23 = (bool)CallFunc_BooleanOR_ReturnValue_23;
    params.CallFunc_BooleanOR_ReturnValue_24 = (bool)CallFunc_BooleanOR_ReturnValue_24;
    params.CallFunc_Array_Get_Item_5 = (int32_t)CallFunc_Array_Get_Item_5;
    params.CallFunc_Array_Contains_ReturnValue_25 = (bool)CallFunc_Array_Contains_ReturnValue_25;
    params.CallFunc_Array_Contains_ReturnValue_26 = (bool)CallFunc_Array_Contains_ReturnValue_26;
    params.CallFunc_Greater_IntInt_ReturnValue_5 = (bool)CallFunc_Greater_IntInt_ReturnValue_5;
    params.CallFunc_Array_Contains_ReturnValue_27 = (bool)CallFunc_Array_Contains_ReturnValue_27;
    params.CallFunc_Array_Contains_ReturnValue_28 = (bool)CallFunc_Array_Contains_ReturnValue_28;
    params.CallFunc_Array_Contains_ReturnValue_29 = (bool)CallFunc_Array_Contains_ReturnValue_29;
    params.CallFunc_SelfCompare_containsDuplicate_5 = (bool)CallFunc_SelfCompare_containsDuplicate_5;
    params.CallFunc_SelfCompare_indexOfDuplicate_5 = (int32_t)CallFunc_SelfCompare_indexOfDuplicate_5;
    params.CallFunc_Array_Length_ReturnValue_5 = (int32_t)CallFunc_Array_Length_ReturnValue_5;
    params.CallFunc_BooleanOR_ReturnValue_25 = (bool)CallFunc_BooleanOR_ReturnValue_25;
    params.CallFunc_Less_IntInt_ReturnValue_5 = (bool)CallFunc_Less_IntInt_ReturnValue_5;
    params.CallFunc_BooleanOR_ReturnValue_26 = (bool)CallFunc_BooleanOR_ReturnValue_26;
    params.CallFunc_BooleanOR_ReturnValue_27 = (bool)CallFunc_BooleanOR_ReturnValue_27;
    params.CallFunc_BooleanOR_ReturnValue_28 = (bool)CallFunc_BooleanOR_ReturnValue_28;
    params.CallFunc_BooleanOR_ReturnValue_29 = (bool)CallFunc_BooleanOR_ReturnValue_29;
    ProcessEvent(func, &params);
}
void ABP_OL_Spline_Parent_B_C::Relocate_Spline(USplineComponent* Spline, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/BluePrints/BP_OL_Spline_Parent_B.BP_OL_Spline_Parent_B_C.Relocate Spline"));
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
void ABP_OL_Spline_Parent_B_C::Re_Order_Meshes() {}
