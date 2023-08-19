#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHighContrastGameplayBucket : uint8_t {
    Player = 0,
    Companion = 1,
    FriendlyNPC = 2,
    EnemyNPC = 3,
    Item = 4,
    Creature = 5,
    Mount = 6,
    EHighContrastGameplayBucket_MAX = 7,
};
#pragma pack(pop)
