#pragma once
#include <cstdint>
#include "FCelestialDiskMeshParameters.hpp"
#include "FSunDiskComputedState.hpp"
#include "FSunDiskCorona.hpp"
#include "FSunDiskOverrides.hpp"
#include "FSunDiskParameters.hpp"
class UProceduralMeshComponent;
class UMaterial;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
struct FSunDisk {
    UProceduralMeshComponent* MeshComponent; // 0x0
    UMaterial* BaseMaterial; // 0x8
    UMaterialInstanceDynamic* DynamicMaterial; // 0x10
    FSunDiskParameters Parameters; // 0x18
    FSunDiskCorona Corona; // 0x60
    FSunDiskOverrides OverrideState; // 0xa8
    float OverrideStateLerpAlpha; // 0xbc
    FSunDiskComputedState CurrentState; // 0xc0
    FCelestialDiskMeshParameters MeshParameters; // 0x10c
}; // Size: 0x118
#pragma pack(pop)
