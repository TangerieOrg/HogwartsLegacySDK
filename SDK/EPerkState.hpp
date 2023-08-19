#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPerkState : uint8_t {
    PERK_UNAVAILABLE = 0,
    PERK_AVAILABLE = 1,
    PERK_PURCHASED = 2,
    PERK_UPGRADE_UNAVAILABLE = 3,
    PERK_MAX = 4,
};
#pragma pack(pop)
