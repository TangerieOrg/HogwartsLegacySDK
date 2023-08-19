#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMultiFXActor : uint8_t {
    Target = 0,
    Instigator = 1,
    Player = 2,
    EMultiFXActor_MAX = 3,
};
#pragma pack(pop)
