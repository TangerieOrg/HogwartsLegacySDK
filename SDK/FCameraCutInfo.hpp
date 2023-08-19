#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCameraCutInfo {
    FVector Location; // 0x0
    float Timestamp; // 0xc
}; // Size: 0x10
#pragma pack(pop)
