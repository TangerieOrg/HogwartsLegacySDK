#include "AActor.hpp"
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
#include "UBP_SplineCollisionGenerator_C.hpp"
#include "UFunction.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "UPhysicalMaterial.hpp"
#include "USplineComponent.hpp"
UBP_SplineCollisionGenerator_C* UBP_SplineCollisionGenerator_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C");
    return (UBP_SplineCollisionGenerator_C*)res;
}
void UBP_SplineCollisionGenerator_C::GetAbsDelta(FRotator A, FRotator B, float& Yaw, FRotator CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.GetAbsDelta"));
    struct Params_GetAbsDelta {
        FRotator A; // 0x0
        FRotator B; // 0xc
        float Yaw; // 0x18
        FRotator CallFunc_NormalizedDeltaRotator_ReturnValue; // 0x1c
        float CallFunc_BreakRotator_Roll; // 0x28
        float CallFunc_BreakRotator_Pitch; // 0x2c
        float CallFunc_BreakRotator_Yaw; // 0x30
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x34
        float CallFunc_Abs_ReturnValue; // 0x38
    }; // Size: 0x3c
    Params_GetAbsDelta params{};
    params.A = (FRotator)A;
    params.B = (FRotator)B;
    params.Yaw = (float)Yaw;
    params.CallFunc_NormalizedDeltaRotator_ReturnValue = (FRotator)CallFunc_NormalizedDeltaRotator_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Abs_ReturnValue = (float)CallFunc_Abs_ReturnValue;
    ProcessEvent(func, &params);
    Yaw = params.Yaw;
}
void UBP_SplineCollisionGenerator_C::SnapInstancesToSpline(TArray<FTransform> NewTransforms, TArray<FTransform> OriginalTransforms, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, FTransform CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_FindLocationClosestToWorldLocation_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_GetInstanceTransform_OutInstanceTransform, bool CallFunc_GetInstanceTransform_ReturnValue, int32_t CallFunc_AddInstanceWorldSpace_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_GetInstanceCount_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.SnapInstancesToSpline"));
    struct Params_SnapInstancesToSpline {
        TArray<FTransform> NewTransforms; // 0x0
        TArray<FTransform> OriginalTransforms; // 0x10
        int32_t Temp_int_Array_Index_Variable; // 0x20
        int32_t Temp_int_Variable; // 0x24
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x28
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x2c
        int32_t Temp_int_Loop_Counter_Variable; // 0x30
        char pad_34[0xc];
        FTransform CallFunc_Array_Get_Item; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue; // 0x70
        FVector CallFunc_BreakTransform_Location; // 0x74
        FRotator CallFunc_BreakTransform_Rotation; // 0x80
        FVector CallFunc_BreakTransform_Scale; // 0x8c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x98
        char pad_99[0x3];
        float CallFunc_BreakVector_X; // 0x9c
        float CallFunc_BreakVector_Y; // 0xa0
        float CallFunc_BreakVector_Z; // 0xa4
        FVector CallFunc_FindLocationClosestToWorldLocation_ReturnValue; // 0xa8
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0xb4
        float CallFunc_BreakVector_X_1; // 0xb8
        float CallFunc_BreakVector_Y_1; // 0xbc
        float CallFunc_BreakVector_Z_1; // 0xc0
        float CallFunc_Add_FloatFloat_ReturnValue; // 0xc4
        FVector CallFunc_MakeVector_ReturnValue; // 0xc8
        char pad_d4[0xc];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0xe0
        FTransform CallFunc_GetInstanceTransform_OutInstanceTransform; // 0x110
        bool CallFunc_GetInstanceTransform_ReturnValue; // 0x140
        char pad_141[0x3];
        int32_t CallFunc_AddInstanceWorldSpace_ReturnValue; // 0x144
        int32_t CallFunc_Array_Add_ReturnValue; // 0x148
        int32_t CallFunc_GetInstanceCount_ReturnValue; // 0x14c
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x150
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x154
    }; // Size: 0x155
    Params_SnapInstancesToSpline params{};
    params.NewTransforms = (TArray<FTransform>)NewTransforms;
    params.OriginalTransforms = (TArray<FTransform>)OriginalTransforms;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Array_Get_Item = (FTransform)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_FindLocationClosestToWorldLocation_ReturnValue = (FVector)CallFunc_FindLocationClosestToWorldLocation_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_BreakVector_X_1 = (float)CallFunc_BreakVector_X_1;
    params.CallFunc_BreakVector_Y_1 = (float)CallFunc_BreakVector_Y_1;
    params.CallFunc_BreakVector_Z_1 = (float)CallFunc_BreakVector_Z_1;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_GetInstanceTransform_OutInstanceTransform = (FTransform)CallFunc_GetInstanceTransform_OutInstanceTransform;
    params.CallFunc_GetInstanceTransform_ReturnValue = (bool)CallFunc_GetInstanceTransform_ReturnValue;
    params.CallFunc_AddInstanceWorldSpace_ReturnValue = (int32_t)CallFunc_AddInstanceWorldSpace_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_GetInstanceCount_ReturnValue = (int32_t)CallFunc_GetInstanceCount_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
bool UBP_SplineCollisionGenerator_C::GetTurnDirection(float LastStart, float LastEnd, float CheckEnd, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_1, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_2, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_3, FRotator CallFunc_FindLookAtRotation_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, FVector CallFunc_GetRightVector_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.GetTurnDirection"));
    struct Params_GetTurnDirection {
        float LastStart; // 0x0
        float LastEnd; // 0x4
        float CheckEnd; // 0x8
        bool ReturnValue; // 0xc
        char pad_d[0x3];
        FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue; // 0x10
        FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_1; // 0x1c
        FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_2; // 0x28
        FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_3; // 0x34
        FRotator CallFunc_FindLookAtRotation_ReturnValue; // 0x40
        FRotator CallFunc_FindLookAtRotation_ReturnValue_1; // 0x4c
        FVector CallFunc_GetRightVector_ReturnValue; // 0x58
        FVector CallFunc_GetForwardVector_ReturnValue; // 0x64
        float CallFunc_Dot_VectorVector_ReturnValue; // 0x70
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x74
    }; // Size: 0x75
    Params_GetTurnDirection params{};
    params.LastStart = (float)LastStart;
    params.LastEnd = (float)LastEnd;
    params.CheckEnd = (float)CheckEnd;
    params.CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue = (FVector)CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue;
    params.CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_1 = (FVector)CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_1;
    params.CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_2 = (FVector)CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_2;
    params.CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_3 = (FVector)CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_3;
    params.CallFunc_FindLookAtRotation_ReturnValue = (FRotator)CallFunc_FindLookAtRotation_ReturnValue;
    params.CallFunc_FindLookAtRotation_ReturnValue_1 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_1;
    params.CallFunc_GetRightVector_ReturnValue = (FVector)CallFunc_GetRightVector_ReturnValue;
    params.CallFunc_GetForwardVector_ReturnValue = (FVector)CallFunc_GetForwardVector_ReturnValue;
    params.CallFunc_Dot_VectorVector_ReturnValue = (float)CallFunc_Dot_VectorVector_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBP_SplineCollisionGenerator_C::CheckAngleDelta(float StartDistance, float EndDistance, float CheckDistance, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_2, FRotator CallFunc_FindLookAtRotation_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, float CallFunc_GetAbsDelta_Yaw, bool CallFunc_Greater_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.CheckAngleDelta"));
    struct Params_CheckAngleDelta {
        float StartDistance; // 0x0
        float EndDistance; // 0x4
        float CheckDistance; // 0x8
        bool ReturnValue; // 0xc
        char pad_d[0x3];
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x10
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0x1c
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_2; // 0x28
        FRotator CallFunc_FindLookAtRotation_ReturnValue; // 0x34
        FRotator CallFunc_FindLookAtRotation_ReturnValue_1; // 0x40
        float CallFunc_GetAbsDelta_Yaw; // 0x4c
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x50
    }; // Size: 0x51
    Params_CheckAngleDelta params{};
    params.StartDistance = (float)StartDistance;
    params.EndDistance = (float)EndDistance;
    params.CheckDistance = (float)CheckDistance;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_2 = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_2;
    params.CallFunc_FindLookAtRotation_ReturnValue = (FRotator)CallFunc_FindLookAtRotation_ReturnValue;
    params.CallFunc_FindLookAtRotation_ReturnValue_1 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_1;
    params.CallFunc_GetAbsDelta_Yaw = (float)CallFunc_GetAbsDelta_Yaw;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBP_SplineCollisionGenerator_C::CreateSplineHelper(int32_t Temp_int_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FTransform CallFunc_GetRelativeTransform_ReturnValue, ESplinePointType::Type CallFunc_GetSplinePointType_ReturnValue, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue, FTransform CallFunc_GetTransformAtSplinePoint_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_Multiply_VectorVector_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_GetArriveTangentAtSplinePoint_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Multiply_VectorVector_ReturnValue_1, FSplinePoint K2Node_MakeStruct_SplinePoint, int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, USplineComponent* CallFunc_AddComponentByClass_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.CreateSplineHelper"));
    struct Params_CreateSplineHelper {
        int32_t Temp_int_Variable; // 0x0
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        FTransform CallFunc_GetRelativeTransform_ReturnValue; // 0x10
        ESplinePointType::Type CallFunc_GetSplinePointType_ReturnValue; // 0x40
        char pad_41[0x3];
        FVector CallFunc_GetLocationAtSplinePoint_ReturnValue; // 0x44
        FTransform CallFunc_GetTransformAtSplinePoint_ReturnValue; // 0x50
        float CallFunc_BreakVector_X; // 0x80
        float CallFunc_BreakVector_Y; // 0x84
        float CallFunc_BreakVector_Z; // 0x88
        FVector CallFunc_BreakTransform_Location; // 0x8c
        FRotator CallFunc_BreakTransform_Rotation; // 0x98
        FVector CallFunc_BreakTransform_Scale; // 0xa4
        FVector CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue; // 0xb0
        float CallFunc_BreakRotator_Roll; // 0xbc
        float CallFunc_BreakRotator_Pitch; // 0xc0
        float CallFunc_BreakRotator_Yaw; // 0xc4
        FVector CallFunc_Multiply_VectorVector_ReturnValue; // 0xc8
        FRotator CallFunc_MakeRotator_ReturnValue; // 0xd4
        float CallFunc_BreakVector_X_1; // 0xe0
        float CallFunc_BreakVector_Y_1; // 0xe4
        float CallFunc_BreakVector_Z_1; // 0xe8
        FVector CallFunc_GetArriveTangentAtSplinePoint_ReturnValue; // 0xec
        FVector CallFunc_MakeVector_ReturnValue; // 0xf8
        FVector CallFunc_Multiply_VectorVector_ReturnValue_1; // 0x104
        FSplinePoint K2Node_MakeStruct_SplinePoint; // 0x110
        int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue; // 0x154
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x158
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x15c
        char pad_15d[0x3];
        AActor* CallFunc_GetOwner_ReturnValue; // 0x160
        USplineComponent* CallFunc_AddComponentByClass_ReturnValue; // 0x168
    }; // Size: 0x170
    Params_CreateSplineHelper params{};
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetRelativeTransform_ReturnValue = (FTransform)CallFunc_GetRelativeTransform_ReturnValue;
    params.CallFunc_GetSplinePointType_ReturnValue = (ESplinePointType::Type)CallFunc_GetSplinePointType_ReturnValue;
    params.CallFunc_GetLocationAtSplinePoint_ReturnValue = (FVector)CallFunc_GetLocationAtSplinePoint_ReturnValue;
    params.CallFunc_GetTransformAtSplinePoint_ReturnValue = (FTransform)CallFunc_GetTransformAtSplinePoint_ReturnValue;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue = (FVector)CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_Multiply_VectorVector_ReturnValue = (FVector)CallFunc_Multiply_VectorVector_ReturnValue;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.CallFunc_BreakVector_X_1 = (float)CallFunc_BreakVector_X_1;
    params.CallFunc_BreakVector_Y_1 = (float)CallFunc_BreakVector_Y_1;
    params.CallFunc_BreakVector_Z_1 = (float)CallFunc_BreakVector_Z_1;
    params.CallFunc_GetArriveTangentAtSplinePoint_ReturnValue = (FVector)CallFunc_GetArriveTangentAtSplinePoint_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_Multiply_VectorVector_ReturnValue_1 = (FVector)CallFunc_Multiply_VectorVector_ReturnValue_1;
    params.K2Node_MakeStruct_SplinePoint = (FSplinePoint)K2Node_MakeStruct_SplinePoint;
    params.CallFunc_GetNumberOfSplinePoints_ReturnValue = (int32_t)CallFunc_GetNumberOfSplinePoints_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.CallFunc_AddComponentByClass_ReturnValue = (USplineComponent*)CallFunc_AddComponentByClass_ReturnValue;
    ProcessEvent(func, &params);
}
void UBP_SplineCollisionGenerator_C::Get_Map_Values(int32_t Index) {}
void UBP_SplineCollisionGenerator_C::GetGenerationReport() {}
FVector UBP_SplineCollisionGenerator_C::GetProjectedCornerPoint(float EndDistance, FVector& CornerPoint, bool TurnDirection, float CallFunc_SelectFloat_ReturnValue, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, float CallFunc_FindAngle_Angle, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_RotateAngleAxis_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.GetProjectedCornerPoint"));
    struct Params_GetProjectedCornerPoint {
        float EndDistance; // 0x0
        FVector CornerPoint; // 0x4
        bool TurnDirection; // 0x10
        char pad_11[0x3];
        FVector ReturnValue; // 0x14
        float CallFunc_SelectFloat_ReturnValue; // 0x20
        FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue; // 0x24
        FRotator CallFunc_FindLookAtRotation_ReturnValue; // 0x30
        float CallFunc_Vector_Distance_ReturnValue; // 0x3c
        FVector CallFunc_GetForwardVector_ReturnValue; // 0x40
        float CallFunc_FindAngle_Angle; // 0x4c
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x50
        FVector CallFunc_RotateAngleAxis_ReturnValue; // 0x54
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x60
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x6c
    }; // Size: 0x78
    Params_GetProjectedCornerPoint params{};
    params.EndDistance = (float)EndDistance;
    params.CornerPoint = (FVector)CornerPoint;
    params.TurnDirection = (bool)TurnDirection;
    params.CallFunc_SelectFloat_ReturnValue = (float)CallFunc_SelectFloat_ReturnValue;
    params.CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue = (FVector)CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue;
    params.CallFunc_FindLookAtRotation_ReturnValue = (FRotator)CallFunc_FindLookAtRotation_ReturnValue;
    params.CallFunc_Vector_Distance_ReturnValue = (float)CallFunc_Vector_Distance_ReturnValue;
    params.CallFunc_GetForwardVector_ReturnValue = (FVector)CallFunc_GetForwardVector_ReturnValue;
    params.CallFunc_FindAngle_Angle = (float)CallFunc_FindAngle_Angle;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_RotateAngleAxis_ReturnValue = (FVector)CallFunc_RotateAngleAxis_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    ProcessEvent(func, &params);
    CornerPoint = params.CornerPoint;
    return (FVector)params.ReturnValue;
}
FVector UBP_SplineCollisionGenerator_C::GetOutsideCornerPoint(float LastStart, FVector OffsetStartPoint, float LastEnd, bool TurnDirection, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_1, FVector CallFunc_SelectVector_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_GetRightVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, FVector CallFunc_Divide_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_3, FVector CallFunc_Add_VectorVector_ReturnValue_4, FVector CallFunc_SelectVector_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.GetOutsideCornerPoint"));
    struct Params_GetOutsideCornerPoint {
        float LastStart; // 0x0
        FVector OffsetStartPoint; // 0x4
        float LastEnd; // 0x10
        bool TurnDirection; // 0x14
        char pad_15[0x3];
        FVector ReturnValue; // 0x18
        FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue; // 0x24
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x30
        bool CallFunc_EqualEqual_VectorVector_ReturnValue; // 0x34
        char pad_35[0x3];
        FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_1; // 0x38
        FVector CallFunc_SelectVector_ReturnValue; // 0x44
        float CallFunc_Vector_Distance_ReturnValue; // 0x50
        FRotator CallFunc_FindLookAtRotation_ReturnValue; // 0x54
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0x60
        FVector CallFunc_GetForwardVector_ReturnValue; // 0x64
        FVector CallFunc_GetRightVector_ReturnValue; // 0x70
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x7c
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_1; // 0x88
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_2; // 0x94
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0xa0
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_3; // 0xac
        FVector CallFunc_Divide_VectorFloat_ReturnValue; // 0xb8
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0xc4
        FVector CallFunc_Add_VectorVector_ReturnValue_2; // 0xd0
        FVector CallFunc_Add_VectorVector_ReturnValue_3; // 0xdc
        FVector CallFunc_Add_VectorVector_ReturnValue_4; // 0xe8
        FVector CallFunc_SelectVector_ReturnValue_1; // 0xf4
    }; // Size: 0x100
    Params_GetOutsideCornerPoint params{};
    params.LastStart = (float)LastStart;
    params.OffsetStartPoint = (FVector)OffsetStartPoint;
    params.LastEnd = (float)LastEnd;
    params.TurnDirection = (bool)TurnDirection;
    params.CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue = (FVector)CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_EqualEqual_VectorVector_ReturnValue = (bool)CallFunc_EqualEqual_VectorVector_ReturnValue;
    params.CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_1 = (FVector)CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_1;
    params.CallFunc_SelectVector_ReturnValue = (FVector)CallFunc_SelectVector_ReturnValue;
    params.CallFunc_Vector_Distance_ReturnValue = (float)CallFunc_Vector_Distance_ReturnValue;
    params.CallFunc_FindLookAtRotation_ReturnValue = (FRotator)CallFunc_FindLookAtRotation_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    params.CallFunc_GetForwardVector_ReturnValue = (FVector)CallFunc_GetForwardVector_ReturnValue;
    params.CallFunc_GetRightVector_ReturnValue = (FVector)CallFunc_GetRightVector_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_1 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_1;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_2 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_2;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_3 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_3;
    params.CallFunc_Divide_VectorFloat_ReturnValue = (FVector)CallFunc_Divide_VectorFloat_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue_2 = (FVector)CallFunc_Add_VectorVector_ReturnValue_2;
    params.CallFunc_Add_VectorVector_ReturnValue_3 = (FVector)CallFunc_Add_VectorVector_ReturnValue_3;
    params.CallFunc_Add_VectorVector_ReturnValue_4 = (FVector)CallFunc_Add_VectorVector_ReturnValue_4;
    params.CallFunc_SelectVector_ReturnValue_1 = (FVector)CallFunc_SelectVector_ReturnValue_1;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UBP_SplineCollisionGenerator_C::FindAngle(float AB_Length, float C_Length, float& Angle, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_DegAcos_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.FindAngle"));
    struct Params_FindAngle {
        float AB_Length; // 0x0
        float C_Length; // 0x4
        float Angle; // 0x8
        float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue; // 0xc
        float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1; // 0x10
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x14
        float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2; // 0x18
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x1c
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x20
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x24
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x28
        float CallFunc_DegAcos_ReturnValue; // 0x2c
    }; // Size: 0x30
    Params_FindAngle params{};
    params.AB_Length = (float)AB_Length;
    params.C_Length = (float)C_Length;
    params.Angle = (float)Angle;
    params.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = (float)CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
    params.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = (float)CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2 = (float)CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_DegAcos_ReturnValue = (float)CallFunc_DegAcos_ReturnValue;
    ProcessEvent(func, &params);
    Angle = params.Angle;
}
FVector UBP_SplineCollisionGenerator_C::Get_Location_At_Distance_Along_Spline(float Distance, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.Get Location At Distance Along Spline"));
    struct Params_Get_Location_At_Distance_Along_Spline {
        float Distance; // 0x0
        FVector ReturnValue; // 0x4
        bool CallFunc_IsValid_ReturnValue; // 0x10
        char pad_11[0x3];
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x14
        bool CallFunc_IsValid_ReturnValue_1; // 0x20
        char pad_21[0x3];
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0x24
    }; // Size: 0x30
    Params_Get_Location_At_Distance_Along_Spline params{};
    params.Distance = (float)Distance;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UBP_SplineCollisionGenerator_C::CreateNewInstance(FVector BoxStart, FVector BoxEnd, float CallFunc_Vector_Distance_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_Add_VectorVector_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_Divide_VectorFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_NotEqual_VectorVector_ReturnValue, FRotator CallFunc_SelectRotator_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, int32_t CallFunc_AddInstance_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.CreateNewInstance"));
    struct Params_CreateNewInstance {
        FVector BoxStart; // 0x0
        FVector BoxEnd; // 0xc
        float CallFunc_Vector_Distance_ReturnValue; // 0x18
        FRotator CallFunc_FindLookAtRotation_ReturnValue; // 0x1c
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x28
        float CallFunc_BreakRotator_Roll; // 0x2c
        float CallFunc_BreakRotator_Pitch; // 0x30
        float CallFunc_BreakRotator_Yaw; // 0x34
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x38
        FRotator CallFunc_MakeRotator_ReturnValue; // 0x44
        FVector CallFunc_Divide_VectorFloat_ReturnValue; // 0x50
        FRotator CallFunc_MakeRotator_ReturnValue_1; // 0x5c
        bool CallFunc_NotEqual_VectorVector_ReturnValue; // 0x68
        char pad_69[0x3];
        FRotator CallFunc_SelectRotator_ReturnValue; // 0x6c
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0x78
        float CallFunc_Divide_FloatFloat_ReturnValue_2; // 0x7c
        FVector CallFunc_MakeVector_ReturnValue; // 0x80
        float CallFunc_Divide_FloatFloat_ReturnValue_3; // 0x8c
        FVector CallFunc_MakeVector_ReturnValue_1; // 0x90
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0x9c
        char pad_a8[0x8];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0xb0
        int32_t CallFunc_AddInstance_ReturnValue; // 0xe0
    }; // Size: 0xe4
    Params_CreateNewInstance params{};
    params.BoxStart = (FVector)BoxStart;
    params.BoxEnd = (FVector)BoxEnd;
    params.CallFunc_Vector_Distance_ReturnValue = (float)CallFunc_Vector_Distance_ReturnValue;
    params.CallFunc_FindLookAtRotation_ReturnValue = (FRotator)CallFunc_FindLookAtRotation_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.CallFunc_Divide_VectorFloat_ReturnValue = (FVector)CallFunc_Divide_VectorFloat_ReturnValue;
    params.CallFunc_MakeRotator_ReturnValue_1 = (FRotator)CallFunc_MakeRotator_ReturnValue_1;
    params.CallFunc_NotEqual_VectorVector_ReturnValue = (bool)CallFunc_NotEqual_VectorVector_ReturnValue;
    params.CallFunc_SelectRotator_ReturnValue = (FRotator)CallFunc_SelectRotator_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    params.CallFunc_Divide_FloatFloat_ReturnValue_2 = (float)CallFunc_Divide_FloatFloat_ReturnValue_2;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue_3 = (float)CallFunc_Divide_FloatFloat_ReturnValue_3;
    params.CallFunc_MakeVector_ReturnValue_1 = (FVector)CallFunc_MakeVector_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_AddInstance_ReturnValue = (int32_t)CallFunc_AddInstance_ReturnValue;
    ProcessEvent(func, &params);
}
void UBP_SplineCollisionGenerator_C::GenerateCollisionInstances(USplineComponent* SplineComponent, UInstancedStaticMeshComponent* InstancedStaticMeshComponent, FF_SplineCollisionGenerationSettings GenerationSettings, bool UsePitch) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineCollisionGenerator.BP_SplineCollisionGenerator_C.GenerateCollisionInstances"));
    struct Params_GenerateCollisionInstances {
        USplineComponent* SplineComponent; // 0x0
        UInstancedStaticMeshComponent* InstancedStaticMeshComponent; // 0x8
        FF_SplineCollisionGenerationSettings GenerationSettings; // 0x10
        bool UsePitch; // 0xa0
    }; // Size: 0xa1
    Params_GenerateCollisionInstances params{};
    params.SplineComponent = (USplineComponent*)SplineComponent;
    params.InstancedStaticMeshComponent = (UInstancedStaticMeshComponent*)InstancedStaticMeshComponent;
    params.GenerationSettings = (FF_SplineCollisionGenerationSettings)GenerationSettings;
    params.UsePitch = (bool)UsePitch;
    ProcessEvent(func, &params);
}
void UBP_SplineCollisionGenerator_C::ExecuteUbergraph_BP_SplineCollisionGenerator(int32_t EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CheckAngleDelta_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Divide_VectorFloat_ReturnValue, FVector CallFunc_GetOutsideCornerPoint_ReturnValue, FVector CallFunc_GetProjectedCornerPoint_ReturnValue, FVector CallFunc_Get_Location_At_Distance_Along_Spline_ReturnValue_2, USplineComponent* K2Node_CustomEvent_SplineComponent, UInstancedStaticMeshComponent* K2Node_CustomEvent_InstancedStaticMeshComponent, FF_SplineCollisionGenerationSettings K2Node_CustomEvent_GenerationSettings, bool K2Node_CustomEvent_UsePitch, bool CallFunc_GetTurnDirection_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_FClamp_ReturnValue_2, float CallFunc_FClamp_ReturnValue_3, float CallFunc_FClamp_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_FClamp_ReturnValue_5, float CallFunc_FClamp_ReturnValue_6) {}
