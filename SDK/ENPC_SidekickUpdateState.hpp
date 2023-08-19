#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_SidekickUpdateState : uint8_t {
    None = 0,
    Hover = 1,
    StopMove = 2,
    StoppingMove = 3,
    StartMove = 4,
    UpdateMove = 5,
    Moving = 6,
    ENPC_MAX = 7,
};
#pragma pack(pop)
