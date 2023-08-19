#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UBP_SplineToolGenerator_C;
class USplineComponent;
class USceneComponent;
class UStaticMesh;
class USplineMeshComponent;
class UInstancedStaticMeshComponent;
#pragma pack(push, 1)
class ABP_OL_StoneWall_B_C : public AActor {
public:
    UBP_SplineToolGenerator_C* BP_SplineToolGenerator; // 0x248
    USplineComponent* Spline; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    float SectionLength; // 0x260
    char pad_264[0x4];
    UStaticMesh* Static_Mesh_01; // 0x268
    UStaticMesh* Static_Mesh_02; // 0x270
    UStaticMesh* Static_Mesh_03; // 0x278
    UStaticMesh* Static_Mesh_04; // 0x280
    FRandomStream Random_Seed; // 0x288
    bool UseHISMToolComponent; // 0x290
    char pad_291[0x3];
    float Spacing_Offset; // 0x294
    bool Rotate_Meshes_at_Origin; // 0x298
    bool Use_Spline_Mesh_by_Max_Angle; // 0x299
    char pad_29a[0x2];
    float Max_Angle_Delta; // 0x29c
    FName In_Collision_Profile_Name; // 0x2a0
    bool Random_Meshes; // 0x2a8
    bool Enable_Debugging; // 0x2a9
    char pad_2aa[0x2];
    int32_t Debug_ISM_Components_Count; // 0x2ac
    int32_t Debug_Spline_Mesh_Components_Count; // 0x2b0
    int32_t Debug_ISM_Instances_Count; // 0x2b4
    int32_t Use_HISMThreshold; // 0x2b8
    char pad_2bc[0x4];
    static ABP_OL_StoneWall_B_C* StaticClass();
    void RequestDestroyComponent(UInstancedStaticMeshComponent* ISM_Component, bool& Success, TArray<UInstancedStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue, UInstancedStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue);
    void UserConstructionScript0(FTransform Temp_struct_Variable, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32_t CallFunc_GetComponentCounts_Debug_ISM_Components_Count, int32_t CallFunc_GetComponentCounts_Debug_SplineMeshComponentsCount, int32_t CallFunc_GetComponentCounts_Debug_ISM_Instances_Count, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<UStaticMesh*>& K2Node_MakeArray_Array, TArray<UStaticMesh*>& CallFunc_GetStaticMeshesUsedOnSpline_ValidSetMeshes, TArray<float>& CallFunc_GetStaticMeshesUsedOnSpline_MeshChanceNum, bool CallFunc_SetStaticMesh_ReturnValue, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32_t Temp_int_Variable_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue, UStaticMesh* K2Node_Select_Default, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1, float CallFunc_GetSplineLength_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, int32_t CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
}; // Size: 0x2c0
#pragma pack(pop)
