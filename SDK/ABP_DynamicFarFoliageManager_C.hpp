#pragma once
#include <cstdint>
#include "ADynamicFarFoliageManager.hpp"
#include "FFormatArgumentData.hpp"
#include "FTransform.hpp"
#include "FWorldFoliageData.hpp"
class USceneComponent;
class UStaticMesh;
class AActor;
class UFoliageInstancedStaticMeshComponent;
class UObject;
class AInstancedFoliageActor;
#pragma pack(push, 1)
class ABP_DynamicFarFoliageManager_C : public ADynamicFarFoliageManager {
public:
    USceneComponent* DefaultSceneRoot; // 0x390
    int32_t BaseIndex; // 0x398
    char pad_39c[0x4];
    TArray<int32_t> AdditionalIndexes; // 0x3a0
    char pad_3b0[0x28];
    static ABP_DynamicFarFoliageManager_C* StaticClass();
    void FindMatchingComp(UStaticMesh* StaticMesh, TArray<UFoliageInstancedStaticMeshComponent*>& HostComponents, bool& Success, UFoliageInstancedStaticMeshComponent*& Component, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, UFoliageInstancedStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
    void PopulateCoastComponents(TArray<UFoliageInstancedStaticMeshComponent*> HostComponents, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, AInstancedFoliageActor* CallFunc_GetActorOfClass_ReturnValue, TArray<UFoliageInstancedStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess);
    void ProbeFoliageActor();
    void FindNextEmptyMatchingIndex();
    void GetHostFoliageActorAndCompsOrganized(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_3, bool Temp_bool_True_if_break_was_hit_Variable, UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess);
    void LogHostCompMesh(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, int32_t CallFunc_Add_IntInt_ReturnValue);
    void UpdateTotal(int32_t Total, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FWorldFoliageData CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1);
    void MergeFliageData(TArray<int32_t> ObtainedAssignedTo, TArray<int32_t> SameSizeBoolArray, TArray<FTransform> ObtainedTransforms, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_MaxOfIntArray_IndexOfMaxValue, int32_t CallFunc_MaxOfIntArray_MaxValue, FWorldFoliageData CallFunc_Array_Get_Item, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, int32_t CallFunc_Array_Length_ReturnValue_1);
}; // Size: 0x3d8
#pragma pack(pop)
