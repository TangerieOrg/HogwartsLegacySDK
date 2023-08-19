#pragma once
#include <cstdint>
#include "ERagdollSensoryStatusValueEnum.hpp"
#pragma pack(push, 1)
struct FRagdollSensoryStatus {
    ERagdollSensoryStatusValueEnum SensoryValue; // 0x0
    bool Status; // 0x1
}; // Size: 0x2
#pragma pack(pop)
