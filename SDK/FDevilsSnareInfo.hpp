#pragma once
#include <cstdint>
#include "FVector.hpp"
class UStaticMesh;
class UMaterialInstance;
#pragma pack(push, 1)
struct FDevilsSnareInfo {
    UStaticMesh* StaticMesh; // 0x0
    UMaterialInstance* Material; // 0x8
    FVector OffsetForAreaOfEffectVolume; // 0x10
    FVector IncreaseExtentsForAreaOfEffectVolume; // 0x1c
}; // Size: 0x28
#pragma pack(pop)
