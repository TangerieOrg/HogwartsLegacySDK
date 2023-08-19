#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class OdcObstacleBehavior : int32_t {
    Automatic = 0,
    NoEffectPenalty = 1,
    NoEffectImpassable = 2,
    PenaltyImpassable = 3,
    OdcObstacleBehavior_MAX = 4,
};
#pragma pack(pop)
