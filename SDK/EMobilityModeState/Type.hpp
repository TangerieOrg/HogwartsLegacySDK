#pragma once
#include <cstdint>
namespace EMobilityModeState {
#pragma pack(push, 1)
enum Type : uint8_t {
    Invalid = 0,
    FreeRoam = 1,
    FreeRoamCombat = 2,
    Strafe = 3,
    StrafeCombat = 4,
    Crawling = 5,
    StrafeCombatAttack = 6,
    StrafeCombatAttack2 = 7,
    StrafeCombatAttack3 = 8,
    Combat = 9,
    Num_MobilityModes = 10,
    EMobilityModeState_MAX = 11,
};
#pragma pack(pop)
}
