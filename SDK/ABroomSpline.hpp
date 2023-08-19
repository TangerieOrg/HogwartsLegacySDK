#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FVector.hpp"
class USplineComponent;
#pragma pack(push, 1)
class ABroomSpline : public AActor {
public:
    USplineComponent* Spline; // 0x248
    char pad_250[0x28];
    static ABroomSpline* StaticClass();
    void GetSplinePointWorldPositions(TArray<FVector>& OutSplinePathPoints);
    void CopySelectedSpline();
}; // Size: 0x278
#pragma pack(pop)
