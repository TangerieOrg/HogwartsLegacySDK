#pragma once
#include <cstdint>
#include "ERagdollSensoryRangeValueEnum.hpp"
#pragma pack(push, 1)
struct FRagdollSensoryRange {
    ERagdollSensoryRangeValueEnum SensoryValue; // 0x0
    char pad_1[0x3];
    float Min; // 0x4
    float Max; // 0x8
    bool IfOutOfRange; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
