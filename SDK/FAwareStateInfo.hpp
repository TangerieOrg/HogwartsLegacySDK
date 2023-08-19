#pragma once
#include <cstdint>
#include "ENPC_TargetAwareState.hpp"
#pragma pack(push, 1)
struct FAwareStateInfo {
    ENPC_TargetAwareState AwareState; // 0x0
    char pad_1[0x3];
    float AlertPercent; // 0x4
}; // Size: 0x8
#pragma pack(pop)
