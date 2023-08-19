#pragma once
#include <cstdint>
#include "FConsoleMacroCommandBase.hpp"
#include "FConsoleMacroShortcut.hpp"
#pragma pack(push, 1)
struct FConsoleMacroGroup : public FConsoleMacroCommandBase {
    TArray<FConsoleMacroShortcut> Commands; // 0x10
}; // Size: 0x20
#pragma pack(pop)
