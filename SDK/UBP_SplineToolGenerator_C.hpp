#pragma once
#include <cstdint>
#include "FBoxSphereBounds.hpp"
#include "FFormatArgumentData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "USplineToolGenerator.hpp"
class USplineComponent;
class UStaticMesh;
class AActor;
class USplineMeshComponent;
class UHierarchicalInstancedStaticMeshComponent;
class UInstancedStaticMeshComponent;
class UStaticMeshComponent;
#pragma pack(push, 1)
class UBP_SplineToolGenerator_C : public USplineToolGenerator {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    USplineComponent* Spline; // 0xd0
    float spacing; // 0xd8
    char pad_dc[0x4];
    TArray<UStaticMesh*> MeshesToUse; // 0xe0
    bool UseRandomMeshes; // 0xf0
    char pad_f1[0x3];
    FRandomStream RandomizationSeed; // 0xf4
    bool RotateMeshAtOrigin; // 0xfc
    char pad_fd[0x3];
    TArray<UStaticMesh*> ValidMeshes; // 0x100
    int32_t InstancesNeeded; // 0x110
    char pad_114[0x4];
    TArray<UInstancedStaticMeshComponent*> GeneratedISM; // 0x118
    bool UseStartEndMesh; // 0x128
    char pad_129[0x3];
    float SpawnChance; // 0x12c
    TArray<float> Static_Mesh_Weights; // 0x130
    TArray<UStaticMesh*> ValidSetMeshes; // 0x140
    TArray<float> Mesh_Chance_Num; // 0x150
    bool UseSplineMeshByMaxAngle; // 0x160
    char pad_161[0x3];
    float MaxAngleDelta; // 0x164
    float CheckEnd; // 0x168
    float SplineMeshTangentScale; // 0x16c
    float Spline_Mesh_Tangent_Scale; // 0x170
    int32_t Debug_ISM_Components_Count; // 0x174
    int32_t Debug_SplineMeshComponentsCount; // 0x178
    int32_t Debug_ISM_Instances_Count; // 0x17c
    float SpacingOffset; // 0x180
    float DebugOffset; // 0x184
    char pad_188[0x10];
    bool In_Generate_Overlap_Events; // 0x198
    char pad_199[0x3];
    FName In_Collision_Profile_Name; // 0x19c
    float SplineLength; // 0x1a4
    bool EnableDebugging; // 0x1a8
    char pad_1a9[0x7];
    UStaticMesh* Start_Mesh; // 0x1b0
    UStaticMesh* End_Mesh; // 0x1b8
    float SectionScaleAdjustment; // 0x1c0
    float EndMeshOffset; // 0x1c4
    float AdjustedSpacing; // 0x1c8
    char pad_1cc[0x4];
    UInstancedStaticMeshComponent* SelectedInstanceComponent; // 0x1d0
    float RemainderTolerance; // 0x1d8
    bool Flip_Mesh; // 0x1dc
    char pad_1dd[0x3];
    float InstanceLimit; // 0x1e0
    bool UseHISM; // 0x1e4
    char pad_1e5[0x3];
    int32_t UseHISMThreshold; // 0x1e8
    char pad_1ec[0x4];
    static UBP_SplineToolGenerator_C* StaticClass();
    void AddStaticMeshComponent(FVector InTransformLocation, FRotator InRotation, FName InCollisionProfileName, float InSectionLength, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_PickWeightedRandom_Success, int32_t CallFunc_PickWeightedRandom_Return, AActor* CallFunc_GetOwner_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue, UStaticMesh* CallFunc_Array_Get_Item, float CallFunc_GetRelativeScaleToSpacing_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UStaticMeshComponent* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
    float GetRelativeScaleToSpacing(UStaticMesh* StaticMesh, int32_t Index, float SectionLength, FBoxSphereBounds CallFunc_GetBounds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_SafeDivide_ReturnValue);
    void GenerateUsageDebugData(int32_t CallFunc_Array_Length_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, int32_t Temp_int_Variable, TArray<USplineMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, UInstancedStaticMeshComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_GetInstanceCount_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1);
    void GetComponentCounts(int32_t& Debug_ISM_Components_Count, int32_t& Debug_SplineMeshComponentsCount, int32_t& Debug_ISM_Instances_Count);
    void ShowDebugLines(float InDebugOffset, float StartDistance, float EndDistance, FRotator CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_3);
    void PurePrintFloat(FString NewParam, float FloatValue, float& Value);
    void AddSplineMesh(int32_t InSplineLoopIndex, bool InGenerateOverlapEvents, FName InCollisionProfileName, float CallFunc_GetLocationsByIndex_SectionStartLocation, float CallFunc_GetLocationsByIndex_SectionEndLocation, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, float CallFunc_FClamp_ReturnValue, FVector CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_PickWeightedRandom_Success, int32_t CallFunc_PickWeightedRandom_Return, USplineMeshComponent* CallFunc_AddComponentByClass_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue, UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue);
    void GetLocationsByIndex(int32_t SplineLoopIndex, float SpacingOffset, bool isSplineMesh, float& SectionStartLocation, float& SectionEndLocation, float EndLocation, float StartLocation, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1);
    bool CheckMaxAngle(float StartDistance, float EndDistance, int32_t Index, FRotator CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue, FRotator CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_1, FRotator CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void GetStaticMeshesUsedOnSpline(TArray<UStaticMesh*>& Array, TArray<UStaticMesh*>& ValidSetMeshes, TArray<float>& MeshChanceNum, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, float Temp_float_Variable, int32_t CallFunc_Array_Add_ReturnValue_1);
    void PickWeightedRandom(int32_t NumMeshes, TArray<float>& Weights, bool& Success, int32_t& Return, float DiceResult, float AddedNums, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, float CallFunc_Array_Get_Item, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, int32_t Temp_int_Array_Index_Variable_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Array_Get_Item_1);
    void ShouldGenerateMesh(int32_t CurrentIndex, int32_t LastIndex, bool& Return, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void GetValidMesh(bool& FoundSome, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, UStaticMesh* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void Add_ISM_Component(int32_t Index, AActor* CallFunc_GetOwner_ReturnValue, UStaticMesh* CallFunc_Array_Get_Item, UHierarchicalInstancedStaticMeshComponent* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue);
    void SelectRandomComponent(UInstancedStaticMeshComponent*& Output, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_PickWeightedRandom_Success, int32_t CallFunc_PickWeightedRandom_Return, int32_t CallFunc_SelectInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, UInstancedStaticMeshComponent* CallFunc_Array_Get_Item);
    void GenerateInstances(USplineComponent* Spline, float MeshSpacing, float CreateInstanceChance, TArray<UStaticMesh*>& StaticMeshes, TArray<float>& MeshRandomWeights, bool RandomizeMeshes, FRandomStream RandomSeed, bool RotateMeshesAtOrigin, bool FlipMesh, bool StartAndEndMesh, UStaticMesh* StartMesh, UStaticMesh* EndMesh, bool UseSplineMeshByMaxAngle, float MaxAngleDelta, float SpacingOffset, bool InGenerateOverlapEvents, FName InCollisionProfileName, bool EnableDebugging, int32_t UseHISMThreshold);
    void ExecuteUbergraph_BP_SplineToolGenerator(int32_t EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetValidMesh_FoundSome, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1);
    void SplineGeneratorDebugDispatcher__DelegateSignature(FString TextValue, FVector TextLocation, FVector Line1Start, FVector Line1End, FVector Line2Start, FVector Line2End);
}; // Size: 0x1f0
#pragma pack(pop)
