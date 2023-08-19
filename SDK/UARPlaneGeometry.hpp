#pragma once
#include <cstdint>
#include "EARPlaneOrientation.hpp"
#include "FVector.hpp"
#include "UARTrackedGeometry.hpp"
#pragma pack(push, 1)
class UARPlaneGeometry : public UARTrackedGeometry {
public:
    char pad_100[0x8];
    FVector Extent; // 0x108
    char pad_114[0x4];
    TArray<FVector> BoundaryPolygon; // 0x118
    UARPlaneGeometry* SubsumedBy; // 0x128
    static UARPlaneGeometry* StaticClass();
    UARPlaneGeometry* GetSubsumedBy();
    EARPlaneOrientation GetOrientation();
    FVector GetExtent();
    FVector GetCenter();
    TArray<FVector> GetBoundaryPolygonInLocalSpace();
}; // Size: 0x130
#pragma pack(pop)
