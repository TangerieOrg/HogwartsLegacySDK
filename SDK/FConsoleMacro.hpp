#pragma once
#include <cstdint>
#include "FConsoleMacroCommandBase.hpp"
#pragma pack(push, 1)
struct FConsoleMacro : public FConsoleMacroCommandBase {
    TArray<FName> Commands; // 0x10
}; // Size: 0x20
#pragma pack(pop)
