#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblRagdollForceToNavMeshTask : public UAblAbilityTask {
public:
    float Force; // 0x70
    char pad_74[0x4];
    static UAblRagdollForceToNavMeshTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
