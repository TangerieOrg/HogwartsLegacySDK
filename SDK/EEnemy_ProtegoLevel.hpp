#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_ProtegoLevel : uint8_t {
    None = 0,
    TypeA = 1,
    TypeB = 2,
    TypeC = 3,
    TypeD = 4,
    TypePhysical_Deprecated = 5,
    TypeProfessor_Deprecated = 6,
    TypeDuelOpponent = 7,
    TypeStudent_Deprecated = 8,
    TypeTownie_Deprecated = 9,
    TypeBoss_Deprecated = 10,
    TypeBoss_Harlow = 11,
    TypeBoss_Oppugno = 12,
    TypeBoss_AncientMagic = 13,
    TypeBoss_Solomon = 14,
    EEnemy_MAX = 15,
};
#pragma pack(pop)
