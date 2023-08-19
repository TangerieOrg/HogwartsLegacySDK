#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FNPC_NavPath {
    bool bPathGenerated; // 0x0
    char pad_1[0x7];
    TArray<FVector> Points; // 0x8
    bool bPathIsPartial; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
