#pragma once
#include <cstdint>
#include "FConsoleMacroAnyNameWithRestore.hpp"
#pragma pack(push, 1)
struct FConsoleMacrosAutomation {
    TArray<FConsoleMacroAnyNameWithRestore> OnBeginPlay; // 0x0
    TArray<FConsoleMacroAnyNameWithRestore> OnEndPlay; // 0x10
}; // Size: 0x20
#pragma pack(pop)
