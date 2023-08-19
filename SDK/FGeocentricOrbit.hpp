#pragma once
#include <cstdint>
#include "FGeocentricOrbitResources.hpp"
class USplineComponent;
class USceneComponent;
class UMaterialInstanceDynamic;
class USplineMeshComponent;
#pragma pack(push, 1)
struct FGeocentricOrbit {
    FGeocentricOrbitResources Resources; // 0x0
    USplineComponent* Spline; // 0x28
    USceneComponent* SplineMeshRoot; // 0x30
    TArray<USceneComponent*> Extras; // 0x38
    TArray<UMaterialInstanceDynamic*> DynamicMaterials; // 0x48
    TArray<USplineMeshComponent*> SplineMeshes; // 0x58
}; // Size: 0x68
#pragma pack(pop)
