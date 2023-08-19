#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDifficultyScale_Type {
    None = 0,
    TicketCooldownAdjustment = 1,
    DamageAdjustment = 2,
    HealthAdjustment = 3,
    ParryDodgeAdjustment = 4,
    PerfectParryAdjustment = 5,
    ProtegoDeflectCount = 6,
    ProtegoDecayRate = 7,
    ProtegoDamageAdjustment = 8,
    ProtegoCooldownTime = 9,
    EDifficultyScale_MAX = 10,
};
#pragma pack(pop)
