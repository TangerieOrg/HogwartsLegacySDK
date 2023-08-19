#pragma once
#include <cstdint>
#include "FConsoleMacrosAutomationLevelSelect.hpp"
#pragma pack(push, 1)
struct FConsoleMacrosBlockAutomationLevel {
    FConsoleMacrosAutomationLevelSelect Level; // 0x0
    int32_t BlockPhases; // 0x28
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
