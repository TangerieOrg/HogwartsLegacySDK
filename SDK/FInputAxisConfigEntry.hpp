#pragma once
#include <cstdint>
#include "FInputAxisProperties.hpp"
#pragma pack(push, 1)
struct FInputAxisConfigEntry {
    FName AxisKeyName; // 0x0
    FInputAxisProperties AxisProperties; // 0x8
}; // Size: 0x18
#pragma pack(pop)
