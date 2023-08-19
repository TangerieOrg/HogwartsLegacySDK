#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_PerceptionUpdate : uint8_t {
    Target = 0,
    Weapon_DEPRECATED = 1,
    CrimeScene_DEPRECATED = 2,
    GameEvent = 3,
    Default = 4,
    ENPC_MAX = 5,
};
#pragma pack(pop)
