#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_CombatThreatLevel : uint8_t {
    Combat_ThreatLevel_None = 0,
    Combat_ThreatLevel_Low = 1,
    Combat_ThreatLevel_Medium = 2,
    Combat_ThreatLevel_High = 3,
    Combat_ThreatLevel_Extreme = 4,
    Combat_ThreatLevel_Boss = 5,
    Combat_ThreatLevel_Count = 6,
    Combat_ThreatLevel_MAX = 7,
};
#pragma pack(pop)
