#pragma once
#include <cstdint>
#include "EOrientToSlerpType.hpp"
#pragma pack(push, 1)
struct FOrientToSlerp {
    EOrientToSlerpType Type; // 0x0
    char pad_1[0x3];
    float Speed; // 0x4
    float Filter; // 0x8
}; // Size: 0xc
#pragma pack(pop)
