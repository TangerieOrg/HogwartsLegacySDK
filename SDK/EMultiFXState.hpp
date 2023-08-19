#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMultiFXState : uint8_t {
    Attacking = 0,
    Arresto = 1,
    BrokenOrDead = 2,
    CombatCursed = 3,
    Confundo = 4,
    Disillusioned = 5,
    Dodging = 6,
    Frozen = 7,
    InWater = 8,
    Imperius = 9,
    Invulnerable = 10,
    Levioso = 11,
    OnFire = 12,
    Petrificus = 13,
    Reacting = 14,
    Revealed = 15,
    RevealsThruWalls = 16,
    Transformed = 17,
    Vulnerable = 18,
    EMultiFXState_MAX = 19,
};
#pragma pack(pop)
