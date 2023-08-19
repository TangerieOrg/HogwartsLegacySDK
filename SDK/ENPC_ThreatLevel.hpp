#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_ThreatLevel {
    None = 0,
    ThreatLow = 1,
    ThreatMedium = 2,
    ThreatHigh = 3,
    ThreatMax = 4,
    ENPC_MAX = 5,
};
#pragma pack(pop)
