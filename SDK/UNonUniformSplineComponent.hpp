#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UNonUniformSplineComponent : public UActorComponent {
public:
    float ParameterizationExponent; // 0xc8
    int32_t DistanceSamplesPerInterval; // 0xcc
    char pad_d0[0x40];
    static UNonUniformSplineComponent* StaticClass();
    void InitializeFromPoints(TArray<FVector>& InPoints);
    float GetTimeAtDistance(float Distance);
    FVector GetTangent(float NormalizedTime);
    float GetSplineLength();
    FVector GetPositionAtDistanceAlongSpline(float Distance);
    FVector GetPosition(float NormalizedTime);
    float GetDistance(float NormalizedTime);
    float FindNearestTimeOnSpline(FVector& InLocation);
    FVector FindNearestPointOnSpline(FVector& InLocation);
    float FindClosestDistanceSqToSpline(FVector& InLocation);
    void DebugDraw(int32_t SegmentsPerPoint, float Duration, bool bDrawTangents, bool bDrawArtificialEndPoints, bool bDrawDistances, FVector PruneCenterpoint, float PruneOutsideCenterpointRadius);
}; // Size: 0x110
#pragma pack(pop)
