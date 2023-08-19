#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblPrintToScreenTask : public UAblAbilityTask {
public:
    FString DebugMessage; // 0x70
    static UAblPrintToScreenTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
