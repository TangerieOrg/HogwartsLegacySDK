#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRotationLimit {
    FVector LimitMin; // 0x0
    FVector LimitMax; // 0xc
}; // Size: 0x18
#pragma pack(pop)
