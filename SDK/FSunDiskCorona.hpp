#pragma once
#include <cstdint>
#include "FCelestialHaloMeshParameters.hpp"
class UProceduralMeshComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UCurveFloat;
#pragma pack(push, 1)
struct FSunDiskCorona {
    UProceduralMeshComponent* MeshComponent; // 0x0
    UMaterialInterface* BaseMaterial; // 0x8
    UMaterialInstanceDynamic* DynamicMaterial; // 0x10
    UCurveFloat* BrightnessCurve; // 0x18
    UCurveFloat* AlphaCurve; // 0x20
    UCurveFloat* ScaleCurve; // 0x28
    FCelestialHaloMeshParameters MeshParameters; // 0x30
    bool bEnabled; // 0x40
    char pad_41[0x7];
}; // Size: 0x48
#pragma pack(pop)
