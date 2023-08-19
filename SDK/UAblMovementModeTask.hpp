#pragma once
#include <cstdint>
#include "EMovementMode.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblMovementModeTask : public UAblAbilityTask {
public:
    EMovementMode StartMovement; // 0x70
    bool bUseEndMovement; // 0x71
    EMovementMode EndMovement; // 0x72
    char pad_73[0x5];
    static UAblMovementModeTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
