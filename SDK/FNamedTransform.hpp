#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FNamedTransform {
    FTransform Value; // 0x0
    FName Name; // 0x30
    char pad_38[0x8];
}; // Size: 0x40
#pragma pack(pop)
