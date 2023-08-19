#pragma once
#include <cstdint>
#include "FConsoleMacroAnyName.hpp"
#include "FConsoleMacroEntry.hpp"
#include "FConsoleMacroGroupEntry.hpp"
#include "FConsoleMacroShortcutEntryNameRequired.hpp"
#include "FConsoleMacros.hpp"
#include "FConsoleMacrosAutomation.hpp"
#include "FConsoleMacrosAutomationLevel.hpp"
#include "FConsoleMacrosBlockAutomationLevel.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UConsoleMacrosUserDefinitions : public UObject {
public:
    TArray<FConsoleMacroGroupEntry> Groups; // 0x28
    TArray<FConsoleMacroShortcutEntryNameRequired> Commands; // 0x38
    TArray<FConsoleMacroEntry> Macros; // 0x48
    TArray<FConsoleMacroAnyName> OnGameStartup; // 0x58
    FConsoleMacrosAutomation EveryLevelAutomation; // 0x68
    TArray<FConsoleMacrosAutomationLevel> PerLevelAutomation; // 0x88
    TArray<FConsoleMacrosBlockAutomationLevel> BlockLevelAutomation; // 0x98
    bool bRunOnGameStartup; // 0xa8
    bool bRunEveryLevelAutomation; // 0xa9
    bool bRunPerLevelAutomation; // 0xaa
    bool bBlockAllAutomation; // 0xab
    char pad_ac[0x4];
    FConsoleMacros LiveMacros; // 0xb0
    static UConsoleMacrosUserDefinitions* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)
