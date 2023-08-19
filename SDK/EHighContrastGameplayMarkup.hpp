#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHighContrastGameplayMarkup : uint8_t {
    None = 0,
    Player = 1,
    Companion = 2,
    FriendlyNPC = 3,
    EnemyNPC = 4,
    Item = 5,
    Creature = 6,
    Mount = 7,
    RevelioItem = 8,
    RevelioImportant = 9,
    RevelioEnemy = 10,
    ShieldPurple = 11,
    ShieldOrange = 12,
    ShieldRed = 13,
    ShieldWhite = 14,
    ShieldBlue = 15,
    EHighContrastGameplayMarkup_MAX = 16,
};
#pragma pack(pop)
