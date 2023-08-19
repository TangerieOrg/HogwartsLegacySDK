#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWingardiumState {
    Inactive = 0,
    Rise = 1,
    MoveObject = 2,
    End = 3,
    EWingardiumState_MAX = 4,
};
#pragma pack(pop)
