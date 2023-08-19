#include "AActor.hpp"
#include "FBoxSphereBounds.hpp"
#include "FFormatArgumentData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBP_SplineToolGenerator_C.hpp"
#include "UFunction.hpp"
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "USplineComponent.hpp"
#include "USplineMeshComponent.hpp"
#include "USplineToolGenerator.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
void UBP_SplineToolGenerator_C::PurePrintFloat(FString NewParam, float FloatValue, float& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.PurePrintFloat"));
    struct Params_PurePrintFloat {
        FString NewParam; // 0x0
        float FloatValue; // 0x10
        float Value; // 0x14
    }; // Size: 0x18
    Params_PurePrintFloat params{};
    params.NewParam = (FString)NewParam;
    params.FloatValue = (float)FloatValue;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
    Value = params.Value;
}
UBP_SplineToolGenerator_C* UBP_SplineToolGenerator_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C");
    return (UBP_SplineToolGenerator_C*)res;
}
void UBP_SplineToolGenerator_C::AddStaticMeshComponent(FVector InTransformLocation, FRotator InRotation, FName InCollisionProfileName, float InSectionLength, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_PickWeightedRandom_Success, int32_t CallFunc_PickWeightedRandom_Return, AActor* CallFunc_GetOwner_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue, UStaticMesh* CallFunc_Array_Get_Item, float CallFunc_GetRelativeScaleToSpacing_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UStaticMeshComponent* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.AddStaticMeshComponent"));
    struct Params_AddStaticMeshComponent {
        FVector InTransformLocation; // 0x0
        FRotator InRotation; // 0xc
        FName InCollisionProfileName; // 0x18
        float InSectionLength; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x24
        bool CallFunc_PickWeightedRandom_Success; // 0x28
        char pad_29[0x3];
        int32_t CallFunc_PickWeightedRandom_Return; // 0x2c
        AActor* CallFunc_GetOwner_ReturnValue; // 0x30
        int32_t CallFunc_SelectInt_ReturnValue; // 0x38
        char pad_3c[0x4];
        UStaticMesh* CallFunc_Array_Get_Item; // 0x40
        float CallFunc_GetRelativeScaleToSpacing_ReturnValue; // 0x48
        FVector CallFunc_MakeVector_ReturnValue; // 0x4c
        char pad_58[0x8];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x60
        UStaticMeshComponent* CallFunc_AddComponentByClass_ReturnValue; // 0x90
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x98
    }; // Size: 0x99
    Params_AddStaticMeshComponent params{};
    params.InTransformLocation = (FVector)InTransformLocation;
    params.InRotation = (FRotator)InRotation;
    params.InCollisionProfileName = (FName)InCollisionProfileName;
    params.InSectionLength = (float)InSectionLength;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_PickWeightedRandom_Success = (bool)CallFunc_PickWeightedRandom_Success;
    params.CallFunc_PickWeightedRandom_Return = (int32_t)CallFunc_PickWeightedRandom_Return;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.CallFunc_SelectInt_ReturnValue = (int32_t)CallFunc_SelectInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (UStaticMesh*)CallFunc_Array_Get_Item;
    params.CallFunc_GetRelativeScaleToSpacing_ReturnValue = (float)CallFunc_GetRelativeScaleToSpacing_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_AddComponentByClass_ReturnValue = (UStaticMeshComponent*)CallFunc_AddComponentByClass_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    ProcessEvent(func, &params);
}
float UBP_SplineToolGenerator_C::GetRelativeScaleToSpacing(UStaticMesh* StaticMesh, int32_t Index, float SectionLength, FBoxSphereBounds CallFunc_GetBounds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_SafeDivide_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.GetRelativeScaleToSpacing"));
    struct Params_GetRelativeScaleToSpacing {
        UStaticMesh* StaticMesh; // 0x0
        int32_t Index; // 0x8
        float SectionLength; // 0xc
        float ReturnValue; // 0x10
        FBoxSphereBounds CallFunc_GetBounds_ReturnValue; // 0x14
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x30
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x34
        float CallFunc_BreakVector_X; // 0x38
        float CallFunc_BreakVector_Y; // 0x3c
        float CallFunc_BreakVector_Z; // 0x40
        float CallFunc_Multiply_IntFloat_ReturnValue; // 0x44
        float CallFunc_SafeDivide_ReturnValue; // 0x48
    }; // Size: 0x4c
    Params_GetRelativeScaleToSpacing params{};
    params.StaticMesh = (UStaticMesh*)StaticMesh;
    params.Index = (int32_t)Index;
    params.SectionLength = (float)SectionLength;
    params.CallFunc_GetBounds_ReturnValue = (FBoxSphereBounds)CallFunc_GetBounds_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_Multiply_IntFloat_ReturnValue = (float)CallFunc_Multiply_IntFloat_ReturnValue;
    params.CallFunc_SafeDivide_ReturnValue = (float)CallFunc_SafeDivide_ReturnValue;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UBP_SplineToolGenerator_C::GenerateInstances(USplineComponent* Spline, float MeshSpacing, float CreateInstanceChance, TArray<UStaticMesh*>& StaticMeshes, TArray<float>& MeshRandomWeights, bool RandomizeMeshes, FRandomStream RandomSeed, bool RotateMeshesAtOrigin, bool FlipMesh, bool StartAndEndMesh, UStaticMesh* StartMesh, UStaticMesh* EndMesh, bool UseSplineMeshByMaxAngle, float MaxAngleDelta, float SpacingOffset, bool InGenerateOverlapEvents, FName InCollisionProfileName, bool EnableDebugging, int32_t UseHISMThreshold) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.GenerateInstances"));
    struct Params_GenerateInstances {
        USplineComponent* Spline; // 0x0
        float MeshSpacing; // 0x8
        float CreateInstanceChance; // 0xc
        TArray<UStaticMesh*> StaticMeshes; // 0x10
        TArray<float> MeshRandomWeights; // 0x20
        bool RandomizeMeshes; // 0x30
        char pad_31[0x3];
        FRandomStream RandomSeed; // 0x34
        bool RotateMeshesAtOrigin; // 0x3c
        bool FlipMesh; // 0x3d
        bool StartAndEndMesh; // 0x3e
        char pad_3f[0x1];
        UStaticMesh* StartMesh; // 0x40
        UStaticMesh* EndMesh; // 0x48
        bool UseSplineMeshByMaxAngle; // 0x50
        char pad_51[0x3];
        float MaxAngleDelta; // 0x54
        float SpacingOffset; // 0x58
        bool InGenerateOverlapEvents; // 0x5c
        char pad_5d[0x3];
        FName InCollisionProfileName; // 0x60
        bool EnableDebugging; // 0x68
        char pad_69[0x3];
        int32_t UseHISMThreshold; // 0x6c
    }; // Size: 0x70
    Params_GenerateInstances params{};
    params.Spline = (USplineComponent*)Spline;
    params.MeshSpacing = (float)MeshSpacing;
    params.CreateInstanceChance = (float)CreateInstanceChance;
    params.StaticMeshes = (TArray<UStaticMesh*>)StaticMeshes;
    params.MeshRandomWeights = (TArray<float>)MeshRandomWeights;
    params.RandomizeMeshes = (bool)RandomizeMeshes;
    params.RandomSeed = (FRandomStream)RandomSeed;
    params.RotateMeshesAtOrigin = (bool)RotateMeshesAtOrigin;
    params.FlipMesh = (bool)FlipMesh;
    params.StartAndEndMesh = (bool)StartAndEndMesh;
    params.StartMesh = (UStaticMesh*)StartMesh;
    params.EndMesh = (UStaticMesh*)EndMesh;
    params.UseSplineMeshByMaxAngle = (bool)UseSplineMeshByMaxAngle;
    params.MaxAngleDelta = (float)MaxAngleDelta;
    params.SpacingOffset = (float)SpacingOffset;
    params.InGenerateOverlapEvents = (bool)InGenerateOverlapEvents;
    params.InCollisionProfileName = (FName)InCollisionProfileName;
    params.EnableDebugging = (bool)EnableDebugging;
    params.UseHISMThreshold = (int32_t)UseHISMThreshold;
    ProcessEvent(func, &params);
    MeshRandomWeights = params.MeshRandomWeights;
    StaticMeshes = params.StaticMeshes;
}
void UBP_SplineToolGenerator_C::ShowDebugLines(float InDebugOffset, float StartDistance, float EndDistance, FRotator CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.ShowDebugLines"));
    struct Params_ShowDebugLines {
        float InDebugOffset; // 0x0
        float StartDistance; // 0x4
        float EndDistance; // 0x8
        FRotator CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue; // 0xc
        FVector CallFunc_GetForwardVector_ReturnValue; // 0x18
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x24
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x30
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0x3c
        AActor* CallFunc_GetOwner_ReturnValue; // 0x48
        AActor* CallFunc_GetOwner_ReturnValue_1; // 0x50
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x58
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x64
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x70
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0x7c
        float CallFunc_BreakVector_X; // 0x88
        float CallFunc_BreakVector_Y; // 0x8c
        float CallFunc_BreakVector_Z; // 0x90
        float CallFunc_BreakVector_X_1; // 0x94
        float CallFunc_BreakVector_Y_1; // 0x98
        float CallFunc_BreakVector_Z_1; // 0x9c
        float CallFunc_Add_FloatFloat_ReturnValue; // 0xa0
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0xa4
        FVector CallFunc_MakeVector_ReturnValue; // 0xa8
        FVector CallFunc_MakeVector_ReturnValue_1; // 0xb4
        FVector CallFunc_Add_VectorVector_ReturnValue_2; // 0xc0
        FVector CallFunc_Add_VectorVector_ReturnValue_3; // 0xcc
    }; // Size: 0xd8
    Params_ShowDebugLines params{};
    params.InDebugOffset = (float)InDebugOffset;
    params.StartDistance = (float)StartDistance;
    params.EndDistance = (float)EndDistance;
    params.CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue = (FRotator)CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_GetForwardVector_ReturnValue = (FVector)CallFunc_GetForwardVector_ReturnValue;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.CallFunc_GetOwner_ReturnValue_1 = (AActor*)CallFunc_GetOwner_ReturnValue_1;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_BreakVector_X_1 = (float)CallFunc_BreakVector_X_1;
    params.CallFunc_BreakVector_Y_1 = (float)CallFunc_BreakVector_Y_1;
    params.CallFunc_BreakVector_Z_1 = (float)CallFunc_BreakVector_Z_1;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue_1 = (FVector)CallFunc_MakeVector_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue_2 = (FVector)CallFunc_Add_VectorVector_ReturnValue_2;
    params.CallFunc_Add_VectorVector_ReturnValue_3 = (FVector)CallFunc_Add_VectorVector_ReturnValue_3;
    ProcessEvent(func, &params);
}
void UBP_SplineToolGenerator_C::GenerateUsageDebugData(int32_t CallFunc_Array_Length_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, int32_t Temp_int_Variable, TArray<USplineMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, UInstancedStaticMeshComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_GetInstanceCount_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.GenerateUsageDebugData"));
    struct Params_GenerateUsageDebugData {
        int32_t CallFunc_Array_Length_ReturnValue; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetOwner_ReturnValue; // 0x8
        int32_t Temp_int_Variable; // 0x10
        char pad_14[0x4];
        TArray<USplineMeshComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x18
        UInstancedStaticMeshComponent* CallFunc_Array_Get_Item; // 0x28
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x30
        int32_t CallFunc_GetInstanceCount_ReturnValue; // 0x34
        bool CallFunc_Array_IsValidIndex_ReturnValue; // 0x38
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x39
        char pad_3a[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x3c
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x40
    }; // Size: 0x44
    Params_GenerateUsageDebugData params{};
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<USplineMeshComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.CallFunc_Array_Get_Item = (UInstancedStaticMeshComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_GetInstanceCount_ReturnValue = (int32_t)CallFunc_GetInstanceCount_ReturnValue;
    params.CallFunc_Array_IsValidIndex_ReturnValue = (bool)CallFunc_Array_IsValidIndex_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
}
void UBP_SplineToolGenerator_C::AddSplineMesh(int32_t InSplineLoopIndex, bool InGenerateOverlapEvents, FName InCollisionProfileName, float CallFunc_GetLocationsByIndex_SectionStartLocation, float CallFunc_GetLocationsByIndex_SectionEndLocation, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, float CallFunc_FClamp_ReturnValue, FVector CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_PickWeightedRandom_Success, int32_t CallFunc_PickWeightedRandom_Return, USplineMeshComponent* CallFunc_AddComponentByClass_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue, UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.AddSplineMesh"));
    struct Params_AddSplineMesh {
        int32_t InSplineLoopIndex; // 0x0
        bool InGenerateOverlapEvents; // 0x4
        char pad_5[0x3];
        FName InCollisionProfileName; // 0x8
        float CallFunc_GetLocationsByIndex_SectionStartLocation; // 0x10
        float CallFunc_GetLocationsByIndex_SectionEndLocation; // 0x14
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x18
        float CallFunc_FClamp_ReturnValue; // 0x24
        FVector CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue; // 0x28
        FVector CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue_1; // 0x34
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0x40
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x4c
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_1; // 0x58
        int32_t CallFunc_Array_Length_ReturnValue; // 0x64
        AActor* CallFunc_GetOwner_ReturnValue; // 0x68
        bool CallFunc_PickWeightedRandom_Success; // 0x70
        char pad_71[0x3];
        int32_t CallFunc_PickWeightedRandom_Return; // 0x74
        USplineMeshComponent* CallFunc_AddComponentByClass_ReturnValue; // 0x78
        int32_t CallFunc_SelectInt_ReturnValue; // 0x80
        char pad_84[0x4];
        UStaticMesh* CallFunc_Array_Get_Item; // 0x88
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x90
    }; // Size: 0x91
    Params_AddSplineMesh params{};
    params.InSplineLoopIndex = (int32_t)InSplineLoopIndex;
    params.InGenerateOverlapEvents = (bool)InGenerateOverlapEvents;
    params.InCollisionProfileName = (FName)InCollisionProfileName;
    params.CallFunc_GetLocationsByIndex_SectionStartLocation = (float)CallFunc_GetLocationsByIndex_SectionStartLocation;
    params.CallFunc_GetLocationsByIndex_SectionEndLocation = (float)CallFunc_GetLocationsByIndex_SectionEndLocation;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_FClamp_ReturnValue = (float)CallFunc_FClamp_ReturnValue;
    params.CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_1 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.CallFunc_PickWeightedRandom_Success = (bool)CallFunc_PickWeightedRandom_Success;
    params.CallFunc_PickWeightedRandom_Return = (int32_t)CallFunc_PickWeightedRandom_Return;
    params.CallFunc_AddComponentByClass_ReturnValue = (USplineMeshComponent*)CallFunc_AddComponentByClass_ReturnValue;
    params.CallFunc_SelectInt_ReturnValue = (int32_t)CallFunc_SelectInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (UStaticMesh*)CallFunc_Array_Get_Item;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    ProcessEvent(func, &params);
}
void UBP_SplineToolGenerator_C::GetComponentCounts(int32_t& Debug_ISM_Components_Count, int32_t& Debug_SplineMeshComponentsCount, int32_t& Debug_ISM_Instances_Count) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.GetComponentCounts"));
    struct Params_GetComponentCounts {
        int32_t Debug_ISM_Components_Count; // 0x0
        int32_t Debug_SplineMeshComponentsCount; // 0x4
        int32_t Debug_ISM_Instances_Count; // 0x8
    }; // Size: 0xc
    Params_GetComponentCounts params{};
    params.Debug_ISM_Components_Count = (int32_t)Debug_ISM_Components_Count;
    params.Debug_SplineMeshComponentsCount = (int32_t)Debug_SplineMeshComponentsCount;
    params.Debug_ISM_Instances_Count = (int32_t)Debug_ISM_Instances_Count;
    ProcessEvent(func, &params);
    Debug_ISM_Components_Count = params.Debug_ISM_Components_Count;
    Debug_SplineMeshComponentsCount = params.Debug_SplineMeshComponentsCount;
    Debug_ISM_Instances_Count = params.Debug_ISM_Instances_Count;
}
void UBP_SplineToolGenerator_C::GetLocationsByIndex(int32_t SplineLoopIndex, float SpacingOffset, bool isSplineMesh, float& SectionStartLocation, float& SectionEndLocation, float EndLocation, float StartLocation, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.GetLocationsByIndex"));
    struct Params_GetLocationsByIndex {
        int32_t SplineLoopIndex; // 0x0
        float SpacingOffset; // 0x4
        bool isSplineMesh; // 0x8
        char pad_9[0x3];
        float SectionStartLocation; // 0xc
        float SectionEndLocation; // 0x10
        float EndLocation; // 0x14
        float StartLocation; // 0x18
        float CallFunc_Multiply_IntFloat_ReturnValue; // 0x1c
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x20
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0x24
    }; // Size: 0x28
    Params_GetLocationsByIndex params{};
    params.SplineLoopIndex = (int32_t)SplineLoopIndex;
    params.SpacingOffset = (float)SpacingOffset;
    params.isSplineMesh = (bool)isSplineMesh;
    params.SectionStartLocation = (float)SectionStartLocation;
    params.SectionEndLocation = (float)SectionEndLocation;
    params.EndLocation = (float)EndLocation;
    params.StartLocation = (float)StartLocation;
    params.CallFunc_Multiply_IntFloat_ReturnValue = (float)CallFunc_Multiply_IntFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    ProcessEvent(func, &params);
    SectionStartLocation = params.SectionStartLocation;
    SectionEndLocation = params.SectionEndLocation;
}
bool UBP_SplineToolGenerator_C::CheckMaxAngle(float StartDistance, float EndDistance, int32_t Index, FRotator CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue, FRotator CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_1, FRotator CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.CheckMaxAngle"));
    struct Params_CheckMaxAngle {
        float StartDistance; // 0x0
        float EndDistance; // 0x4
        int32_t Index; // 0x8
        bool ReturnValue; // 0xc
        char pad_d[0x3];
        FRotator CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue; // 0x10
        FRotator CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_1; // 0x1c
        FRotator CallFunc_NormalizedDeltaRotator_ReturnValue; // 0x28
        float CallFunc_BreakRotator_Roll; // 0x34
        float CallFunc_BreakRotator_Pitch; // 0x38
        float CallFunc_BreakRotator_Yaw; // 0x3c
        float CallFunc_Abs_ReturnValue; // 0x40
        float CallFunc_Abs_ReturnValue_1; // 0x44
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x48
        bool CallFunc_Greater_FloatFloat_ReturnValue_1; // 0x49
        char pad_4a[0x2];
        float CallFunc_Abs_ReturnValue_2; // 0x4c
        bool CallFunc_Greater_FloatFloat_ReturnValue_2; // 0x50
        bool CallFunc_BooleanOR_ReturnValue; // 0x51
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x52
    }; // Size: 0x53
    Params_CheckMaxAngle params{};
    params.StartDistance = (float)StartDistance;
    params.EndDistance = (float)EndDistance;
    params.Index = (int32_t)Index;
    params.CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue = (FRotator)CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_1 = (FRotator)CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_NormalizedDeltaRotator_ReturnValue = (FRotator)CallFunc_NormalizedDeltaRotator_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_Abs_ReturnValue = (float)CallFunc_Abs_ReturnValue;
    params.CallFunc_Abs_ReturnValue_1 = (float)CallFunc_Abs_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue_1 = (bool)CallFunc_Greater_FloatFloat_ReturnValue_1;
    params.CallFunc_Abs_ReturnValue_2 = (float)CallFunc_Abs_ReturnValue_2;
    params.CallFunc_Greater_FloatFloat_ReturnValue_2 = (bool)CallFunc_Greater_FloatFloat_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBP_SplineToolGenerator_C::GetStaticMeshesUsedOnSpline(TArray<UStaticMesh*>& Array, TArray<UStaticMesh*>& ValidSetMeshes, TArray<float>& MeshChanceNum, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, float Temp_float_Variable, int32_t CallFunc_Array_Add_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.GetStaticMeshesUsedOnSpline"));
    struct Params_GetStaticMeshesUsedOnSpline {
        TArray<UStaticMesh*> Array; // 0x0
        TArray<UStaticMesh*> ValidSetMeshes; // 0x10
        TArray<float> MeshChanceNum; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x30
        int32_t Temp_int_Array_Index_Variable; // 0x34
        int32_t Temp_int_Loop_Counter_Variable; // 0x38
        char pad_3c[0x4];
        UStaticMesh* CallFunc_Array_Get_Item; // 0x40
        bool CallFunc_IsValid_ReturnValue; // 0x48
        bool CallFunc_Less_IntInt_ReturnValue; // 0x49
        char pad_4a[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x4c
        int32_t CallFunc_Array_Add_ReturnValue; // 0x50
        float Temp_float_Variable; // 0x54
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x58
    }; // Size: 0x5c
    Params_GetStaticMeshesUsedOnSpline params{};
    params.Array = (TArray<UStaticMesh*>)Array;
    params.ValidSetMeshes = (TArray<UStaticMesh*>)ValidSetMeshes;
    params.MeshChanceNum = (TArray<float>)MeshChanceNum;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Array_Get_Item = (UStaticMesh*)CallFunc_Array_Get_Item;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.Temp_float_Variable = (float)Temp_float_Variable;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    ProcessEvent(func, &params);
    Array = params.Array;
    MeshChanceNum = params.MeshChanceNum;
    ValidSetMeshes = params.ValidSetMeshes;
}
void UBP_SplineToolGenerator_C::PickWeightedRandom(int32_t NumMeshes, TArray<float>& Weights, bool& Success, int32_t& Return, float DiceResult, float AddedNums, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, float CallFunc_Array_Get_Item, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, int32_t Temp_int_Array_Index_Variable_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Array_Get_Item_1) {}
void UBP_SplineToolGenerator_C::ShouldGenerateMesh(int32_t CurrentIndex, int32_t LastIndex, bool& Return, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.ShouldGenerateMesh"));
    struct Params_ShouldGenerateMesh {
        int32_t CurrentIndex; // 0x0
        int32_t LastIndex; // 0x4
        bool Return; // 0x8
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x9
        bool CallFunc_EqualEqual_IntInt_ReturnValue_1; // 0xa
        bool CallFunc_BooleanOR_ReturnValue; // 0xb
    }; // Size: 0xc
    Params_ShouldGenerateMesh params{};
    params.CurrentIndex = (int32_t)CurrentIndex;
    params.LastIndex = (int32_t)LastIndex;
    params.Return = (bool)Return;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_1 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    Return = params.Return;
}
void UBP_SplineToolGenerator_C::GetValidMesh(bool& FoundSome, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, UStaticMesh* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.GetValidMesh"));
    struct Params_GetValidMesh {
        bool FoundSome; // 0x0
        char pad_1[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0x4
        int32_t CallFunc_Array_Length_ReturnValue; // 0x8
        bool CallFunc_Greater_IntInt_ReturnValue; // 0xc
        char pad_d[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0x10
        char pad_14[0x4];
        UStaticMesh* CallFunc_Array_Get_Item; // 0x18
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x20
        int32_t CallFunc_Array_Add_ReturnValue; // 0x24
        bool CallFunc_Less_IntInt_ReturnValue; // 0x28
        bool CallFunc_IsValid_ReturnValue; // 0x29
        char pad_2a[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x2c
    }; // Size: 0x30
    Params_GetValidMesh params{};
    params.FoundSome = (bool)FoundSome;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Array_Get_Item = (UStaticMesh*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    FoundSome = params.FoundSome;
}
void UBP_SplineToolGenerator_C::Add_ISM_Component(int32_t Index, AActor* CallFunc_GetOwner_ReturnValue, UStaticMesh* CallFunc_Array_Get_Item, UHierarchicalInstancedStaticMeshComponent* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.Add ISM Component"));
    struct Params_Add_ISM_Component {
        int32_t Index; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetOwner_ReturnValue; // 0x8
        UStaticMesh* CallFunc_Array_Get_Item; // 0x10
        UHierarchicalInstancedStaticMeshComponent* CallFunc_AddComponentByClass_ReturnValue; // 0x18
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x20
        char pad_21[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x24
    }; // Size: 0x28
    Params_Add_ISM_Component params{};
    params.Index = (int32_t)Index;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.CallFunc_Array_Get_Item = (UStaticMesh*)CallFunc_Array_Get_Item;
    params.CallFunc_AddComponentByClass_ReturnValue = (UHierarchicalInstancedStaticMeshComponent*)CallFunc_AddComponentByClass_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    ProcessEvent(func, &params);
}
void UBP_SplineToolGenerator_C::SelectRandomComponent(UInstancedStaticMeshComponent*& Output, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_PickWeightedRandom_Success, int32_t CallFunc_PickWeightedRandom_Return, int32_t CallFunc_SelectInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, UInstancedStaticMeshComponent* CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.SelectRandomComponent"));
    struct Params_SelectRandomComponent {
        UInstancedStaticMeshComponent* Output; // 0x0
        int32_t CallFunc_Array_Length_ReturnValue; // 0x8
        bool CallFunc_PickWeightedRandom_Success; // 0xc
        char pad_d[0x3];
        int32_t CallFunc_PickWeightedRandom_Return; // 0x10
        int32_t CallFunc_SelectInt_ReturnValue; // 0x14
        bool CallFunc_Array_IsValidIndex_ReturnValue; // 0x18
        char pad_19[0x7];
        UInstancedStaticMeshComponent* CallFunc_Array_Get_Item; // 0x20
    }; // Size: 0x28
    Params_SelectRandomComponent params{};
    params.Output = (UInstancedStaticMeshComponent*)Output;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_PickWeightedRandom_Success = (bool)CallFunc_PickWeightedRandom_Success;
    params.CallFunc_PickWeightedRandom_Return = (int32_t)CallFunc_PickWeightedRandom_Return;
    params.CallFunc_SelectInt_ReturnValue = (int32_t)CallFunc_SelectInt_ReturnValue;
    params.CallFunc_Array_IsValidIndex_ReturnValue = (bool)CallFunc_Array_IsValidIndex_ReturnValue;
    params.CallFunc_Array_Get_Item = (UInstancedStaticMeshComponent*)CallFunc_Array_Get_Item;
    ProcessEvent(func, &params);
    Output = params.Output;
}
void UBP_SplineToolGenerator_C::ExecuteUbergraph_BP_SplineToolGenerator(int32_t EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetValidMesh_FoundSome, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1) {}
void UBP_SplineToolGenerator_C::SplineGeneratorDebugDispatcher__DelegateSignature(FString TextValue, FVector TextLocation, FVector Line1Start, FVector Line1End, FVector Line2Start, FVector Line2End) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_SplineToolGenerator.BP_SplineToolGenerator_C.SplineGeneratorDebugDispatcher__DelegateSignature"));
    struct Params_SplineGeneratorDebugDispatcher__DelegateSignature {
        FString TextValue; // 0x0
        FVector TextLocation; // 0x10
        FVector Line1Start; // 0x1c
        FVector Line1End; // 0x28
        FVector Line2Start; // 0x34
        FVector Line2End; // 0x40
    }; // Size: 0x4c
    Params_SplineGeneratorDebugDispatcher__DelegateSignature params{};
    params.TextValue = (FString)TextValue;
    params.TextLocation = (FVector)TextLocation;
    params.Line1Start = (FVector)Line1Start;
    params.Line1End = (FVector)Line1End;
    params.Line2Start = (FVector)Line2Start;
    params.Line2End = (FVector)Line2End;
    ProcessEvent(func, &params);
}
