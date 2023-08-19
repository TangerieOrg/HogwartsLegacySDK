#pragma once
#include <cstdint>
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
struct FBurningMaterial {
    UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x0
    char pad_8[0x10];
}; // Size: 0x18
#pragma pack(pop)
