#pragma once
#include <cstdint>
#include "ETimeDateChangeValueType.hpp"
#pragma pack(push, 1)
struct FTimeDateChangeValue {
    int32_t Value; // 0x0
    ETimeDateChangeValueType Type; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
