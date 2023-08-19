#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FNamedVector {
    FVector Value; // 0x0
    FName Name; // 0xc
}; // Size: 0x14
#pragma pack(pop)
