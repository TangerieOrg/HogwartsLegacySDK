#pragma once
#include <cstdint>
#include "EStarCatalogOrdering.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FStarCatalogEntryConvert {
    EStarCatalogOrdering Ordering; // 0x0
    char pad_1[0x3];
    float PostZRotationAngleDegrees; // 0x4
    bool bNormalizeRotation; // 0x8
    char pad_9[0x3];
    FVector PolarisDir; // 0xc
    FVector MintakaDir; // 0x18
    FVector NormalizeRotationAxis; // 0x24
    float NormalizeRotationAngleDegrees; // 0x30
    bool bValidNormalizeRotation; // 0x34
    char pad_35[0x3];
}; // Size: 0x38
#pragma pack(pop)
