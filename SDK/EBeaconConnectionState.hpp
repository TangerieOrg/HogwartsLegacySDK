#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBeaconConnectionState : uint8_t {
    Invalid = 0,
    Closed = 1,
    Pending = 2,
    Open = 3,
    EBeaconConnectionState_MAX = 4,
};
#pragma pack(pop)
