#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_PerceptionEventType {
    None = 0,
    Damage = 1,
    Death = 2,
    Sound = 3,
    Engaged = 4,
    Dead = 5,
    StealthDeath = 6,
    Collided = 7,
    MunitionHit = 8,
    MunitionFire = 9,
    Footfall = 10,
    CombatPlant = 11,
    ENPC_MAX = 12,
};
#pragma pack(pop)
