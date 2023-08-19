#pragma once
#include <cstdint>
#include "FConsoleMacroEntry.hpp"
#include "FConsoleMacroGroupEntry.hpp"
#include "FConsoleMacroShortcutEntryNameRequired.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UConsoleMacrosPluginDefinitions : public UObject {
public:
    TArray<FConsoleMacroGroupEntry> Groups; // 0x28
    TArray<FConsoleMacroShortcutEntryNameRequired> Commands; // 0x38
    TArray<FConsoleMacroEntry> Macros; // 0x48
    static UConsoleMacrosPluginDefinitions* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
