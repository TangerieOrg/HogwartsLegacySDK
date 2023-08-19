#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_WeaponSource : uint8_t {
    None = 0,
    Active = 1,
    Stored = 2,
    Pickup = 3,
    Transient = 4,
    Required = 5,
    EEnemy_MAX = 6,
};
#pragma pack(pop)
