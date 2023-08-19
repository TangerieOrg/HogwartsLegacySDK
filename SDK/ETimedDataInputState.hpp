#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimedDataInputState {
    Connected = 0,
    Unresponsive = 1,
    Disconnected = 2,
    ETimedDataInputState_MAX = 3,
};
#pragma pack(pop)
