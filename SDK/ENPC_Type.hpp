#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_Type : uint8_t {
    None = 0,
    Enemy = 1,
    Student = 2,
    Creature = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
