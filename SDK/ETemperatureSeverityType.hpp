#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETemperatureSeverityType {
    Unknown = 0,
    Good = 1,
    Bad = 2,
    Serious = 3,
    Critical = 4,
    NumSeverities = 5,
    ETemperatureSeverityType_MAX = 6,
};
#pragma pack(pop)
