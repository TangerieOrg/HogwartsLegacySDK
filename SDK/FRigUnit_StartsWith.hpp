#pragma once
#include <cstdint>
#include "FRigUnit_NameBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_StartsWith : public FRigUnit_NameBase {
    FName Name; // 0x8
    FName Start; // 0x10
    bool Result; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
