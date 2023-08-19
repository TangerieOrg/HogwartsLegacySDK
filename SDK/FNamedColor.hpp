#pragma once
#include <cstdint>
#include "FColor.hpp"
#pragma pack(push, 1)
struct FNamedColor {
    FColor Value; // 0x0
    FName Name; // 0x4
}; // Size: 0xc
#pragma pack(pop)
