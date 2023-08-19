#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCachedStation {
    FVector Location; // 0x0
    FName ParentLocation; // 0xc
    char pad_14[0x54];
}; // Size: 0x68
#pragma pack(pop)
