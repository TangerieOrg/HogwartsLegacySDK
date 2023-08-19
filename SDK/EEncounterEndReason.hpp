#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEncounterEndReason : int8_t {
    NoCombatVolume_NoAggro = 0,
    CombatVolume_Escaped = 1,
    CombatVolume_Completed = 2,
    EEncounterEndReason_MAX = 3,
};
#pragma pack(pop)
