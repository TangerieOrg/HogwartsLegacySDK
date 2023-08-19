#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_GameAttackState : uint8_t {
    None = 0,
    RunThrough = 1,
    ENPC_MAX = 2,
};
#pragma pack(pop)
