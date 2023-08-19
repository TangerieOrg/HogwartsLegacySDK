#pragma once
#include <cstdint>
#include "FRigElementKey.hpp"
#pragma pack(push, 1)
struct FRigUnit_Harmonics_TargetItem {
    FRigElementKey Item; // 0x0
    float Ratio; // 0xc
}; // Size: 0x10
#pragma pack(pop)
