#pragma once
#include <cstdint>
#include "FClothPhysicsProperties_Legacy.hpp"
#pragma pack(push, 1)
struct FClothingAssetData_Legacy {
    FName AssetName; // 0x0
    FString ApexFileName; // 0x8
    bool bClothPropertiesChanged; // 0x18
    char pad_19[0x3];
    FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
    char pad_6c[0x4];
}; // Size: 0x70
#pragma pack(pop)
