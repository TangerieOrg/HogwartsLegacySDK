#include "AActor.hpp"
#include "ABP_DynamicFarFoliageManager_C.hpp"
#include "ADynamicFarFoliageManager.hpp"
#include "AInstancedFoliageActor.hpp"
#include "FFormatArgumentData.hpp"
#include "FTransform.hpp"
#include "FWorldFoliageData.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "UStaticMesh.hpp"
void ABP_DynamicFarFoliageManager_C::GetHostFoliageActorAndCompsOrganized(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_3, bool Temp_bool_True_if_break_was_hit_Variable, UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess) {}
ABP_DynamicFarFoliageManager_C* ABP_DynamicFarFoliageManager_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/FarFoliage/BP_DynamicFarFoliageManager.BP_DynamicFarFoliageManager_C");
    return (ABP_DynamicFarFoliageManager_C*)res;
}
void ABP_DynamicFarFoliageManager_C::FindMatchingComp(UStaticMesh* StaticMesh, TArray<UFoliageInstancedStaticMeshComponent*>& HostComponents, bool& Success, UFoliageInstancedStaticMeshComponent*& Component, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, UFoliageInstancedStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/FarFoliage/BP_DynamicFarFoliageManager.BP_DynamicFarFoliageManager_C.FindMatchingComp"));
    struct Params_FindMatchingComp {
        UStaticMesh* StaticMesh; // 0x0
        TArray<UFoliageInstancedStaticMeshComponent*> HostComponents; // 0x8
        bool Success; // 0x18
        char pad_19[0x7];
        UFoliageInstancedStaticMeshComponent* Component; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x28
        int32_t Temp_int_Array_Index_Variable; // 0x2c
        int32_t Temp_int_Loop_Counter_Variable; // 0x30
        char pad_34[0x4];
        UFoliageInstancedStaticMeshComponent* CallFunc_Array_Get_Item; // 0x38
        bool CallFunc_Less_IntInt_ReturnValue; // 0x40
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x41
        char pad_42[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x44
        bool CallFunc_Array_Contains_ReturnValue; // 0x48
    }; // Size: 0x49
    Params_FindMatchingComp params{};
    params.StaticMesh = (UStaticMesh*)StaticMesh;
    params.HostComponents = (TArray<UFoliageInstancedStaticMeshComponent*>)HostComponents;
    params.Success = (bool)Success;
    params.Component = (UFoliageInstancedStaticMeshComponent*)Component;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Array_Get_Item = (UFoliageInstancedStaticMeshComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    ProcessEvent(func, &params);
    Success = params.Success;
    HostComponents = params.HostComponents;
    Component = params.Component;
}
void ABP_DynamicFarFoliageManager_C::PopulateCoastComponents(TArray<UFoliageInstancedStaticMeshComponent*> HostComponents, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, AInstancedFoliageActor* CallFunc_GetActorOfClass_ReturnValue, TArray<UFoliageInstancedStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess) {}
void ABP_DynamicFarFoliageManager_C::LogHostCompMesh(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, int32_t CallFunc_Add_IntInt_ReturnValue) {}
void ABP_DynamicFarFoliageManager_C::ProbeFoliageActor() {}
void ABP_DynamicFarFoliageManager_C::FindNextEmptyMatchingIndex() {}
void ABP_DynamicFarFoliageManager_C::UpdateTotal(int32_t Total, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FWorldFoliageData CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/FarFoliage/BP_DynamicFarFoliageManager.BP_DynamicFarFoliageManager_C.UpdateTotal"));
    struct Params_UpdateTotal {
        int32_t Total; // 0x0
        int32_t Temp_int_Array_Index_Variable; // 0x4
        int32_t Temp_int_Loop_Counter_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        int32_t CallFunc_Array_Length_ReturnValue; // 0x10
        char pad_14[0x4];
        FWorldFoliageData CallFunc_Array_Get_Item; // 0x18
        bool CallFunc_Less_IntInt_ReturnValue; // 0x108
        char pad_109[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x10c
    }; // Size: 0x110
    Params_UpdateTotal params{};
    params.Total = (int32_t)Total;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (FWorldFoliageData)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
}
void ABP_DynamicFarFoliageManager_C::MergeFliageData(TArray<int32_t> ObtainedAssignedTo, TArray<int32_t> SameSizeBoolArray, TArray<FTransform> ObtainedTransforms, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_MaxOfIntArray_IndexOfMaxValue, int32_t CallFunc_MaxOfIntArray_MaxValue, FWorldFoliageData CallFunc_Array_Get_Item, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, int32_t CallFunc_Array_Length_ReturnValue_1) {}
