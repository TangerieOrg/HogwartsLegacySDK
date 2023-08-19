#pragma once
#include <cstdint>
class UConsoleMacroConsoleDelegate;
#pragma pack(push, 1)
struct FConsoleMacroCommandBase {
    char pad_0[0x8];
    UConsoleMacroConsoleDelegate* ConsoleDelegate; // 0x8
}; // Size: 0x10
#pragma pack(pop)
