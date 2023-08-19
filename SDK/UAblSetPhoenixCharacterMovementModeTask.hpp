#pragma once
#include <cstdint>
#include "EManagedMovementModePriority.hpp"
#include "EMovementMode.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSetPhoenixCharacterMovementModeTask : public UAblAbilityTask {
public:
    EMovementMode MovementMode; // 0x70
    EManagedMovementModePriority Priority; // 0x71
    char pad_72[0x6];
    static UAblSetPhoenixCharacterMovementModeTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
