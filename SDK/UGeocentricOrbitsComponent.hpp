#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FGeocentricOrbit.hpp"
#include "FGeocentricOrbitResources.hpp"
#include "FGeocentricOrbitsAdvanced.hpp"
#include "FGeocentricOrbitsShow.hpp"
#include "FTopographicObserver.hpp"
#include "USceneComponent.hpp"
class UStaticMesh;
class UMaterialInterface;
#pragma pack(push, 1)
class UGeocentricOrbitsComponent : public USceneComponent {
public:
    FGeocentricOrbitsAdvanced Advanced; // 0x220
    char pad_254[0x4];
    FDateTime ComputedForDate; // 0x258
    FTopographicObserver ComputedForTopographicObserver; // 0x260
    char pad_274[0x4];
    UStaticMesh* SplineMesh; // 0x278
    UMaterialInterface* SunSplineMeshMaterial; // 0x280
    UMaterialInterface* MoonSplineMeshMaterial; // 0x288
    UMaterialInterface* VenusSplineMeshMaterial; // 0x290
    UMaterialInterface* MarsSplineMeshMaterial; // 0x298
    UMaterialInterface* JupiterSplineMeshMaterial; // 0x2a0
    UMaterialInterface* SaturnSplineMeshMaterial; // 0x2a8
    FGeocentricOrbit SunPath; // 0x2b0
    FGeocentricOrbit MoonPath; // 0x318
    FGeocentricOrbit VenusPath; // 0x380
    FGeocentricOrbit MarsPath; // 0x3e8
    FGeocentricOrbit JupiterPath; // 0x450
    FGeocentricOrbit SaturnPath; // 0x4b8
    FGeocentricOrbitResources OrbitResources; // 0x520
    char pad_548[0x8];
    static UGeocentricOrbitsComponent* StaticClass();
}; // Size: 0x550
#pragma pack(pop)
