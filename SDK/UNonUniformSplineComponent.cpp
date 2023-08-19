#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UNonUniformSplineComponent.hpp"
UNonUniformSplineComponent* UNonUniformSplineComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.NonUniformSplineComponent");
    return (UNonUniformSplineComponent*)res;
}
FVector UNonUniformSplineComponent::GetPosition(float NormalizedTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.NonUniformSplineComponent.GetPosition"));
    struct Params_GetPosition {
        float NormalizedTime; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetPosition params{};
    params.NormalizedTime = (float)NormalizedTime;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UNonUniformSplineComponent::InitializeFromPoints(TArray<FVector>& InPoints) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.NonUniformSplineComponent.InitializeFromPoints"));
    struct Params_InitializeFromPoints {
        TArray<FVector> InPoints; // 0x0
    }; // Size: 0x10
    Params_InitializeFromPoints params{};
    params.InPoints = (TArray<FVector>)InPoints;
    ProcessEvent(func, &params);
    InPoints = params.InPoints;
}
float UNonUniformSplineComponent::GetDistance(float NormalizedTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.NonUniformSplineComponent.GetDistance"));
    struct Params_GetDistance {
        float NormalizedTime; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetDistance params{};
    params.NormalizedTime = (float)NormalizedTime;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UNonUniformSplineComponent::DebugDraw(int32_t SegmentsPerPoint, float Duration, bool bDrawTangents, bool bDrawArtificialEndPoints, bool bDrawDistances, FVector PruneCenterpoint, float PruneOutsideCenterpointRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.NonUniformSplineComponent.DebugDraw"));
    struct Params_DebugDraw {
        int32_t SegmentsPerPoint; // 0x0
        float Duration; // 0x4
        bool bDrawTangents; // 0x8
        bool bDrawArtificialEndPoints; // 0x9
        bool bDrawDistances; // 0xa
        char pad_b[0x1];
        FVector PruneCenterpoint; // 0xc
        float PruneOutsideCenterpointRadius; // 0x18
    }; // Size: 0x1c
    Params_DebugDraw params{};
    params.SegmentsPerPoint = (int32_t)SegmentsPerPoint;
    params.Duration = (float)Duration;
    params.bDrawTangents = (bool)bDrawTangents;
    params.bDrawArtificialEndPoints = (bool)bDrawArtificialEndPoints;
    params.bDrawDistances = (bool)bDrawDistances;
    params.PruneCenterpoint = (FVector)PruneCenterpoint;
    params.PruneOutsideCenterpointRadius = (float)PruneOutsideCenterpointRadius;
    ProcessEvent(func, &params);
}
FVector UNonUniformSplineComponent::GetTangent(float NormalizedTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.NonUniformSplineComponent.GetTangent"));
    struct Params_GetTangent {
        float NormalizedTime; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetTangent params{};
    params.NormalizedTime = (float)NormalizedTime;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UNonUniformSplineComponent::GetTimeAtDistance(float Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.NonUniformSplineComponent.GetTimeAtDistance"));
    struct Params_GetTimeAtDistance {
        float Distance; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetTimeAtDistance params{};
    params.Distance = (float)Distance;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UNonUniformSplineComponent::GetSplineLength() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.NonUniformSplineComponent.GetSplineLength"));
    struct Params_GetSplineLength {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSplineLength params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UNonUniformSplineComponent::GetPositionAtDistanceAlongSpline(float Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.NonUniformSplineComponent.GetPositionAtDistanceAlongSpline"));
    struct Params_GetPositionAtDistanceAlongSpline {
        float Distance; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetPositionAtDistanceAlongSpline params{};
    params.Distance = (float)Distance;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UNonUniformSplineComponent::FindNearestTimeOnSpline(FVector& InLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.NonUniformSplineComponent.FindNearestTimeOnSpline"));
    struct Params_FindNearestTimeOnSpline {
        FVector InLocation; // 0x0
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_FindNearestTimeOnSpline params{};
    params.InLocation = (FVector)InLocation;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
    return (float)params.ReturnValue;
}
FVector UNonUniformSplineComponent::FindNearestPointOnSpline(FVector& InLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.NonUniformSplineComponent.FindNearestPointOnSpline"));
    struct Params_FindNearestPointOnSpline {
        FVector InLocation; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_FindNearestPointOnSpline params{};
    params.InLocation = (FVector)InLocation;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
    return (FVector)params.ReturnValue;
}
float UNonUniformSplineComponent::FindClosestDistanceSqToSpline(FVector& InLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.NonUniformSplineComponent.FindClosestDistanceSqToSpline"));
    struct Params_FindClosestDistanceSqToSpline {
        FVector InLocation; // 0x0
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_FindClosestDistanceSqToSpline params{};
    params.InLocation = (FVector)InLocation;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
    return (float)params.ReturnValue;
}
