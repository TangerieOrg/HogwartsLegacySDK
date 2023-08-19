#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELocalizedTextSourceCategory : uint8_t {
    Game = 0,
    Engine = 1,
    Editor = 2,
    ELocalizedTextSourceCategory_MAX = 3,
};
#pragma pack(pop)
