#pragma once
#include <cstdint>
#include "FMaterialPermuterGroupProperty.hpp"
#include "FMaterialPermuterLoadingStrategy.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterLoadingGroupStrategy {
    FMaterialPermuterGroupProperty Group; // 0x0
    FMaterialPermuterLoadingStrategy Strategy; // 0x10
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
