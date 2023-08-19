#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_AttackSelectionConditions : uint8_t {
    LongDistBump = 0,
    ShortDistBump = 1,
    ShieldBreaker = 2,
    CrowdControlEffect = 3,
    DamagePotential = 4,
    CurseApplier = 5,
    JuggleStarter = 6,
    JuggleContinuer = 7,
    JuggleEnder = 8,
    LargeCharacterInterrupter = 9,
    AOE = 10,
    Fire = 11,
    StupefyAdvancer = 12,
    StupefyEnder = 13,
    PlantPriorityBump = 14,
    Count = 15,
    ENPC_MAX = 16,
};
#pragma pack(pop)
