#pragma once
#include <cstdint>
#include "FMatrix.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
struct FCameraData;
class AActor;
struct FTransform;
class APlayerController;
struct FPlane;
struct FVector2D;
struct FQuat;
struct FBox2D;
#pragma pack(push, 1)
class UCameraDataHelper : public UObject {
public:
    static UCameraDataHelper* StaticClass();
    static FRotator VecToRot(FVector Vec);
    static FRotator ToOrientationRotator(FVector Vec);
    static void SetTargetOffset(FCameraData& CameraData, FVector Value, FVector Velocity);
    static void SetRotation(FCameraData& CameraData, FRotator Value, FRotator Velocity);
    static void SetFocusDistance(FCameraData& CameraData, float Value, float Velocity);
    static void SetFieldOfView(FCameraData& CameraData, float Value, float Velocity);
    static void SetCameraSpaceTranslation(FCameraData& CameraData, FVector Value, FVector Velocity);
    static void SetCameraSpaceRotation(FCameraData& CameraData, FRotator Value, FRotator Velocity);
    static void SetArmOrigin(FCameraData& CameraData, FVector Value, FVector Velocity);
    static void SetArmLength(FCameraData& CameraData, float Value, float Velocity);
    static void SetAperture(FCameraData& CameraData, float Value, float Velocity);
    static void SetAccumulatedRotationDelta(FCameraData& CameraData, FRotator Value, FRotator Velocity);
    static float SafeUnwindDegrees(float Deg);
    static FVector RotToVec(FRotator Rot);
    static void RotateAroundLocation(FVector& TargetLocation, FVector& InOutViewLocation, FRotator& InOutViewRotation, float AngleInRadians);
    static FVector RayPlaneIntersection(FVector& RayOrigin, FVector& RayDirection, FPlane& Plane);
    static FVector GetWorldDirectionAtScreenLocation(FVector2D& InScreenLocation, FMatrix& InInvViewProjectionMatrix);
    static void GetTargetOffset(FCameraData& CameraData, FVector& OutValue, FVector& OutVelocity);
    static bool GetScreenLocationAtWorldLocation(FVector& InWorldLocation, FMatrix& InViewProjectionMatrix, FVector2D& OutScreenLocation);
    static void GetRotation(FCameraData& CameraData, FRotator& OutValue, FRotator& OutVelocity);
    static float GetFOVFromFocalLength(float InFocalLength, float InSensorWidth, bool bIncOffset);
    static void GetFocusDistance(FCameraData& CameraData, float& OutValue, float& OutVelocity);
    static float GetFocalLengthFromFOV(float InFieldOfView, float InSensorWidth, bool bIncOffset);
    static void GetFieldOfView(FCameraData& CameraData, float& OutValue, float& OutVelocity);
    static void GetCameraSpaceTranslation(FCameraData& CameraData, FVector& OutValue, FVector& OutVelocity);
    static void GetCameraSpaceRotation(FCameraData& CameraData, FRotator& OutValue, FRotator& OutVelocity);
    static void GetArmOrigin(FCameraData& CameraData, FVector& OutValue, FVector& OutVelocity);
    static void GetArmLength(FCameraData& CameraData, float& OutValue, float& OutVelocity);
    static void GetAperture(FCameraData& CameraData, float& OutValue, float& OutVelocity);
    static void GetAccumulatedRotationDelta(FCameraData& CameraData, FRotator& OutValue, FRotator& OutVelocity);
    static float FindSwingTwistDecomposition(FQuat& Quat, FVector& Axis);
    static void DeprojectScreenToWorldStable(APlayerController* PlayerController, FVector2D& InScreenPosition, FVector& OutLocation, FVector& OutDirection);
    static FMatrix ComputeViewProjectionMatrix(AActor* InTargetActor, FTransform& InCameraTransform, float InFieldOfView);
    static FVector ComputeClosestDirectionInFrustum(FVector& InTargetDirection, FBox2D& InScreenArea, FVector& InEyeLocation, FMatrix& InViewProjMatrix, FMatrix& InInvViewProjMatrix);
    static void AddTargetOffset(FCameraData& CameraData, FVector Value, FVector Velocity, float Scale);
    static void AddRotation(FCameraData& CameraData, FRotator Value, FRotator Velocity, float Scale, bool bAccumulate);
    static void AddFocusDistance(FCameraData& CameraData, float Value, float Velocity, float Scale);
    static void AddFieldOfView(FCameraData& CameraData, float Value, float Velocity, float Scale);
    static void AddCameraSpaceTranslation(FCameraData& CameraData, FVector Value, FVector Velocity, float Scale);
    static void AddCameraSpaceRotation(FCameraData& CameraData, FRotator Value, FRotator Velocity, float Scale);
    static void AddArmOrigin(FCameraData& CameraData, FVector Value, FVector Velocity, float Scale);
    static void AddArmLength(FCameraData& CameraData, float Value, float Velocity, float Scale);
    static void AddAperture(FCameraData& CameraData, float Value, float Velocity, float Scale);
}; // Size: 0x28
#pragma pack(pop)
