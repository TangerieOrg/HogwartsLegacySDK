#pragma once
#include <cstdint>
#include "FSplinePoint.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMercunaSpline : public UObject {
public:
    char pad_28[0x18];
    static UMercunaSpline* StaticClass();
    bool IsValid();
    bool IsReady();
    bool IsPartial();
    TArray<FSplinePoint> GetSplinePoints();
    FVector GetPathPoint(int32_t I);
    int32_t GetNumPathPoints();
    float GetLength();
}; // Size: 0x40
#pragma pack(pop)
