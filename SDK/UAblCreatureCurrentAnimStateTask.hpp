#pragma once
#include <cstdint>
#include "ECreatureMovementSpeed.hpp"
#include "ECreatureStance.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblCreatureCurrentAnimStateTask : public UAblAbilityTask {
public:
    ECreatureStance CurrentStance; // 0x70
    ECreatureStance NextStance; // 0x71
    ECreatureMovementSpeed CurrentGait; // 0x72
    ECreatureMovementSpeed NextGait; // 0x73
    bool bInIdleVariation; // 0x74
    char pad_75[0x3];
    static UAblCreatureCurrentAnimStateTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
