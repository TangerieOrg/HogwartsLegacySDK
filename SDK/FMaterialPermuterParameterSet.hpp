#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMaterialPermuterParameterSet {
    TArray<FName> Scalars; // 0x0
    TArray<FName> Vectors; // 0x10
    TArray<FName> Textures; // 0x20
}; // Size: 0x30
#pragma pack(pop)
