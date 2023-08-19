#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FEnvironmentalGlobalsExtraColorVariable {
    FName Name; // 0x0
    FLinearColor Value; // 0x8
}; // Size: 0x18
#pragma pack(pop)
