#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMTDResult {
    FVector Direction; // 0x0
    float Distance; // 0xc
}; // Size: 0x10
#pragma pack(pop)
