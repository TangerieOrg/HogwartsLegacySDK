#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPerformTasksSpell : uint8_t {
    Reparo = 0,
    Confringo = 1,
    Custom = 2,
    EPerformTasksSpell_MAX = 3,
};
#pragma pack(pop)
