#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EEnterExitAnimVariants : uint8_t {
    ENTEREXITANIM_HUMAN_A = 0,
    ENTEREXITANIM_HUMAN_F = 1,
    ENTEREXITANIM_HUMAN_M = 2,
    ENTEREXITANIM_CHILD_F = 3,
    ENTEREXITANIM_CHILD_M = 4,
    ENTEREXITANIM_DEATHMINION_A = 5,
    ENTEREXITANIM_ELF_A = 6,
    ENTEREXITANIM_GOBLIN_A = 7,
    ENTEREXITANIM_TROLL_A = 8,
    ENTEREXITANIM_MAX = 9,
};
#pragma pack(pop)
