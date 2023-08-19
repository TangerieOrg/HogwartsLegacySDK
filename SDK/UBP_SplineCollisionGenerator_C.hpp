#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "ECollisionEnabled\Type.hpp"
#include "ESplinePointType\Type.hpp"
#include "FF_SplineCollisionGenerationSettings.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FSplinePoint.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UInstancedStaticMeshComponent;
class USplineComponent;
class UPhysicalMaterial;
class AActor;
#pragma pack(push, 1)
class UBP_SplineCollisionGenerator_C : public UActorComponent {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    UInstancedStaticMeshComponent* InstancedStaticMeshComponent; // 0xd0
    USplineComponent* SplineComponent; // 0xd8
    float CheckIntervalDistance; // 0xe0
    float MaxAngleDelta; // 0xe4
    float WallWidth; // 0xe8
    float WallHeight; // 0xec
    bool HiddenInGame; // 0xf0
    char pad_f1[0x3];
    float SplineLength; // 0xf4
    bool Finished; // 0xf8
    bool Clockwise; // 0xf9
    char pad_fa[0x2];
    float SegmentStart; // 0xfc
    float SegmentEnd; // 0x100
    float PreviousSegmentStart; // 0x104
    float PreviousSegmentEnd; // 0x108
    float CheckEnd; // 0x10c
    FVector OutsideCornerPoint; // 0x110
    FVector ProjectedCornerPoint; // 0x11c
    FVector OffsetedStartPoint; // 0x128
    char pad_134[0x4];
    UPhysicalMaterial* PhysicsMaterial; // 0x138
    bool GenerateOverlapEvents; // 0x140
    bool UseCollisionPreset; // 0x141
    char pad_142[0x2];
    FName CollisionPresetName; // 0x144
    ECollisionEnabled::Type CollisionEnabled; // 0x14c
    ECollisionChannel ObjectType; // 0x14d
    char pad_14e[0x6a];
    FLinearColor WallColor; // 0x1b8
    bool Loops; // 0x1c8
    char pad_1c9[0x7];
    USplineComponent* SplineHelper; // 0x1d0
    bool Use_Pitch; // 0x1d8
    char pad_1d9[0x7];
    static UBP_SplineCollisionGenerator_C* StaticClass();
    void SnapInstancesToSpline(TArray<FTransform> NewTransforms, TArray<FTransform> OriginalTransforms, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, FTransform CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_FindLocationClosestToWorldLocation_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_GetInstanceTransform_OutInstanceTransform, bool CallFunc_GetInstanceTransform_ReturnValue, int32_t CallFunc_AddInstanceWorldSpace_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_GetInstanceCount_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void CreateSplineHelper(int32_t Temp_int_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FTransform CallFunc_GetRelativeTransform_ReturnValue, ESplinePointType::Type CallFunc_GetSplinePointType_ReturnValue, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue, FTransform CallFunc_GetTransformAtSplinePoint_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_Multiply_VectorVector_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_GetArriveTangentAtSplinePoint_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Multiply_VectorVector_ReturnValue_1, FSplinePoint K2Node_MakeStruct_SplinePoint, int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, USplineComponent* CallFunc_AddComponentByClass_ReturnValue);
    void GetGenerationReport();
    void Get_Map_Values(int32_t Index);
    FVector GetProjectedCornerPoint(float EndDistance, FVector& CornerPoint, bool TurnDirection, float CallFunc_SelectFloat_ReturnValue, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, float CallFunc_FindAngle_Angle, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_RotateAngleAxis_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
    FVector GetOutsideCornerPoint(float LastStart, FVector OffsetStartPoint, float LastEnd, bool TurnDirection, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_1, FVector CallFunc_SelectVector_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_GetRightVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, FVector CallFunc_Divide_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_3, FVector CallFunc_Add_VectorVector_ReturnValue_4, FVector CallFunc_SelectVector_ReturnValue_1);
    bool GetTurnDirection(float LastStart, float LastEnd, float CheckEnd, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_1, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_2, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_3, FRotator CallFunc_FindLookAtRotation_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, FVector CallFunc_GetRightVector_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void FindAngle(float AB_Length, float C_Length, float& Angle, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_DegAcos_ReturnValue);
    void GetAbsDelta(FRotator A, FRotator B, float& Yaw, FRotator CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue);
    FVector Get_Location_At_Distance_Along_Spline(float Distance, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1);
    bool CheckAngleDelta(float StartDistance, float EndDistance, float CheckDistance, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_2, FRotator CallFunc_FindLookAtRotation_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, float CallFunc_GetAbsDelta_Yaw, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void CreateNewInstance(FVector BoxStart, FVector BoxEnd, float CallFunc_Vector_Distance_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_Add_VectorVector_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_Divide_VectorFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_NotEqual_VectorVector_ReturnValue, FRotator CallFunc_SelectRotator_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, int32_t CallFunc_AddInstance_ReturnValue);
    void GenerateCollisionInstances(USplineComponent* SplineComponent, UInstancedStaticMeshComponent* InstancedStaticMeshComponent, FF_SplineCollisionGenerationSettings GenerationSettings, bool UsePitch);
    void ExecuteUbergraph_BP_SplineCollisionGenerator(int32_t EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CheckAngleDelta_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Divide_VectorFloat_ReturnValue, FVector CallFunc_GetOutsideCornerPoint_ReturnValue, FVector CallFunc_GetProjectedCornerPoint_ReturnValue, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_2, USplineComponent* K2Node_CustomEvent_SplineComponent, UInstancedStaticMeshComponent* K2Node_CustomEvent_InstancedStaticMeshComponent, FF_SplineCollisionGenerationSettings K2Node_CustomEvent_GenerationSettings, bool K2Node_CustomEvent_UsePitch, bool CallFunc_GetTurnDirection_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_FClamp_ReturnValue_2, float CallFunc_FClamp_ReturnValue_3, float CallFunc_FClamp_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_FClamp_ReturnValue_5, float CallFunc_FClamp_ReturnValue_6);
}; // Size: 0x1e0
#pragma pack(pop)
