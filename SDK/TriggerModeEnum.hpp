#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class TriggerModeEnum : uint8_t {
    Off = 0,
    Weapon = 1,
    Vibration = 2,
    Feedback = 3,
    TriggerModeEnum_MAX = 4,
};
#pragma pack(pop)
