#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFootprintTypes : uint8_t {
    None = 0,
    Human = 1,
    Goblin = 2,
    Troll = 3,
    EFootprintTypes_MAX = 4,
};
#pragma pack(pop)
