#pragma once
#include <cstdint>
class UMaterialInterface;
#pragma pack(push, 1)
struct FHairGroupsMaterial {
    UMaterialInterface* Material; // 0x0
    FName SlotName; // 0x8
}; // Size: 0x10
#pragma pack(pop)
