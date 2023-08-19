#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_TurnAssistState : uint8_t {
    None = 0,
    Target = 1,
    PathLoc = 2,
    Loc = 3,
    Weapon = 4,
    ENPC_MAX = 5,
};
#pragma pack(pop)
