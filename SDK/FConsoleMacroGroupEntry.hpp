#pragma once
#include <cstdint>
#include "FConsoleMacroShortcutEntry.hpp"
#pragma pack(push, 1)
struct FConsoleMacroGroupEntry {
    FName Name; // 0x0
    TArray<FConsoleMacroShortcutEntry> Commands; // 0x8
}; // Size: 0x18
#pragma pack(pop)
