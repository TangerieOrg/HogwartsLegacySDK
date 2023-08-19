#pragma once
#include <cstdint>
#include "FTimeInput.hpp"
#pragma pack(push, 1)
struct FTimeSourceSlotSetupTime {
    FName Name; // 0x0
    FTimeInput Time; // 0x8
}; // Size: 0x14
#pragma pack(pop)
