#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class USceneComponent;
class UStaticMesh;
class USplineMeshComponent;
class USplineComponent;
#pragma pack(push, 1)
class ABP_OL_Spline_Parent_C : public AActor {
public:
    USceneComponent* DefaultSceneRoot; // 0x248
    bool ReOrderMesh; // 0x250
    char pad_251[0x57];
    TArray<int32_t> Set_to_A; // 0x2a8
    TArray<int32_t> Set_to_B; // 0x2b8
    TArray<int32_t> Set_to_C; // 0x2c8
    TArray<int32_t> Set_to_D; // 0x2d8
    bool Tag_Visibility; // 0x2e8
    char pad_2e9[0x3];
    int32_t Last_Index; // 0x2ec
    FString String; // 0x2f0
    FString String_2; // 0x300
    FString String_3; // 0x310
    TArray<int32_t> Index_Of_Duplicate; // 0x320
    char pad_330[0x28];
    bool You_Did_Something_Wrong; // 0x358
    char pad_359[0x57];
    TArray<int32_t> NewVar_0; // 0x3b0
    static ABP_OL_Spline_Parent_C* StaticClass();
    void ReOrder_II(UStaticMesh* A, UStaticMesh* B, UStaticMesh* C, UStaticMesh* D, TArray<int32_t> INDEX_HOLDER, int32_t Temp_int_Array_Index_Variable, TArray<int32_t>& CallFunc_Map_Values_Values, TArray<int32_t>& CallFunc_Map_Keys_Keys, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, TArray<int32_t>& CallFunc_Map_Values_Values_1, TArray<USplineMeshComponent*>& CallFunc_Map_Keys_Keys_1, int32_t CallFunc_Array_Get_Item_2, bool CallFunc_Array_Contains_ReturnValue, USplineMeshComponent* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable, UStaticMesh* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue);
    void SelfCompare(TArray<int32_t>& ArrayInput, bool& containsDuplicate, int32_t& indexOfDuplicate, TArray<int32_t> Temp, int32_t CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void Array_Compare(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_3, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_SelfCompare_containsDuplicate, int32_t CallFunc_SelfCompare_indexOfDuplicate, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32_t CallFunc_Array_Get_Item_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_3, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_SelfCompare_containsDuplicate_1, int32_t CallFunc_SelfCompare_indexOfDuplicate_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_4, bool CallFunc_Array_Contains_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, int32_t CallFunc_Array_Get_Item_2, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_6, bool CallFunc_Array_Contains_ReturnValue_7, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_SelfCompare_containsDuplicate_2, int32_t CallFunc_SelfCompare_indexOfDuplicate_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, int32_t CallFunc_Array_Length_ReturnValue_3, int32_t CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_9, bool CallFunc_Array_Contains_ReturnValue_10, bool CallFunc_Array_Contains_ReturnValue_11, bool CallFunc_SelfCompare_containsDuplicate_3, int32_t CallFunc_SelfCompare_indexOfDuplicate_3, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11);
    void Fix_Array_Limit(int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_3, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, int32_t CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_3);
    void Check_Array_Limit(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_3, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Array_Get_Item_2, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, int32_t CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_3);
    void Show_Location_Tags(USplineComponent* Spline, int32_t Last_Index, float Section_Length, FTransform Temp_struct_Variable, int32_t Temp_int_Variable);
    void Relocate_Spline(USplineComponent* Spline, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult);
    void Re_Order_Meshes();
}; // Size: 0x3c0
#pragma pack(pop)
