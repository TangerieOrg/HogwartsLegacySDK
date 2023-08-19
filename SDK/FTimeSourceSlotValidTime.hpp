#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FTimespan.hpp"
#pragma pack(push, 1)
struct FTimeSourceSlotValidTime {
    FName Name; // 0x0
    FDateTime DateTime; // 0x8
    FTimespan Duration; // 0x10
}; // Size: 0x18
#pragma pack(pop)
