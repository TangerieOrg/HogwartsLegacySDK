#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_Split : uint8_t {
    None = 0,
    Attack = 1,
    PostAttack = 2,
    CounterAttack = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
