#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpellState {
    Cast = 0,
    Success = 1,
    Charged = 2,
    Channeling = 3,
    Other = 4,
    ESpellState_MAX = 5,
};
#pragma pack(pop)
