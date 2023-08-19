#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNPC_ParryExternalLeadInTask : public UAblAbilityTask {
public:
    float DistanceTrigger; // 0x70
    float AdditionalLeadInTime; // 0x74
    static UAblNPC_ParryExternalLeadInTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
