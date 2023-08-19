#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EAblAbilityTargetType : uint8_t {
    Self = 0,
    Owner = 1,
    Instigator = 2,
    TargetActor = 3,
    Camera = 4,
    EnemyWeapon = 5,
    EAblAbilityTargetType_MAX = 6,
};
#pragma pack(pop)
