#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UBP_SplineToolGenerator_C;
class USplineComponent;
class USceneComponent;
class USplineMeshComponent;
class UStaticMesh;
class UInstancedStaticMeshComponent;
#pragma pack(push, 1)
class ABP_OL_TrainTracks_B_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UBP_SplineToolGenerator_C* BP_SplineToolGenerator; // 0x250
    USplineComponent* Spline; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    float SectionLength; // 0x268
    char pad_26c[0x4];
    USplineMeshComponent* Train_Track; // 0x270
    USplineMeshComponent* Large_Mesh; // 0x278
    USplineMeshComponent* Medium_Mesh; // 0x280
    int32_t Last_Index; // 0x288
    char pad_28c[0x4];
    UStaticMesh* Track_Mesh; // 0x290
    bool Use_HISM_Tool_Component; // 0x298
    char pad_299[0x3];
    float Spacing_Offset; // 0x29c
    FName In_Collision_Profile_Name; // 0x2a0
    bool Use_Spline_Mesh_by_Max_Angle; // 0x2a8
    char pad_2a9[0x3];
    float Max_Angle_Delta; // 0x2ac
    bool Enable_Debugging; // 0x2b0
    char pad_2b1[0x3];
    int32_t Use_HISMThreshold; // 0x2b4
    int32_t Debug_ISM_Components_Count; // 0x2b8
    int32_t Debug_Spline_Mesh_Components_Count; // 0x2bc
    int32_t Debug_ISM_Instances_Count; // 0x2c0
    bool Rotate_Meshes_at_Origin; // 0x2c4
    char pad_2c5[0x3];
    static ABP_OL_TrainTracks_B_C* StaticClass();
    void RequestDestroyComponent(UInstancedStaticMeshComponent* ISM_Component, bool& Success, bool CallFunc_IsValid_ReturnValue, TArray<UInstancedStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, UInstancedStaticMeshComponent* CallFunc_Array_Get_Item);
    void UserConstructionScript0(int32_t CallFunc_GetComponentCounts_Debug_ISM_Components_Count, int32_t CallFunc_GetComponentCounts_Debug_SplineMeshComponentsCount, int32_t CallFunc_GetComponentCounts_Debug_ISM_Instances_Count, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<UStaticMesh*>& K2Node_MakeArray_Array, TArray<UStaticMesh*>& CallFunc_GetStaticMeshesUsedOnSpline_ValidSetMeshes, TArray<float>& CallFunc_GetStaticMeshesUsedOnSpline_MeshChanceNum, FTransform Temp_struct_Variable, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_OL_TrainTracks_B(int32_t EntryPoint);
}; // Size: 0x2c8
#pragma pack(pop)
