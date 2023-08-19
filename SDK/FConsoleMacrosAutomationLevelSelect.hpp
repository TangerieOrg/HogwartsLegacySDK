#pragma once
#include <cstdint>
#include "EConsoleMacrosAutomationLevelType.hpp"
#include "FConsoleMacroLevelName.hpp"
#pragma pack(push, 1)
struct FConsoleMacrosAutomationLevelSelect {
    EConsoleMacrosAutomationLevelType Type; // 0x0
    char pad_1[0x3];
    FConsoleMacroLevelName LevelName; // 0x4
    char pad_c[0x4];
    FString PartialLevelName; // 0x10
    bool bUseLevelName; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
