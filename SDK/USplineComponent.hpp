#pragma once
#include <cstdint>
#include "ESplineCoordinateSpace\Type.hpp"
#include "ESplinePointType\Type.hpp"
#include "FInterpCurveFloat.hpp"
#include "FInterpCurveQuat.hpp"
#include "FInterpCurveVector.hpp"
#include "FRotator.hpp"
#include "FSplineCurves.hpp"
#include "FSplinePoint.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UPrimitiveComponent.hpp"
struct FLinearColor;
#pragma pack(push, 1)
class USplineComponent : public UPrimitiveComponent {
public:
    FSplineCurves SplineCurves; // 0x480
    FInterpCurveVector SplineInfo; // 0x4f0
    FInterpCurveQuat SplineRotInfo; // 0x508
    FInterpCurveVector SplineScaleInfo; // 0x520
    FInterpCurveFloat SplineReparamTable; // 0x538
    bool bAllowSplineEditingPerInstance; // 0x550
    char pad_551[0x3];
    int32_t ReparamStepsPerSegment; // 0x554
    float Duration; // 0x558
    bool bStationaryEndpoints; // 0x55c
    bool bSplineHasBeenEdited; // 0x55d
    bool bModifiedByConstructionScript; // 0x55e
    bool bInputSplinePointsToConstructionScript; // 0x55f
    bool bDrawDebug; // 0x560
    bool bClosedLoop; // 0x561
    bool bLoopPositionOverride; // 0x562
    char pad_563[0x1];
    float LoopPosition; // 0x564
    FVector DefaultUpVector; // 0x568
    char pad_574[0xc];
    static USplineComponent* StaticClass();
    void UpdateSpline();
    void SetWorldLocationAtSplinePoint(int32_t PointIndex, FVector& InLocation);
    void SetUpVectorAtSplinePoint(int32_t PointIndex, FVector& InUpVector, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline);
    void SetUnselectedSplineSegmentColor(FLinearColor& SegmentColor);
    void SetTangentsAtSplinePoint(int32_t PointIndex, FVector& InArriveTangent, FVector& InLeaveTangent, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline);
    void SetTangentColor(FLinearColor& TangentColor);
    void SetTangentAtSplinePoint(int32_t PointIndex, FVector& InTangent, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline);
    void SetSplineWorldPoints(TArray<FVector>& Points);
    void SetSplinePointType(int32_t PointIndex, ESplinePointType::Type Type, bool bUpdateSpline);
    void SetSplinePoints(TArray<FVector>& Points, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline);
    void SetSplineLocalPoints(TArray<FVector>& Points);
    void SetSelectedSplineSegmentColor(FLinearColor& SegmentColor);
    void SetScaleAtSplinePoint(int32_t PointIndex, FVector& InScaleVector, bool bUpdateSpline);
    void SetRotationAtSplinePoint(int32_t PointIndex, FRotator& InRotation, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline);
    void SetLocationAtSplinePoint(int32_t PointIndex, FVector& InLocation, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline);
    void SetDrawDebug(bool bShow);
    void SetDefaultUpVector(FVector& UpVector, ESplineCoordinateSpace::Type CoordinateSpace);
    void SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline);
    void SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline);
    void RemoveSplinePoint(int32_t Index, bool bUpdateSpline);
    bool IsClosedLoop();
    FVector GetWorldTangentAtDistanceAlongSpline(float Distance);
    FRotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity);
    FRotator GetWorldRotationAtDistanceAlongSpline(float Distance);
    FVector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity);
    FVector GetWorldLocationAtSplinePoint(int32_t PointIndex);
    FVector GetWorldLocationAtDistanceAlongSpline(float Distance);
    FVector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity);
    FVector GetWorldDirectionAtDistanceAlongSpline(float Distance);
    FVector GetVectorPropertyAtSplinePoint(int32_t Index, FName PropertyName);
    FVector GetVectorPropertyAtSplineInputKey(float InKey, FName PropertyName);
    FVector GetUpVectorAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity);
    FVector GetUpVectorAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector GetUpVectorAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector GetUpVectorAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace);
    FTransform GetTransformAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity, bool bUseScale);
    FTransform GetTransformAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseScale);
    FTransform GetTransformAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseScale);
    FTransform GetTransformAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseScale);
    FVector GetTangentAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity);
    FVector GetTangentAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector GetTangentAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector GetTangentAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace);
    ESplinePointType::Type GetSplinePointType(int32_t PointIndex);
    float GetSplineLength();
    FVector GetScaleAtTime(float Time, bool bUseConstantVelocity);
    FVector GetScaleAtSplinePoint(int32_t PointIndex);
    FVector GetScaleAtSplineInputKey(float InKey);
    FVector GetScaleAtDistanceAlongSpline(float Distance);
    FRotator GetRotationAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity);
    FRotator GetRotationAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace);
    FRotator GetRotationAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace);
    FRotator GetRotationAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace);
    float GetRollAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity);
    float GetRollAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace);
    float GetRollAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace);
    float GetRollAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector GetRightVectorAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity);
    FVector GetRightVectorAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector GetRightVectorAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector GetRightVectorAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace);
    int32_t GetNumberOfSplineSegments();
    int32_t GetNumberOfSplinePoints();
    FVector GetLocationAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity);
    FVector GetLocationAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector GetLocationAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector GetLocationAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace);
    void GetLocationAndTangentAtSplinePoint(int32_t PointIndex, FVector& Location, FVector& Tangent, ESplineCoordinateSpace::Type CoordinateSpace);
    void GetLocalLocationAndTangentAtSplinePoint(int32_t PointIndex, FVector& LocalLocation, FVector& LocalTangent);
    FVector GetLeaveTangentAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace);
    float GetInputKeyAtDistanceAlongSpline(float Distance);
    float GetFloatPropertyAtSplinePoint(int32_t Index, FName PropertyName);
    float GetFloatPropertyAtSplineInputKey(float InKey, FName PropertyName);
    float GetDistanceAlongSplineAtSplinePoint(int32_t PointIndex);
    float GetDistanceAlongSplineAtSplineInputKey(float InKey);
    FVector GetDirectionAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity);
    FVector GetDirectionAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector GetDirectionAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector GetDirectionAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector GetDefaultUpVector(ESplineCoordinateSpace::Type CoordinateSpace);
    FVector GetArriveTangentAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector FindUpVectorClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace);
    FTransform FindTransformClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseScale);
    FVector FindTangentClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector FindScaleClosestToWorldLocation(FVector& WorldLocation);
    FRotator FindRotationClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace);
    float FindRollClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector FindRightVectorClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace);
    FVector FindLocationClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace);
    float FindInputKeyClosestToWorldLocation(FVector& WorldLocation);
    FVector FindDirectionClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace);
    void ClearSplinePoints(bool bUpdateSpline);
    void AddSplineWorldPoint(FVector& Position);
    void AddSplinePointAtIndex(FVector& Position, int32_t Index, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline);
    void AddSplinePoint(FVector& Position, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline);
    void AddSplineLocalPoint(FVector& Position);
    void AddPoints(TArray<FSplinePoint>& Points, bool bUpdateSpline);
    void AddPoint(FSplinePoint& Point, bool bUpdateSpline);
}; // Size: 0x580
#pragma pack(pop)
