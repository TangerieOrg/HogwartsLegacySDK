#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNPC_ParryLeadInTask : public UAblAbilityTask {
public:
    bool bOverrideDBParryLeadIn; // 0x70
    char pad_71[0x3];
    float ParryLeadIn; // 0x74
    float CustomProjectileSpeed; // 0x78
    char pad_7c[0x4];
    static UAblNPC_ParryLeadInTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
