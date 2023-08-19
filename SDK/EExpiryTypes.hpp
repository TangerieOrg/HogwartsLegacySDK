#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EExpiryTypes : uint8_t {
    ALL = 0,
    LootDrop = 1,
    Infirmary = 2,
    Count = 3,
    EExpiryTypes_MAX = 4,
};
#pragma pack(pop)
