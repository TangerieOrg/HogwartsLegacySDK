#pragma once
#include <cstdint>
#include "EConsoleMacroCommandScope.hpp"
#include "FConsoleMacroAnyName.hpp"
#pragma pack(push, 1)
struct FConsoleMacroEntry {
    FName Name; // 0x0
    TArray<FConsoleMacroAnyName> Commands; // 0x8
    EConsoleMacroCommandScope Scope; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
