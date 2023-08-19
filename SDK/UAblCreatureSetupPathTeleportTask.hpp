#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblCreatureSetupPathTeleportTask : public UAblAbilityTask {
public:
    float TeleportChanceOnStart; // 0x70
    char pad_74[0x4];
    static UAblCreatureSetupPathTeleportTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
