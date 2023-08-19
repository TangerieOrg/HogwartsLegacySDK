#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_TASTreeState {
    None = 0,
    AlertStart_W2Y = 1,
    AggroStart_Y2R = 2,
    EquipWeapon_Y2R = 3,
    StoreWeapon_R2Y = 4,
    AggroLost_R2Y = 5,
    AlertLost_Y2W = 6,
    EEnemy_MAX = 7,
};
#pragma pack(pop)
