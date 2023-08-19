#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EInventoryQuality : uint8_t {
    DUMMY = 0,
    NoQuality = 3,
    CountQuality = 1,
    EInventoryQuality_MAX = 4,
};
#pragma pack(pop)
