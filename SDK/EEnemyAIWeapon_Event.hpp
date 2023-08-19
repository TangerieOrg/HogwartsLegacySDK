#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemyAIWeapon_Event : uint8_t {
    None = 0,
    TombProtectorMeteor_Choose = 1,
    TombProtectorMeteor_Break = 2,
    TombProtectorMeteor_Throw = 3,
    EEnemyAIWeapon_MAX = 4,
};
#pragma pack(pop)
