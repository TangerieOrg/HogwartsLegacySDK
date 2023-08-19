#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConsoleMacroCommandMode {
    Execute = 0,
    Restore = 1,
    Query = 2,
    EConsoleMacroCommandMode_MAX = 3,
};
#pragma pack(pop)
