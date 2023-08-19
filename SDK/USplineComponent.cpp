#include "ESplineCoordinateSpace\Type.hpp"
#include "ESplinePointType\Type.hpp"
#include "FInterpCurveFloat.hpp"
#include "FInterpCurveQuat.hpp"
#include "FInterpCurveVector.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FSplineCurves.hpp"
#include "FSplinePoint.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USplineComponent.hpp"
FVector USplineComponent::GetVectorPropertyAtSplinePoint(int32_t Index, FName PropertyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetVectorPropertyAtSplinePoint"));
    struct Params_GetVectorPropertyAtSplinePoint {
        int32_t Index; // 0x0
        FName PropertyName; // 0x4
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_GetVectorPropertyAtSplinePoint params{};
    params.Index = (int32_t)Index;
    params.PropertyName = (FName)PropertyName;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
USplineComponent* USplineComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SplineComponent");
    return (USplineComponent*)res;
}
float USplineComponent::GetRollAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetRollAtSplinePoint"));
    struct Params_GetRollAtSplinePoint {
        int32_t PointIndex; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetRollAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void USplineComponent::SetTangentColor(FLinearColor& TangentColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetTangentColor"));
    struct Params_SetTangentColor {
        FLinearColor TangentColor; // 0x0
    }; // Size: 0x10
    Params_SetTangentColor params{};
    params.TangentColor = (FLinearColor)TangentColor;
    ProcessEvent(func, &params);
    TangentColor = params.TangentColor;
}
float USplineComponent::FindRollClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.FindRollClosestToWorldLocation"));
    struct Params_FindRollClosestToWorldLocation {
        FVector WorldLocation; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0xc
        char pad_d[0x3];
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_FindRollClosestToWorldLocation params{};
    params.WorldLocation = (FVector)WorldLocation;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    WorldLocation = params.WorldLocation;
    return (float)params.ReturnValue;
}
FTransform USplineComponent::GetTransformAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetTransformAtDistanceAlongSpline"));
    struct Params_GetTransformAtDistanceAlongSpline {
        float Distance; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        bool bUseScale; // 0x5
        char pad_6[0xa];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetTransformAtDistanceAlongSpline params{};
    params.Distance = (float)Distance;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUseScale = (bool)bUseScale;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void USplineComponent::SetUpVectorAtSplinePoint(int32_t PointIndex, FVector& InUpVector, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetUpVectorAtSplinePoint"));
    struct Params_SetUpVectorAtSplinePoint {
        int32_t PointIndex; // 0x0
        FVector InUpVector; // 0x4
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x10
        bool bUpdateSpline; // 0x11
    }; // Size: 0x12
    Params_SetUpVectorAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.InUpVector = (FVector)InUpVector;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
    InUpVector = params.InUpVector;
}
FVector USplineComponent::GetWorldLocationAtDistanceAlongSpline(float Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetWorldLocationAtDistanceAlongSpline"));
    struct Params_GetWorldLocationAtDistanceAlongSpline {
        float Distance; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetWorldLocationAtDistanceAlongSpline params{};
    params.Distance = (float)Distance;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void USplineComponent::UpdateSpline() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.UpdateSpline"));
    struct Params_UpdateSpline {
    }; // Size: 0x0
    Params_UpdateSpline params{};
    ProcessEvent(func, &params);
}
void USplineComponent::SetWorldLocationAtSplinePoint(int32_t PointIndex, FVector& InLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetWorldLocationAtSplinePoint"));
    struct Params_SetWorldLocationAtSplinePoint {
        int32_t PointIndex; // 0x0
        FVector InLocation; // 0x4
    }; // Size: 0x10
    Params_SetWorldLocationAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.InLocation = (FVector)InLocation;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
}
void USplineComponent::SetTangentsAtSplinePoint(int32_t PointIndex, FVector& InArriveTangent, FVector& InLeaveTangent, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetTangentsAtSplinePoint"));
    struct Params_SetTangentsAtSplinePoint {
        int32_t PointIndex; // 0x0
        FVector InArriveTangent; // 0x4
        FVector InLeaveTangent; // 0x10
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x1c
        bool bUpdateSpline; // 0x1d
    }; // Size: 0x1e
    Params_SetTangentsAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.InArriveTangent = (FVector)InArriveTangent;
    params.InLeaveTangent = (FVector)InLeaveTangent;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
    InArriveTangent = params.InArriveTangent;
    InLeaveTangent = params.InLeaveTangent;
}
FVector USplineComponent::GetUpVectorAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetUpVectorAtSplinePoint"));
    struct Params_GetUpVectorAtSplinePoint {
        int32_t PointIndex; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetUpVectorAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::FindDirectionClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.FindDirectionClosestToWorldLocation"));
    struct Params_FindDirectionClosestToWorldLocation {
        FVector WorldLocation; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0xc
        char pad_d[0x3];
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_FindDirectionClosestToWorldLocation params{};
    params.WorldLocation = (FVector)WorldLocation;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    WorldLocation = params.WorldLocation;
    return (FVector)params.ReturnValue;
}
void USplineComponent::SetUnselectedSplineSegmentColor(FLinearColor& SegmentColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetUnselectedSplineSegmentColor"));
    struct Params_SetUnselectedSplineSegmentColor {
        FLinearColor SegmentColor; // 0x0
    }; // Size: 0x10
    Params_SetUnselectedSplineSegmentColor params{};
    params.SegmentColor = (FLinearColor)SegmentColor;
    ProcessEvent(func, &params);
    SegmentColor = params.SegmentColor;
}
void USplineComponent::SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetClosedLoop"));
    struct Params_SetClosedLoop {
        bool bInClosedLoop; // 0x0
        bool bUpdateSpline; // 0x1
    }; // Size: 0x2
    Params_SetClosedLoop params{};
    params.bInClosedLoop = (bool)bInClosedLoop;
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
}
void USplineComponent::SetTangentAtSplinePoint(int32_t PointIndex, FVector& InTangent, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetTangentAtSplinePoint"));
    struct Params_SetTangentAtSplinePoint {
        int32_t PointIndex; // 0x0
        FVector InTangent; // 0x4
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x10
        bool bUpdateSpline; // 0x11
    }; // Size: 0x12
    Params_SetTangentAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.InTangent = (FVector)InTangent;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
    InTangent = params.InTangent;
}
float USplineComponent::GetRollAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetRollAtSplineInputKey"));
    struct Params_GetRollAtSplineInputKey {
        float InKey; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetRollAtSplineInputKey params{};
    params.InKey = (float)InKey;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void USplineComponent::SetSplineWorldPoints(TArray<FVector>& Points) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetSplineWorldPoints"));
    struct Params_SetSplineWorldPoints {
        TArray<FVector> Points; // 0x0
    }; // Size: 0x10
    Params_SetSplineWorldPoints params{};
    params.Points = (TArray<FVector>)Points;
    ProcessEvent(func, &params);
    Points = params.Points;
}
void USplineComponent::SetSplinePointType(int32_t PointIndex, ESplinePointType::Type Type, bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetSplinePointType"));
    struct Params_SetSplinePointType {
        int32_t PointIndex; // 0x0
        ESplinePointType::Type Type; // 0x4
        bool bUpdateSpline; // 0x5
    }; // Size: 0x6
    Params_SetSplinePointType params{};
    params.PointIndex = (int32_t)PointIndex;
    params.Type = (ESplinePointType::Type)Type;
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
}
float USplineComponent::GetRollAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetRollAtDistanceAlongSpline"));
    struct Params_GetRollAtDistanceAlongSpline {
        float Distance; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetRollAtDistanceAlongSpline params{};
    params.Distance = (float)Distance;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector USplineComponent::GetRightVectorAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetRightVectorAtSplinePoint"));
    struct Params_GetRightVectorAtSplinePoint {
        int32_t PointIndex; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetRightVectorAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void USplineComponent::SetSplinePoints(TArray<FVector>& Points, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetSplinePoints"));
    struct Params_SetSplinePoints {
        TArray<FVector> Points; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x10
        bool bUpdateSpline; // 0x11
    }; // Size: 0x12
    Params_SetSplinePoints params{};
    params.Points = (TArray<FVector>)Points;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
    Points = params.Points;
}
void USplineComponent::SetDrawDebug(bool bShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetDrawDebug"));
    struct Params_SetDrawDebug {
        bool bShow; // 0x0
    }; // Size: 0x1
    Params_SetDrawDebug params{};
    params.bShow = (bool)bShow;
    ProcessEvent(func, &params);
}
FTransform USplineComponent::GetTransformAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetTransformAtSplinePoint"));
    struct Params_GetTransformAtSplinePoint {
        int32_t PointIndex; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        bool bUseScale; // 0x5
        char pad_6[0xa];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetTransformAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUseScale = (bool)bUseScale;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void USplineComponent::SetSplineLocalPoints(TArray<FVector>& Points) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetSplineLocalPoints"));
    struct Params_SetSplineLocalPoints {
        TArray<FVector> Points; // 0x0
    }; // Size: 0x10
    Params_SetSplineLocalPoints params{};
    params.Points = (TArray<FVector>)Points;
    ProcessEvent(func, &params);
    Points = params.Points;
}
void USplineComponent::SetSelectedSplineSegmentColor(FLinearColor& SegmentColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetSelectedSplineSegmentColor"));
    struct Params_SetSelectedSplineSegmentColor {
        FLinearColor SegmentColor; // 0x0
    }; // Size: 0x10
    Params_SetSelectedSplineSegmentColor params{};
    params.SegmentColor = (FLinearColor)SegmentColor;
    ProcessEvent(func, &params);
    SegmentColor = params.SegmentColor;
}
void USplineComponent::SetScaleAtSplinePoint(int32_t PointIndex, FVector& InScaleVector, bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetScaleAtSplinePoint"));
    struct Params_SetScaleAtSplinePoint {
        int32_t PointIndex; // 0x0
        FVector InScaleVector; // 0x4
        bool bUpdateSpline; // 0x10
    }; // Size: 0x11
    Params_SetScaleAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.InScaleVector = (FVector)InScaleVector;
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
    InScaleVector = params.InScaleVector;
}
FTransform USplineComponent::GetTransformAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetTransformAtSplineInputKey"));
    struct Params_GetTransformAtSplineInputKey {
        float InKey; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        bool bUseScale; // 0x5
        char pad_6[0xa];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetTransformAtSplineInputKey params{};
    params.InKey = (float)InKey;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUseScale = (bool)bUseScale;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void USplineComponent::SetRotationAtSplinePoint(int32_t PointIndex, FRotator& InRotation, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetRotationAtSplinePoint"));
    struct Params_SetRotationAtSplinePoint {
        int32_t PointIndex; // 0x0
        FRotator InRotation; // 0x4
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x10
        bool bUpdateSpline; // 0x11
    }; // Size: 0x12
    Params_SetRotationAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.InRotation = (FRotator)InRotation;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
    InRotation = params.InRotation;
}
void USplineComponent::SetLocationAtSplinePoint(int32_t PointIndex, FVector& InLocation, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetLocationAtSplinePoint"));
    struct Params_SetLocationAtSplinePoint {
        int32_t PointIndex; // 0x0
        FVector InLocation; // 0x4
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x10
        bool bUpdateSpline; // 0x11
    }; // Size: 0x12
    Params_SetLocationAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.InLocation = (FVector)InLocation;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
}
void USplineComponent::SetDefaultUpVector(FVector& UpVector, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetDefaultUpVector"));
    struct Params_SetDefaultUpVector {
        FVector UpVector; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0xc
    }; // Size: 0xd
    Params_SetDefaultUpVector params{};
    params.UpVector = (FVector)UpVector;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    UpVector = params.UpVector;
}
float USplineComponent::GetRollAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetRollAtTime"));
    struct Params_GetRollAtTime {
        float Time; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        bool bUseConstantVelocity; // 0x5
        char pad_6[0x2];
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetRollAtTime params{};
    params.Time = (float)Time;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUseConstantVelocity = (bool)bUseConstantVelocity;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void USplineComponent::SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.SetClosedLoopAtPosition"));
    struct Params_SetClosedLoopAtPosition {
        bool bInClosedLoop; // 0x0
        char pad_1[0x3];
        float Key; // 0x4
        bool bUpdateSpline; // 0x8
    }; // Size: 0x9
    Params_SetClosedLoopAtPosition params{};
    params.bInClosedLoop = (bool)bInClosedLoop;
    params.Key = (float)Key;
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
}
void USplineComponent::RemoveSplinePoint(int32_t Index, bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.RemoveSplinePoint"));
    struct Params_RemoveSplinePoint {
        int32_t Index; // 0x0
        bool bUpdateSpline; // 0x4
    }; // Size: 0x5
    Params_RemoveSplinePoint params{};
    params.Index = (int32_t)Index;
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
}
FVector USplineComponent::GetUpVectorAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetUpVectorAtSplineInputKey"));
    struct Params_GetUpVectorAtSplineInputKey {
        float InKey; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetUpVectorAtSplineInputKey params{};
    params.InKey = (float)InKey;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool USplineComponent::IsClosedLoop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.IsClosedLoop"));
    struct Params_IsClosedLoop {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsClosedLoop params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FRotator USplineComponent::GetRotationAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetRotationAtSplinePoint"));
    struct Params_GetRotationAtSplinePoint {
        int32_t PointIndex; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FRotator ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetRotationAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector USplineComponent::GetWorldTangentAtDistanceAlongSpline(float Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetWorldTangentAtDistanceAlongSpline"));
    struct Params_GetWorldTangentAtDistanceAlongSpline {
        float Distance; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetWorldTangentAtDistanceAlongSpline params{};
    params.Distance = (float)Distance;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator USplineComponent::GetWorldRotationAtTime(float Time, bool bUseConstantVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetWorldRotationAtTime"));
    struct Params_GetWorldRotationAtTime {
        float Time; // 0x0
        bool bUseConstantVelocity; // 0x4
        char pad_5[0x3];
        FRotator ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetWorldRotationAtTime params{};
    params.Time = (float)Time;
    params.bUseConstantVelocity = (bool)bUseConstantVelocity;
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
int32_t USplineComponent::GetNumberOfSplinePoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetNumberOfSplinePoints"));
    struct Params_GetNumberOfSplinePoints {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumberOfSplinePoints params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVector USplineComponent::GetLocationAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetLocationAtDistanceAlongSpline"));
    struct Params_GetLocationAtDistanceAlongSpline {
        float Distance; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetLocationAtDistanceAlongSpline params{};
    params.Distance = (float)Distance;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator USplineComponent::GetWorldRotationAtDistanceAlongSpline(float Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetWorldRotationAtDistanceAlongSpline"));
    struct Params_GetWorldRotationAtDistanceAlongSpline {
        float Distance; // 0x0
        FRotator ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetWorldRotationAtDistanceAlongSpline params{};
    params.Distance = (float)Distance;
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector USplineComponent::GetWorldLocationAtTime(float Time, bool bUseConstantVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetWorldLocationAtTime"));
    struct Params_GetWorldLocationAtTime {
        float Time; // 0x0
        bool bUseConstantVelocity; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetWorldLocationAtTime params{};
    params.Time = (float)Time;
    params.bUseConstantVelocity = (bool)bUseConstantVelocity;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetWorldLocationAtSplinePoint(int32_t PointIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetWorldLocationAtSplinePoint"));
    struct Params_GetWorldLocationAtSplinePoint {
        int32_t PointIndex; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetWorldLocationAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetWorldDirectionAtTime"));
    struct Params_GetWorldDirectionAtTime {
        float Time; // 0x0
        bool bUseConstantVelocity; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetWorldDirectionAtTime params{};
    params.Time = (float)Time;
    params.bUseConstantVelocity = (bool)bUseConstantVelocity;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetWorldDirectionAtDistanceAlongSpline(float Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetWorldDirectionAtDistanceAlongSpline"));
    struct Params_GetWorldDirectionAtDistanceAlongSpline {
        float Distance; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetWorldDirectionAtDistanceAlongSpline params{};
    params.Distance = (float)Distance;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetVectorPropertyAtSplineInputKey(float InKey, FName PropertyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetVectorPropertyAtSplineInputKey"));
    struct Params_GetVectorPropertyAtSplineInputKey {
        float InKey; // 0x0
        FName PropertyName; // 0x4
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_GetVectorPropertyAtSplineInputKey params{};
    params.InKey = (float)InKey;
    params.PropertyName = (FName)PropertyName;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float USplineComponent::GetInputKeyAtDistanceAlongSpline(float Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetInputKeyAtDistanceAlongSpline"));
    struct Params_GetInputKeyAtDistanceAlongSpline {
        float Distance; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetInputKeyAtDistanceAlongSpline params{};
    params.Distance = (float)Distance;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector USplineComponent::GetUpVectorAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetUpVectorAtTime"));
    struct Params_GetUpVectorAtTime {
        float Time; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        bool bUseConstantVelocity; // 0x5
        char pad_6[0x2];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetUpVectorAtTime params{};
    params.Time = (float)Time;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUseConstantVelocity = (bool)bUseConstantVelocity;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetUpVectorAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetUpVectorAtDistanceAlongSpline"));
    struct Params_GetUpVectorAtDistanceAlongSpline {
        float Distance; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetUpVectorAtDistanceAlongSpline params{};
    params.Distance = (float)Distance;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float USplineComponent::GetFloatPropertyAtSplineInputKey(float InKey, FName PropertyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetFloatPropertyAtSplineInputKey"));
    struct Params_GetFloatPropertyAtSplineInputKey {
        float InKey; // 0x0
        FName PropertyName; // 0x4
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetFloatPropertyAtSplineInputKey params{};
    params.InKey = (float)InKey;
    params.PropertyName = (FName)PropertyName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FTransform USplineComponent::GetTransformAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity, bool bUseScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetTransformAtTime"));
    struct Params_GetTransformAtTime {
        float Time; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        bool bUseConstantVelocity; // 0x5
        bool bUseScale; // 0x6
        char pad_7[0x9];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetTransformAtTime params{};
    params.Time = (float)Time;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUseConstantVelocity = (bool)bUseConstantVelocity;
    params.bUseScale = (bool)bUseScale;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
FVector USplineComponent::GetScaleAtTime(float Time, bool bUseConstantVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetScaleAtTime"));
    struct Params_GetScaleAtTime {
        float Time; // 0x0
        bool bUseConstantVelocity; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetScaleAtTime params{};
    params.Time = (float)Time;
    params.bUseConstantVelocity = (bool)bUseConstantVelocity;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetTangentAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetTangentAtTime"));
    struct Params_GetTangentAtTime {
        float Time; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        bool bUseConstantVelocity; // 0x5
        char pad_6[0x2];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetTangentAtTime params{};
    params.Time = (float)Time;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUseConstantVelocity = (bool)bUseConstantVelocity;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetTangentAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetTangentAtSplinePoint"));
    struct Params_GetTangentAtSplinePoint {
        int32_t PointIndex; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetTangentAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetTangentAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetTangentAtSplineInputKey"));
    struct Params_GetTangentAtSplineInputKey {
        float InKey; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetTangentAtSplineInputKey params{};
    params.InKey = (float)InKey;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float USplineComponent::GetSplineLength() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetSplineLength"));
    struct Params_GetSplineLength {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSplineLength params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector USplineComponent::GetTangentAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetTangentAtDistanceAlongSpline"));
    struct Params_GetTangentAtDistanceAlongSpline {
        float Distance; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetTangentAtDistanceAlongSpline params{};
    params.Distance = (float)Distance;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
ESplinePointType::Type USplineComponent::GetSplinePointType(int32_t PointIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetSplinePointType"));
    struct Params_GetSplinePointType {
        int32_t PointIndex; // 0x0
        ESplinePointType::Type ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetSplinePointType params{};
    params.PointIndex = (int32_t)PointIndex;
    ProcessEvent(func, &params);
    return (ESplinePointType::Type)params.ReturnValue;
}
FVector USplineComponent::GetScaleAtSplinePoint(int32_t PointIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetScaleAtSplinePoint"));
    struct Params_GetScaleAtSplinePoint {
        int32_t PointIndex; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetScaleAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetScaleAtSplineInputKey(float InKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetScaleAtSplineInputKey"));
    struct Params_GetScaleAtSplineInputKey {
        float InKey; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetScaleAtSplineInputKey params{};
    params.InKey = (float)InKey;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetScaleAtDistanceAlongSpline(float Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetScaleAtDistanceAlongSpline"));
    struct Params_GetScaleAtDistanceAlongSpline {
        float Distance; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetScaleAtDistanceAlongSpline params{};
    params.Distance = (float)Distance;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator USplineComponent::GetRotationAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetRotationAtTime"));
    struct Params_GetRotationAtTime {
        float Time; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        bool bUseConstantVelocity; // 0x5
        char pad_6[0x2];
        FRotator ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetRotationAtTime params{};
    params.Time = (float)Time;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUseConstantVelocity = (bool)bUseConstantVelocity;
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FRotator USplineComponent::GetRotationAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetRotationAtSplineInputKey"));
    struct Params_GetRotationAtSplineInputKey {
        float InKey; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FRotator ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetRotationAtSplineInputKey params{};
    params.InKey = (float)InKey;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FRotator USplineComponent::GetRotationAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetRotationAtDistanceAlongSpline"));
    struct Params_GetRotationAtDistanceAlongSpline {
        float Distance; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FRotator ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetRotationAtDistanceAlongSpline params{};
    params.Distance = (float)Distance;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector USplineComponent::GetRightVectorAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetRightVectorAtTime"));
    struct Params_GetRightVectorAtTime {
        float Time; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        bool bUseConstantVelocity; // 0x5
        char pad_6[0x2];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetRightVectorAtTime params{};
    params.Time = (float)Time;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUseConstantVelocity = (bool)bUseConstantVelocity;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetRightVectorAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetRightVectorAtSplineInputKey"));
    struct Params_GetRightVectorAtSplineInputKey {
        float InKey; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetRightVectorAtSplineInputKey params{};
    params.InKey = (float)InKey;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetRightVectorAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetRightVectorAtDistanceAlongSpline"));
    struct Params_GetRightVectorAtDistanceAlongSpline {
        float Distance; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetRightVectorAtDistanceAlongSpline params{};
    params.Distance = (float)Distance;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
int32_t USplineComponent::GetNumberOfSplineSegments() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetNumberOfSplineSegments"));
    struct Params_GetNumberOfSplineSegments {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumberOfSplineSegments params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVector USplineComponent::GetLocationAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetLocationAtTime"));
    struct Params_GetLocationAtTime {
        float Time; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        bool bUseConstantVelocity; // 0x5
        char pad_6[0x2];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetLocationAtTime params{};
    params.Time = (float)Time;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUseConstantVelocity = (bool)bUseConstantVelocity;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetLocationAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetLocationAtSplinePoint"));
    struct Params_GetLocationAtSplinePoint {
        int32_t PointIndex; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetLocationAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetLocationAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetLocationAtSplineInputKey"));
    struct Params_GetLocationAtSplineInputKey {
        float InKey; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetLocationAtSplineInputKey params{};
    params.InKey = (float)InKey;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void USplineComponent::GetLocationAndTangentAtSplinePoint(int32_t PointIndex, FVector& Location, FVector& Tangent, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetLocationAndTangentAtSplinePoint"));
    struct Params_GetLocationAndTangentAtSplinePoint {
        int32_t PointIndex; // 0x0
        FVector Location; // 0x4
        FVector Tangent; // 0x10
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x1c
    }; // Size: 0x1d
    Params_GetLocationAndTangentAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.Location = (FVector)Location;
    params.Tangent = (FVector)Tangent;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    Location = params.Location;
    Tangent = params.Tangent;
}
void USplineComponent::GetLocalLocationAndTangentAtSplinePoint(int32_t PointIndex, FVector& LocalLocation, FVector& LocalTangent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetLocalLocationAndTangentAtSplinePoint"));
    struct Params_GetLocalLocationAndTangentAtSplinePoint {
        int32_t PointIndex; // 0x0
        FVector LocalLocation; // 0x4
        FVector LocalTangent; // 0x10
    }; // Size: 0x1c
    Params_GetLocalLocationAndTangentAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.LocalLocation = (FVector)LocalLocation;
    params.LocalTangent = (FVector)LocalTangent;
    ProcessEvent(func, &params);
    LocalLocation = params.LocalLocation;
    LocalTangent = params.LocalTangent;
}
FVector USplineComponent::GetLeaveTangentAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetLeaveTangentAtSplinePoint"));
    struct Params_GetLeaveTangentAtSplinePoint {
        int32_t PointIndex; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetLeaveTangentAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float USplineComponent::GetFloatPropertyAtSplinePoint(int32_t Index, FName PropertyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetFloatPropertyAtSplinePoint"));
    struct Params_GetFloatPropertyAtSplinePoint {
        int32_t Index; // 0x0
        FName PropertyName; // 0x4
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetFloatPropertyAtSplinePoint params{};
    params.Index = (int32_t)Index;
    params.PropertyName = (FName)PropertyName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USplineComponent::GetDistanceAlongSplineAtSplinePoint(int32_t PointIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetDistanceAlongSplineAtSplinePoint"));
    struct Params_GetDistanceAlongSplineAtSplinePoint {
        int32_t PointIndex; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetDistanceAlongSplineAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USplineComponent::GetDistanceAlongSplineAtSplineInputKey(float InKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetDistanceAlongSplineAtSplineInputKey"));
    struct Params_GetDistanceAlongSplineAtSplineInputKey {
        float InKey; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetDistanceAlongSplineAtSplineInputKey params{};
    params.InKey = (float)InKey;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector USplineComponent::GetDirectionAtTime(float Time, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseConstantVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetDirectionAtTime"));
    struct Params_GetDirectionAtTime {
        float Time; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        bool bUseConstantVelocity; // 0x5
        char pad_6[0x2];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetDirectionAtTime params{};
    params.Time = (float)Time;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUseConstantVelocity = (bool)bUseConstantVelocity;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetDirectionAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetDirectionAtSplinePoint"));
    struct Params_GetDirectionAtSplinePoint {
        int32_t PointIndex; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetDirectionAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetDirectionAtSplineInputKey(float InKey, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetDirectionAtSplineInputKey"));
    struct Params_GetDirectionAtSplineInputKey {
        float InKey; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetDirectionAtSplineInputKey params{};
    params.InKey = (float)InKey;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetDirectionAtDistanceAlongSpline(float Distance, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetDirectionAtDistanceAlongSpline"));
    struct Params_GetDirectionAtDistanceAlongSpline {
        float Distance; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetDirectionAtDistanceAlongSpline params{};
    params.Distance = (float)Distance;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetDefaultUpVector(ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetDefaultUpVector"));
    struct Params_GetDefaultUpVector {
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x0
        char pad_1[0x3];
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetDefaultUpVector params{};
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::GetArriveTangentAtSplinePoint(int32_t PointIndex, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.GetArriveTangentAtSplinePoint"));
    struct Params_GetArriveTangentAtSplinePoint {
        int32_t PointIndex; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetArriveTangentAtSplinePoint params{};
    params.PointIndex = (int32_t)PointIndex;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::FindUpVectorClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.FindUpVectorClosestToWorldLocation"));
    struct Params_FindUpVectorClosestToWorldLocation {
        FVector WorldLocation; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0xc
        char pad_d[0x3];
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_FindUpVectorClosestToWorldLocation params{};
    params.WorldLocation = (FVector)WorldLocation;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    WorldLocation = params.WorldLocation;
    return (FVector)params.ReturnValue;
}
FTransform USplineComponent::FindTransformClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace, bool bUseScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.FindTransformClosestToWorldLocation"));
    struct Params_FindTransformClosestToWorldLocation {
        FVector WorldLocation; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0xc
        bool bUseScale; // 0xd
        char pad_e[0x2];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_FindTransformClosestToWorldLocation params{};
    params.WorldLocation = (FVector)WorldLocation;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUseScale = (bool)bUseScale;
    ProcessEvent(func, &params);
    WorldLocation = params.WorldLocation;
    return (FTransform)params.ReturnValue;
}
FVector USplineComponent::FindTangentClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.FindTangentClosestToWorldLocation"));
    struct Params_FindTangentClosestToWorldLocation {
        FVector WorldLocation; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0xc
        char pad_d[0x3];
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_FindTangentClosestToWorldLocation params{};
    params.WorldLocation = (FVector)WorldLocation;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    WorldLocation = params.WorldLocation;
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::FindScaleClosestToWorldLocation(FVector& WorldLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.FindScaleClosestToWorldLocation"));
    struct Params_FindScaleClosestToWorldLocation {
        FVector WorldLocation; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_FindScaleClosestToWorldLocation params{};
    params.WorldLocation = (FVector)WorldLocation;
    ProcessEvent(func, &params);
    WorldLocation = params.WorldLocation;
    return (FVector)params.ReturnValue;
}
FRotator USplineComponent::FindRotationClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.FindRotationClosestToWorldLocation"));
    struct Params_FindRotationClosestToWorldLocation {
        FVector WorldLocation; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0xc
        char pad_d[0x3];
        FRotator ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_FindRotationClosestToWorldLocation params{};
    params.WorldLocation = (FVector)WorldLocation;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    WorldLocation = params.WorldLocation;
    return (FRotator)params.ReturnValue;
}
FVector USplineComponent::FindRightVectorClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.FindRightVectorClosestToWorldLocation"));
    struct Params_FindRightVectorClosestToWorldLocation {
        FVector WorldLocation; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0xc
        char pad_d[0x3];
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_FindRightVectorClosestToWorldLocation params{};
    params.WorldLocation = (FVector)WorldLocation;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    WorldLocation = params.WorldLocation;
    return (FVector)params.ReturnValue;
}
FVector USplineComponent::FindLocationClosestToWorldLocation(FVector& WorldLocation, ESplineCoordinateSpace::Type CoordinateSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.FindLocationClosestToWorldLocation"));
    struct Params_FindLocationClosestToWorldLocation {
        FVector WorldLocation; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0xc
        char pad_d[0x3];
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_FindLocationClosestToWorldLocation params{};
    params.WorldLocation = (FVector)WorldLocation;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    ProcessEvent(func, &params);
    WorldLocation = params.WorldLocation;
    return (FVector)params.ReturnValue;
}
float USplineComponent::FindInputKeyClosestToWorldLocation(FVector& WorldLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.FindInputKeyClosestToWorldLocation"));
    struct Params_FindInputKeyClosestToWorldLocation {
        FVector WorldLocation; // 0x0
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_FindInputKeyClosestToWorldLocation params{};
    params.WorldLocation = (FVector)WorldLocation;
    ProcessEvent(func, &params);
    WorldLocation = params.WorldLocation;
    return (float)params.ReturnValue;
}
void USplineComponent::ClearSplinePoints(bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.ClearSplinePoints"));
    struct Params_ClearSplinePoints {
        bool bUpdateSpline; // 0x0
    }; // Size: 0x1
    Params_ClearSplinePoints params{};
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
}
void USplineComponent::AddSplineWorldPoint(FVector& Position) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.AddSplineWorldPoint"));
    struct Params_AddSplineWorldPoint {
        FVector Position; // 0x0
    }; // Size: 0xc
    Params_AddSplineWorldPoint params{};
    params.Position = (FVector)Position;
    ProcessEvent(func, &params);
    Position = params.Position;
}
void USplineComponent::AddSplinePointAtIndex(FVector& Position, int32_t Index, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.AddSplinePointAtIndex"));
    struct Params_AddSplinePointAtIndex {
        FVector Position; // 0x0
        int32_t Index; // 0xc
        ESplineCoordinateSpace::Type CoordinateSpace; // 0x10
        bool bUpdateSpline; // 0x11
    }; // Size: 0x12
    Params_AddSplinePointAtIndex params{};
    params.Position = (FVector)Position;
    params.Index = (int32_t)Index;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
    Position = params.Position;
}
void USplineComponent::AddSplinePoint(FVector& Position, ESplineCoordinateSpace::Type CoordinateSpace, bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.AddSplinePoint"));
    struct Params_AddSplinePoint {
        FVector Position; // 0x0
        ESplineCoordinateSpace::Type CoordinateSpace; // 0xc
        bool bUpdateSpline; // 0xd
    }; // Size: 0xe
    Params_AddSplinePoint params{};
    params.Position = (FVector)Position;
    params.CoordinateSpace = (ESplineCoordinateSpace::Type)CoordinateSpace;
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
    Position = params.Position;
}
void USplineComponent::AddSplineLocalPoint(FVector& Position) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.AddSplineLocalPoint"));
    struct Params_AddSplineLocalPoint {
        FVector Position; // 0x0
    }; // Size: 0xc
    Params_AddSplineLocalPoint params{};
    params.Position = (FVector)Position;
    ProcessEvent(func, &params);
    Position = params.Position;
}
void USplineComponent::AddPoints(TArray<FSplinePoint>& Points, bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.AddPoints"));
    struct Params_AddPoints {
        TArray<FSplinePoint> Points; // 0x0
        bool bUpdateSpline; // 0x10
    }; // Size: 0x11
    Params_AddPoints params{};
    params.Points = (TArray<FSplinePoint>)Points;
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
    Points = params.Points;
}
void USplineComponent::AddPoint(FSplinePoint& Point, bool bUpdateSpline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SplineComponent.AddPoint"));
    struct Params_AddPoint {
        FSplinePoint Point; // 0x0
        bool bUpdateSpline; // 0x44
    }; // Size: 0x45
    Params_AddPoint params{};
    params.Point = (FSplinePoint)Point;
    params.bUpdateSpline = (bool)bUpdateSpline;
    ProcessEvent(func, &params);
    Point = params.Point;
}
