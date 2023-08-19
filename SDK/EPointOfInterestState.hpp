#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPointOfInterestState : uint8_t {
    Found = 0,
    Known = 1,
    Hidden = 2,
    EPointOfInterestState_MAX = 3,
};
#pragma pack(pop)
