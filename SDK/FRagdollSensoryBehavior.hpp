#pragma once
#include <cstdint>
#include "ERagdollSensoryBehaviorEnum.hpp"
class URagdollBehavior;
#pragma pack(push, 1)
struct FRagdollSensoryBehavior {
    ERagdollSensoryBehaviorEnum Relativity; // 0x0
    char pad_1[0x7];
    URagdollBehavior* Behavior; // 0x8
    bool Status; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
