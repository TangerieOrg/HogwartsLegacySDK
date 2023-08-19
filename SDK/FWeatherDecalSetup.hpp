#pragma once
#include <cstdint>
class UMaterialInterface;
class UWeatherDecalPlacement;
#pragma pack(push, 1)
struct FWeatherDecalSetup {
    UMaterialInterface* DecalMaterial; // 0x0
    FName DecalName; // 0x8
    UWeatherDecalPlacement* DecalPlacement; // 0x10
    int32_t DecalSortOrderOffset; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
