#include "AActor.hpp"
#include "ABP_OL_TrainTracks_B_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBP_SplineToolGenerator_C.hpp"
#include "UFunction.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "USceneComponent.hpp"
#include "USplineComponent.hpp"
#include "USplineMeshComponent.hpp"
#include "UStaticMesh.hpp"
ABP_OL_TrainTracks_B_C* ABP_OL_TrainTracks_B_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/Objects/ManMade/BluePrints/BP_OL_TrainTracks_B.BP_OL_TrainTracks_B_C");
    return (ABP_OL_TrainTracks_B_C*)res;
}
void ABP_OL_TrainTracks_B_C::RequestDestroyComponent(UInstancedStaticMeshComponent* ISM_Component, bool& Success, bool CallFunc_IsValid_ReturnValue, TArray<UInstancedStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, UInstancedStaticMeshComponent* CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/ManMade/BluePrints/BP_OL_TrainTracks_B.BP_OL_TrainTracks_B_C.RequestDestroyComponent"));
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
    Success = params.Success;
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
}
void ABP_OL_TrainTracks_B_C::UserConstructionScript0(int32_t CallFunc_GetComponentCounts_Debug_ISM_Components_Count, int32_t CallFunc_GetComponentCounts_Debug_SplineMeshComponentsCount, int32_t CallFunc_GetComponentCounts_Debug_ISM_Instances_Count, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<UStaticMesh*>& K2Node_MakeArray_Array, TArray<UStaticMesh*>& CallFunc_GetStaticMeshesUsedOnSpline_ValidSetMeshes, TArray<float>& CallFunc_GetStaticMeshesUsedOnSpline_MeshChanceNum, FTransform Temp_struct_Variable, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/ManMade/BluePrints/BP_OL_TrainTracks_B.BP_OL_TrainTracks_B_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        int32_t CallFunc_GetComponentCounts_Debug_ISM_Components_Count; // 0x0
        int32_t CallFunc_GetComponentCounts_Debug_SplineMeshComponentsCount; // 0x4
        int32_t CallFunc_GetComponentCounts_Debug_ISM_Instances_Count; // 0x8
        int32_t Temp_int_Variable; // 0xc
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x14
        TArray<UStaticMesh*> K2Node_MakeArray_Array; // 0x18
        TArray<UStaticMesh*> CallFunc_GetStaticMeshesUsedOnSpline_ValidSetMeshes; // 0x28
        TArray<float> CallFunc_GetStaticMeshesUsedOnSpline_MeshChanceNum; // 0x38
        char pad_48[0x8];
        FTransform Temp_struct_Variable; // 0x50
        USplineMeshComponent* CallFunc_AddComponent_ReturnValue; // 0x80
        float CallFunc_Multiply_IntFloat_ReturnValue; // 0x88
        float CallFunc_Multiply_IntFloat_ReturnValue_1; // 0x8c
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue; // 0x90
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x9c
        char pad_9d[0x3];
        FVector CallFunc_ClampVectorSize_ReturnValue; // 0xa0
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0xac
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1; // 0xb8
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0xc4
        char pad_c5[0x3];
        FVector CallFunc_ClampVectorSize_ReturnValue_1; // 0xc8
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0xd4
        float CallFunc_GetSplineLength_ReturnValue; // 0xe0
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0xe4
        int32_t CallFunc_FTrunc_ReturnValue; // 0xe8
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0xec
    }; // Size: 0xf0
    Params_UserConstructionScript params{};
    params.CallFunc_GetComponentCounts_Debug_ISM_Components_Count = (int32_t)CallFunc_GetComponentCounts_Debug_ISM_Components_Count;
    params.CallFunc_GetComponentCounts_Debug_SplineMeshComponentsCount = (int32_t)CallFunc_GetComponentCounts_Debug_SplineMeshComponentsCount;
    params.CallFunc_GetComponentCounts_Debug_ISM_Instances_Count = (int32_t)CallFunc_GetComponentCounts_Debug_ISM_Instances_Count;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.K2Node_MakeArray_Array = (TArray<UStaticMesh*>)K2Node_MakeArray_Array;
    params.CallFunc_GetStaticMeshesUsedOnSpline_ValidSetMeshes = (TArray<UStaticMesh*>)CallFunc_GetStaticMeshesUsedOnSpline_ValidSetMeshes;
    params.CallFunc_GetStaticMeshesUsedOnSpline_MeshChanceNum = (TArray<float>)CallFunc_GetStaticMeshesUsedOnSpline_MeshChanceNum;
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_AddComponent_ReturnValue = (USplineMeshComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_Multiply_IntFloat_ReturnValue = (float)CallFunc_Multiply_IntFloat_ReturnValue;
    params.CallFunc_Multiply_IntFloat_ReturnValue_1 = (float)CallFunc_Multiply_IntFloat_ReturnValue_1;
    params.CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.CallFunc_ClampVectorSize_ReturnValue = (FVector)CallFunc_ClampVectorSize_ReturnValue;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_ClampVectorSize_ReturnValue_1 = (FVector)CallFunc_ClampVectorSize_ReturnValue_1;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_GetSplineLength_ReturnValue = (float)CallFunc_GetSplineLength_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_FTrunc_ReturnValue = (int32_t)CallFunc_FTrunc_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetStaticMeshesUsedOnSpline_MeshChanceNum = params.CallFunc_GetStaticMeshesUsedOnSpline_MeshChanceNum;
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    CallFunc_GetStaticMeshesUsedOnSpline_ValidSetMeshes = params.CallFunc_GetStaticMeshesUsedOnSpline_ValidSetMeshes;
}
void ABP_OL_TrainTracks_B_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/ManMade/BluePrints/BP_OL_TrainTracks_B.BP_OL_TrainTracks_B_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_OL_TrainTracks_B_C::ExecuteUbergraph_BP_OL_TrainTracks_B(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/ManMade/BluePrints/BP_OL_TrainTracks_B.BP_OL_TrainTracks_B_C.ExecuteUbergraph_BP_OL_TrainTracks_B"));
    struct Params_ExecuteUbergraph_BP_OL_TrainTracks_B {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_OL_TrainTracks_B params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
