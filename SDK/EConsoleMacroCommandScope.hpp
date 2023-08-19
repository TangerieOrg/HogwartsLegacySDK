#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConsoleMacroCommandScope : uint8_t {
    CookedAndEditor = 0,
    CookedOnly = 1,
    EditorOnly = 2,
    EConsoleMacroCommandScope_MAX = 3,
};
#pragma pack(pop)
