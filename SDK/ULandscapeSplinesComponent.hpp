#pragma once
#include <cstdint>
#include "UPrimitiveComponent.hpp"
class ULandscapeSplineControlPoint;
class USplineMeshComponent;
class ULandscapeSplineSegment;
class UMeshComponent;
#pragma pack(push, 1)
class ULandscapeSplinesComponent : public UPrimitiveComponent {
public:
    TArray<ULandscapeSplineControlPoint*> ControlPoints; // 0x480
    TArray<ULandscapeSplineSegment*> Segments; // 0x490
    TArray<UMeshComponent*> CookedForeignMeshComponents; // 0x4a0
    static ULandscapeSplinesComponent* StaticClass();
    TArray<USplineMeshComponent*> GetSplineMeshComponents();
}; // Size: 0x4b0
#pragma pack(pop)
