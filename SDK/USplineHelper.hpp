#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
class USplineComponent;
#pragma pack(push, 1)
class USplineHelper : public UObject {
public:
    static USplineHelper* StaticClass();
    static bool IsLocationCloseEnoughToSplineAtDistance(USplineComponent* SplineComponent, float DistanceAlongSpline, FVector TestLocation, float DistanceRange, bool bDebug);
    static float GetDistanceAlongSplineFromWorldLocation(USplineComponent* SplineComponent, FVector Location, bool& bFound);
}; // Size: 0x28
#pragma pack(pop)
