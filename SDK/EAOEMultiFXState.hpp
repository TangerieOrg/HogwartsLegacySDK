#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAOEMultiFXState {
    Announce = 0,
    Warning = 1,
    Explode = 2,
    Expired = 3,
    AnnounceStart = 4,
    AnnounceLoop = 5,
    WarningStart = 6,
    WarningLoop = 7,
    Impact = 8,
    ImpactStart = 9,
    ImpactEnd = 10,
    EAOEMultiFXState_MAX = 11,
};
#pragma pack(pop)
