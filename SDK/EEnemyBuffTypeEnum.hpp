#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemyBuffTypeEnum : uint8_t {
    EBC_Health = 0,
    EBC_WeaponRespawn = 1,
    EBC_Random = 2,
    EBC_MAX = 3,
};
#pragma pack(pop)
