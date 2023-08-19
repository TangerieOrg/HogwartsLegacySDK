#include "AActor.hpp"
#include "ABP_OL_StoneWall_B_C.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBP_SplineToolGenerator_C.hpp"
#include "UFunction.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "USceneComponent.hpp"
#include "USplineComponent.hpp"
#include "USplineMeshComponent.hpp"
#include "UStaticMesh.hpp"
ABP_OL_StoneWall_B_C* ABP_OL_StoneWall_B_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/Objects/RockWall/Blueprints/BP_OL_StoneWall_B.BP_OL_StoneWall_B_C");
    return (ABP_OL_StoneWall_B_C*)res;
}
void ABP_OL_StoneWall_B_C::RequestDestroyComponent(UInstancedStaticMeshComponent* ISM_Component, bool& Success, TArray<UInstancedStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue, UInstancedStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/RockWall/Blueprints/BP_OL_StoneWall_B.BP_OL_StoneWall_B_C.RequestDestroyComponent"));
    struct Params_RequestDestroyComponent {
        UInstancedStaticMeshComponent* ISM_Component; // 0x0
        bool Success; // 0x8
        char pad_9[0x7];
        TArray<UInstancedStaticMeshComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x20
        char pad_21[0x3];
        int32_t CallFunc_Array_Find_ReturnValue; // 0x24
        UInstancedStaticMeshComponent* CallFunc_Array_Get_Item; // 0x28
        bool CallFunc_Array_Contains_ReturnValue; // 0x30
    }; // Size: 0x31
    Params_RequestDestroyComponent params{};
    params.ISM_Component = (UInstancedStaticMeshComponent*)ISM_Component;
    params.Success = (bool)Success;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<UInstancedStaticMeshComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Array_Find_ReturnValue = (int32_t)CallFunc_Array_Find_ReturnValue;
    params.CallFunc_Array_Get_Item = (UInstancedStaticMeshComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    ProcessEvent(func, &params);
    Success = params.Success;
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
}
void ABP_OL_StoneWall_B_C::UserConstructionScript0(FTransform Temp_struct_Variable, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32_t CallFunc_GetComponentCounts_Debug_ISM_Components_Count, int32_t CallFunc_GetComponentCounts_Debug_SplineMeshComponentsCount, int32_t CallFunc_GetComponentCounts_Debug_ISM_Instances_Count, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<UStaticMesh*>& K2Node_MakeArray_Array, TArray<UStaticMesh*>& CallFunc_GetStaticMeshesUsedOnSpline_ValidSetMeshes, TArray<float>& CallFunc_GetStaticMeshesUsedOnSpline_MeshChanceNum, bool CallFunc_SetStaticMesh_ReturnValue, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32_t Temp_int_Variable_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue, UStaticMesh* K2Node_Select_Default, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1, float CallFunc_GetSplineLength_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, int32_t CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/RockWall/Blueprints/BP_OL_StoneWall_B.BP_OL_StoneWall_B_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FTransform Temp_struct_Variable; // 0x0
        USplineMeshComponent* CallFunc_AddComponent_ReturnValue; // 0x30
        int32_t CallFunc_GetComponentCounts_Debug_ISM_Components_Count; // 0x38
        int32_t CallFunc_GetComponentCounts_Debug_SplineMeshComponentsCount; // 0x3c
        int32_t CallFunc_GetComponentCounts_Debug_ISM_Instances_Count; // 0x40
        int32_t Temp_int_Variable; // 0x44
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x48
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x4c
        TArray<UStaticMesh*> K2Node_MakeArray_Array; // 0x50
        TArray<UStaticMesh*> CallFunc_GetStaticMeshesUsedOnSpline_ValidSetMeshes; // 0x60
        TArray<float> CallFunc_GetStaticMeshesUsedOnSpline_MeshChanceNum; // 0x70
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x80
        char pad_81[0x3];
        int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0x84
        float CallFunc_Multiply_IntFloat_ReturnValue; // 0x88
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x8c
        float CallFunc_Multiply_IntFloat_ReturnValue_1; // 0x90
        int32_t Temp_int_Variable_1; // 0x94
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue; // 0x98
        FVector CallFunc_ClampVectorSize_ReturnValue; // 0xa4
        UStaticMesh* K2Node_Select_Default; // 0xb0
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0xb8
        bool CallFunc_SetStaticMesh_ReturnValue_1; // 0xc4
        char pad_c5[0x3];
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1; // 0xc8
        float CallFunc_GetSplineLength_ReturnValue; // 0xd4
        FVector CallFunc_ClampVectorSize_ReturnValue_1; // 0xd8
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0xe4
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0xe8
        int32_t CallFunc_FTrunc_ReturnValue; // 0xf4
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0xf8
    }; // Size: 0xf9
    Params_UserConstructionScript params{};
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_AddComponent_ReturnValue = (USplineMeshComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_GetComponentCounts_Debug_ISM_Components_Count = (int32_t)CallFunc_GetComponentCounts_Debug_ISM_Components_Count;
    params.CallFunc_GetComponentCounts_Debug_SplineMeshComponentsCount = (int32_t)CallFunc_GetComponentCounts_Debug_SplineMeshComponentsCount;
    params.CallFunc_GetComponentCounts_Debug_ISM_Instances_Count = (int32_t)CallFunc_GetComponentCounts_Debug_ISM_Instances_Count;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.K2Node_MakeArray_Array = (TArray<UStaticMesh*>)K2Node_MakeArray_Array;
    params.CallFunc_GetStaticMeshesUsedOnSpline_ValidSetMeshes = (TArray<UStaticMesh*>)CallFunc_GetStaticMeshesUsedOnSpline_ValidSetMeshes;
    params.CallFunc_GetStaticMeshesUsedOnSpline_MeshChanceNum = (TArray<float>)CallFunc_GetStaticMeshesUsedOnSpline_MeshChanceNum;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = (int32_t)CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
    params.CallFunc_Multiply_IntFloat_ReturnValue = (float)CallFunc_Multiply_IntFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_IntFloat_ReturnValue_1 = (float)CallFunc_Multiply_IntFloat_ReturnValue_1;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_ClampVectorSize_ReturnValue = (FVector)CallFunc_ClampVectorSize_ReturnValue;
    params.K2Node_Select_Default = (UStaticMesh*)K2Node_Select_Default;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue_1 = (bool)CallFunc_SetStaticMesh_ReturnValue_1;
    params.CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_GetSplineLength_ReturnValue = (float)CallFunc_GetSplineLength_ReturnValue;
    params.CallFunc_ClampVectorSize_ReturnValue_1 = (FVector)CallFunc_ClampVectorSize_ReturnValue_1;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_FTrunc_ReturnValue = (int32_t)CallFunc_FTrunc_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetStaticMeshesUsedOnSpline_ValidSetMeshes = params.CallFunc_GetStaticMeshesUsedOnSpline_ValidSetMeshes;
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    CallFunc_GetStaticMeshesUsedOnSpline_MeshChanceNum = params.CallFunc_GetStaticMeshesUsedOnSpline_MeshChanceNum;
}
