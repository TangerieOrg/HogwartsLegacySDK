#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UBP_SplineToolGenerator_C;
class USplineComponent;
class USceneComponent;
class UStaticMesh;
class USplineMeshComponent;
class UInstancedStaticMeshComponent;
class UStaticMeshComponent;
#pragma pack(push, 1)
class ABP_OL_StoneWall_A1_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UBP_SplineToolGenerator_C* BP_SplineToolGenerator; // 0x250
    USplineComponent* Spline; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    float SectionLength; // 0x268
    bool UseHISMToolComponent; // 0x26c
    char pad_26d[0x3];
    float Spacing_Offset; // 0x270
    FName In_Collision_Profile_Name; // 0x274
    char pad_27c[0x4];
    UStaticMesh* Static_Mesh_01; // 0x280
    UStaticMesh* Static_Mesh_02; // 0x288
    UStaticMesh* Static_Mesh_03; // 0x290
    UStaticMesh* Static_Mesh_04; // 0x298
    UStaticMesh* Static_Mesh_05; // 0x2a0
    UStaticMesh* Static_Mesh_06; // 0x2a8
    FRandomStream Random_Seed; // 0x2b0
    bool Random_Meshes; // 0x2b8
    bool RotateMeshAtOrigin; // 0x2b9
    bool Use_Spline_Mesh_by_Max_Angle; // 0x2ba
    char pad_2bb[0x1];
    float Max_Angle_Delta; // 0x2bc
    bool Enable_Debugging; // 0x2c0
    char pad_2c1[0x3];
    int32_t ISM_Component_Count; // 0x2c4
    int32_t Spline_Mesh_Component_Count; // 0x2c8
    int32_t ISM_Instances_Count; // 0x2cc
    int32_t Use_HISMThreshold; // 0x2d0
    bool In_Generate_Overlap_Events; // 0x2d4
    char pad_2d5[0x3];
    static ABP_OL_StoneWall_A1_C* StaticClass();
    void RequestDestroyComponent(UInstancedStaticMeshComponent* ISM_Component, bool& Success, TArray<UInstancedStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue, UInstancedStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue);
    void FlushDebugLines();
    void DebugLogComponents(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue);
    void UserConstructionScript0(FTransform Temp_struct_Variable, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_GetComponentCounts_Debug_ISM_Components_Count, int32_t CallFunc_GetComponentCounts_Debug_SplineMeshComponentsCount, int32_t CallFunc_GetComponentCounts_Debug_ISM_Instances_Count, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<UStaticMesh*>& K2Node_MakeArray_Array, TArray<UStaticMesh*>& CallFunc_GetStaticMeshesUsedOnSpline_ValidSetMeshes, TArray<float>& CallFunc_GetStaticMeshesUsedOnSpline_MeshChanceNum, bool CallFunc_SetStaticMesh_ReturnValue, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32_t Temp_int_Variable_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue, UStaticMesh* K2Node_Select_Default, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1, float CallFunc_GetSplineLength_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, int32_t CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void ReceiveBeginPlay0();
    void CustomEvent_0(FString TextValue, FVector TextLocation, FVector Line1Start, FVector Line1End, FVector Line2Start, FVector Line2End);
    void ExecuteUbergraph_BP_OL_StoneWall_A1(int32_t EntryPoint, FString K2Node_CustomEvent_TextValue, FVector K2Node_CustomEvent_TextLocation, FVector K2Node_CustomEvent_Line1Start, FVector K2Node_CustomEvent_Line1End, FVector K2Node_CustomEvent_Line2Start, FVector K2Node_CustomEvent_Line2End);
}; // Size: 0x2d8
#pragma pack(pop)
