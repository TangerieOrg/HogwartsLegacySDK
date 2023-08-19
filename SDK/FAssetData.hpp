#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAssetData {
    FName ObjectPath; // 0x0
    FName PackageName; // 0x8
    FName PackagePath; // 0x10
    FName AssetName; // 0x18
    FName AssetClass; // 0x20
    char pad_28[0x38];
}; // Size: 0x60
#pragma pack(pop)
