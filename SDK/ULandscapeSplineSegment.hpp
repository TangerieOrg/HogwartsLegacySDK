#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FInterpCurveVector.hpp"
#include "FLandscapeSplineInterpPoint.hpp"
#include "FLandscapeSplineSegmentConnection.hpp"
#include "UObject.hpp"
class USplineMeshComponent;
#pragma pack(push, 1)
class ULandscapeSplineSegment : public UObject {
public:
    FLandscapeSplineSegmentConnection Connections[2]; // 0x28
    FInterpCurveVector SplineInfo; // 0x58
    TArray<FLandscapeSplineInterpPoint> Points; // 0x70
    FBox Bounds; // 0x80
    char pad_9c[0x4];
    TArray<USplineMeshComponent*> LocalMeshComponents; // 0xa0
    static ULandscapeSplineSegment* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
