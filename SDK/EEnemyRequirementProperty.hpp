#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemyRequirementProperty {
    None = 0,
    Juggleable = 1,
    Freezable = 2,
    Burnable = 3,
    Transformable = 4,
    Blockable = 5,
    Unshielded = 6,
    EEnemyRequirementProperty_MAX = 7,
};
#pragma pack(pop)
