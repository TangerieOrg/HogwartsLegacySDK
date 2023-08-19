#pragma once
#include <cstdint>
#include "ERigElementType.hpp"
#pragma pack(push, 1)
struct FRigElementKey {
    ERigElementType Type; // 0x0
    char pad_1[0x3];
    FName Name; // 0x4
}; // Size: 0xc
#pragma pack(pop)
