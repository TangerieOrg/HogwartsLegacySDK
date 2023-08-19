#pragma once
#include <cstdint>
#include "FRigUnit_NameBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_NameConcat : public FRigUnit_NameBase {
    FName A; // 0x8
    FName B; // 0x10
    FName Result; // 0x18
}; // Size: 0x20
#pragma pack(pop)
