#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureFlightState : uint8_t {
    NotFlying = 0,
    Flying = 1,
    ECreatureFlightState_MAX = 2,
};
#pragma pack(pop)
