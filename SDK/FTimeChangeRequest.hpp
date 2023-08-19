#pragma once
#include <cstdint>
#include "FTimeDateChangeValue.hpp"
#pragma pack(push, 1)
struct FTimeChangeRequest {
    FTimeDateChangeValue Year; // 0x0
    FTimeDateChangeValue Month; // 0x8
    FTimeDateChangeValue Day; // 0x10
    FTimeDateChangeValue Hours; // 0x18
    FTimeDateChangeValue Minutes; // 0x20
    FTimeDateChangeValue Seconds; // 0x28
}; // Size: 0x30
#pragma pack(pop)
