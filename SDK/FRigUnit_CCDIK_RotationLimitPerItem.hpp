#pragma once
#include <cstdint>
#include "FRigElementKey.hpp"
#pragma pack(push, 1)
struct FRigUnit_CCDIK_RotationLimitPerItem {
    FRigElementKey Item; // 0x0
    float Limit; // 0xc
}; // Size: 0x10
#pragma pack(pop)
