#pragma once
#include <cstdint>
#include "FRigUnit_NameBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_NameTruncate : public FRigUnit_NameBase {
    FName Name; // 0x8
    int32_t Count; // 0x10
    bool FromEnd; // 0x14
    char pad_15[0x3];
    FName Remainder; // 0x18
    FName Chopped; // 0x20
}; // Size: 0x28
#pragma pack(pop)
