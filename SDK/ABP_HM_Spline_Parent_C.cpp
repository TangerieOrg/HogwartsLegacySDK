#include "AActor.hpp"
#include "ABP_HM_Spline_Parent_C.hpp"
#include "AInstancedFoliageActor.hpp"
#include "ECollisionChannel.hpp"
#include "ECollisionEnabled\Type.hpp"
#include "ESplineMeshAxis\Type.hpp"
#include "ESplinePointType\Type.hpp"
#include "FF_SplineCollisionGenerationSettings.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBP_SplineCollisionGenerator_C.hpp"
#include "UBP_SplineToolGenerator_C.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "UPhysicalMaterial.hpp"
#include "USplineComponent.hpp"
#include "USplineMeshComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_HM_Spline_Parent_C::AlternateMeshes() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/BP_HM_Spline_Parent.BP_HM_Spline_Parent_C.AlternateMeshes"));
    struct Params_AlternateMeshes {
    }; // Size: 0x0
    Params_AlternateMeshes params{};
    ProcessEvent(func, &params);
}
void ABP_HM_Spline_Parent_C::RequestDestroyComponent(UInstancedStaticMeshComponent* ISM_Component, bool& Success, bool CallFunc_IsValid_ReturnValue, TArray<UInstancedStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, UInstancedStaticMeshComponent* CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/BP_HM_Spline_Parent.BP_HM_Spline_Parent_C.RequestDestroyComponent"));
    struct Params_RequestDestroyComponent {
        UInstancedStaticMeshComponent* ISM_Component; // 0x0
        bool Success; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x9
        char pad_a[0x6];
        TArray<UInstancedStaticMeshComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x10
        int32_t CallFunc_Array_Find_ReturnValue; // 0x20
        bool CallFunc_Array_Contains_ReturnValue; // 0x24
        char pad_25[0x3];
        UInstancedStaticMeshComponent* CallFunc_Array_Get_Item; // 0x28
    }; // Size: 0x30
    Params_RequestDestroyComponent params{};
    params.ISM_Component = (UInstancedStaticMeshComponent*)ISM_Component;
    params.Success = (bool)Success;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<UInstancedStaticMeshComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.CallFunc_Array_Find_ReturnValue = (int32_t)CallFunc_Array_Find_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_Array_Get_Item = (UInstancedStaticMeshComponent*)CallFunc_Array_Get_Item;
    ProcessEvent(func, &params);
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
    Success = params.Success;
}
ABP_HM_Spline_Parent_C* ABP_HM_Spline_Parent_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogsmeade/Blueprints/BP_HM_Spline_Parent.BP_HM_Spline_Parent_C");
    return (ABP_HM_Spline_Parent_C*)res;
}
void ABP_HM_Spline_Parent_C::UserConstructionScript0(TArray<AInstancedFoliageActor*>& CallFunc_GetFoliageActors_OutActors, int32_t Temp_int_Variable, int32_t Temp_int_Array_Index_Variable, FString CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, int32_t CallFunc_Percent_IntInt_ReturnValue, int32_t CallFunc_Percent_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, FTransform Temp_struct_Variable, UHierarchicalInstancedStaticMeshComponent* CallFunc_AddComponent_ReturnValue, FF_SplineCollisionGenerationSettings K2Node_MakeStruct_F_SplineCollisionGenerationSettings) {}
void ABP_HM_Spline_Parent_C::Spline_Constructor(int32_t RandomResult, float SegmentLength, TArray<UBoxComponent*> GeneratedBoxes, bool ReachedEnd, float CurrentPoint, float LastPointChecked, float AccumulatedRotation, float LastBoxEndPoint, int32_t CallFunc_GetComponentCounts_Debug_ISM_Components_Count, int32_t CallFunc_GetComponentCounts_Debug_SplineMeshComponentsCount, int32_t CallFunc_GetComponentCounts_Debug_ISM_Instances_Count, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue, TArray<UStaticMesh*>& CallFunc_GetStaticMeshesUsedOnSpline_UsedMeshes, TArray<float>& CallFunc_GetStaticMeshesUsedOnSpline_MeshChance, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, FTransform Temp_struct_Variable, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue) {}
void ABP_HM_Spline_Parent_C::Request_Destroy_Spline_Helper(USplineComponent* SplineHelper, bool& Success, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/BP_HM_Spline_Parent.BP_HM_Spline_Parent_C.Request Destroy Spline Helper"));
    struct Params_Request_Destroy_Spline_Helper {
        USplineComponent* SplineHelper; // 0x0
        bool Success; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x9
    }; // Size: 0xa
    Params_Request_Destroy_Spline_Helper params{};
    params.SplineHelper = (USplineComponent*)SplineHelper;
    params.Success = (bool)Success;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    Success = params.Success;
}
void ABP_HM_Spline_Parent_C::GetFoliageActors(TArray<AInstancedFoliageActor*>& OutActors, TArray<AInstancedFoliageActor*>& CallFunc_GetAllActorsOfClass_OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/BP_HM_Spline_Parent.BP_HM_Spline_Parent_C.GetFoliageActors"));
    struct Params_GetFoliageActors {
        TArray<AInstancedFoliageActor*> OutActors; // 0x0
        TArray<AInstancedFoliageActor*> CallFunc_GetAllActorsOfClass_OutActors; // 0x10
    }; // Size: 0x20
    Params_GetFoliageActors params{};
    params.OutActors = (TArray<AInstancedFoliageActor*>)OutActors;
    params.CallFunc_GetAllActorsOfClass_OutActors = (TArray<AInstancedFoliageActor*>)CallFunc_GetAllActorsOfClass_OutActors;
    ProcessEvent(func, &params);
    OutActors = params.OutActors;
    CallFunc_GetAllActorsOfClass_OutActors = params.CallFunc_GetAllActorsOfClass_OutActors;
}
void ABP_HM_Spline_Parent_C::GetStaticMeshesUsedOnSpline(TArray<UStaticMesh*>& UsedMeshes, TArray<float>& MeshChance, TArray<float> MeshChanceNum, TArray<UStaticMesh*> ValidSetMeshes, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, float Temp_float_Variable, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue) {}
void ABP_HM_Spline_Parent_C::ReOrderSplineMeshes(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t Temp_int_Array_Index_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue) {}
void ABP_HM_Spline_Parent_C::Location_Tags(FTransform Temp_struct_Variable, int32_t Temp_int_Variable) {}
void ABP_HM_Spline_Parent_C::Show_Location_Tags() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/BP_HM_Spline_Parent.BP_HM_Spline_Parent_C.Show Location Tags"));
    struct Params_Show_Location_Tags {
    }; // Size: 0x0
    Params_Show_Location_Tags params{};
    ProcessEvent(func, &params);
}
void ABP_HM_Spline_Parent_C::ExecuteUbergraph_BP_HM_Spline_Parent(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/BP_HM_Spline_Parent.BP_HM_Spline_Parent_C.ExecuteUbergraph_BP_HM_Spline_Parent"));
    struct Params_ExecuteUbergraph_BP_HM_Spline_Parent {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_HM_Spline_Parent params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
