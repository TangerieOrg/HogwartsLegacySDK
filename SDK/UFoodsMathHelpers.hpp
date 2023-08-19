#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FRotator;
#pragma pack(push, 1)
class UFoodsMathHelpers : public UBlueprintFunctionLibrary {
public:
    static UFoodsMathHelpers* StaticClass();
    static void UniformPointsOnSphere(int32_t NumPoints, TArray<FVector>& PointsOnSphere);
    static void UniformPointOnSphere(int32_t NumPoints, int32_t Point, FVector& PointOnSphere);
    static void TriangleWaveSine(float Time, float Period, float& Output, float Amplitude);
    static void TriangleWaveCosine(float Time, float Period, float& Output, float Amplitude, float Phase);
    static void TriangleWave(float Time, float Period, float& Output, float Amplitude);
    static void RotationSafeUp(FVector Unit, FVector& SafeUp);
    static void RotationSafePerp(FVector& UnitA, FVector& UnitB, FVector& SafePerp);
    static void RotationFromUnitZYSafe(FVector UnitZ, FVector UnitY, FRotator& Rotation);
    static void RotationFromUnitZY(FVector UnitZ, FVector UnitY, FRotator& Rotation);
    static void RotationFromUnitZXSafe(FVector UnitZ, FVector UnitX, FRotator& Rotation);
    static void RotationFromUnitZX(FVector UnitZ, FVector UnitX, FRotator& Rotation);
    static void RotationFromUnitZ(FVector UnitZ, FRotator& Rotation);
    static void RotationFromUnitYZSafe(FVector UnitY, FVector UnitZ, FRotator& Rotation);
    static void RotationFromUnitYZ(FVector UnitY, FVector UnitZ, FRotator& Rotation);
    static void RotationFromUnitYXSafe(FVector UnitY, FVector UnitX, FRotator& Rotation);
    static void RotationFromUnitYX(FVector UnitY, FVector UnitX, FRotator& Rotation);
    static void RotationFromUnitY(FVector UnitY, FRotator& Rotation);
    static void RotationFromUnitXZSafe(FVector UnitX, FVector UnitZ, FRotator& Rotation);
    static void RotationFromUnitXZ(FVector UnitX, FVector UnitZ, FRotator& Rotation);
    static void RotationFromUnitXYSafe(FVector UnitX, FVector UnitY, FRotator& Rotation);
    static void RotationFromUnitXY(FVector UnitX, FVector UnitY, FRotator& Rotation);
    static void RotationFromUnitX(FVector UnitX, FRotator& Rotation);
    static void RandomUniformPointsOnSphere(int32_t NumPoints, float RandomHalfAngleDegrees, TArray<FVector>& PointsOnSphere);
    static void RandomUniformPointOnSphere(int32_t NumPoints, int32_t Point, FVector& PointOnSphere, float RandomHalfAngleInnerDegrees, float RandomHalfAngleOuterDegrees);
    static void RandomInCone(FVector Direction, FVector& RandomDir, float HalfAngleInnerDegrees, float HalfAngleOuterDegrees);
    static void MakeOrthogonalUnitVector(FVector In, FVector& Orthoganal);
}; // Size: 0x28
#pragma pack(pop)
