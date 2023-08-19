#pragma once
#include <cstdint>
namespace EEnemyAIWeaponState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Active = 1,
    Claimed = 2,
    Stored = 3,
    Munition = 4,
    EEnemyAIWeaponState_MAX = 5,
};
#pragma pack(pop)
}
