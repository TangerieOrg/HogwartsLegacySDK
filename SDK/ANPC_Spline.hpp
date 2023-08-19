#pragma once
#include <cstdint>
#include "AActor.hpp"
class USplineComponent;
class UArrowComponent;
#pragma pack(push, 1)
class ANPC_Spline : public AActor {
public:
    bool bDrawUpArrows; // 0x248
    char pad_249[0x7];
    USplineComponent* SplineComponent; // 0x250
    TArray<UArrowComponent*> PointUpArrows; // 0x258
    static ANPC_Spline* StaticClass();
}; // Size: 0x268
#pragma pack(pop)
