#pragma once
#include <cstdint>
#include "FConsoleMacrosAutomation.hpp"
#include "FConsoleMacrosAutomationLevelSelect.hpp"
#pragma pack(push, 1)
struct FConsoleMacrosAutomationLevel {
    FConsoleMacrosAutomationLevelSelect Level; // 0x0
    FConsoleMacrosAutomation Automation; // 0x28
    int32_t BlockEveryLevelAutomations; // 0x48
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)
