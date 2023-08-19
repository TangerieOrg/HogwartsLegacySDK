#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FObjectHabitatFoliageType {
    UClass* FoliageType; // 0x0
    float MinFoliageDensity; // 0x8
    bool bRequired; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
