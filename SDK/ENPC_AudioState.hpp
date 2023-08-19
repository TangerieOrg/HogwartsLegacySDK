#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_AudioState : uint8_t {
    None = 0,
    Unaware = 1,
    Alerted = 2,
    Attacking = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
