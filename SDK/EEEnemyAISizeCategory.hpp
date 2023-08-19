#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEEnemyAISizeCategory : uint8_t {
    None = 0,
    Tiny = 1,
    Small = 2,
    Medium = 3,
    Large = 4,
    Huge = 5,
    Gigantic = 6,
    EEEnemyAISizeCategory_MAX = 7,
};
#pragma pack(pop)
