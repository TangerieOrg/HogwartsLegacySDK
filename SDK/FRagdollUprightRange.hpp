#pragma once
#include <cstdint>
#include "ERagdollBodyLineUprightEnum.hpp"
#pragma pack(push, 1)
struct FRagdollUprightRange {
    ERagdollBodyLineUprightEnum CompareWorldUpTo; // 0x0
    char pad_1[0x3];
    float Min; // 0x4
    float Max; // 0x8
}; // Size: 0xc
#pragma pack(pop)
