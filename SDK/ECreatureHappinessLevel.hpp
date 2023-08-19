#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureHappinessLevel : uint8_t {
    CreatureHappinessLevel_Low = 0,
    CreatureHappinessLevel_Medium = 1,
    CreatureHappinessLevel_High = 2,
    CreatureHappinessLevel_MAX = 3,
};
#pragma pack(pop)
