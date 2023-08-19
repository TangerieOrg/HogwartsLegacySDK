#pragma once
#include <cstdint>
#include "FCelestialDiskMeshParameters.hpp"
#include "FMoonDiskComputedState.hpp"
#include "FMoonDiskParameters.hpp"
class UProceduralMeshComponent;
class UMaterial;
class UMaterialParameterCollection;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
struct FMoonDisk {
    UProceduralMeshComponent* MeshComponent; // 0x0
    UMaterial* BaseMaterial; // 0x8
    UMaterialParameterCollection* MaterialParameterCollection; // 0x10
    UMaterialInstanceDynamic* DynamicMaterial; // 0x18
    FMoonDiskParameters Parameters; // 0x20
    FMoonDiskComputedState CurrentState; // 0x58
    FCelestialDiskMeshParameters MeshParameters; // 0xc4
}; // Size: 0xd0
#pragma pack(pop)
