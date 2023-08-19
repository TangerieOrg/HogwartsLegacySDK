#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureMoveToSpeedSetting : uint8_t {
    SetSpeed = 0,
    KeepPreviousSpeed = 1,
    DistanceAdaptiveSpeed = 2,
    ECreatureMoveToSpeedSetting_MAX = 3,
};
#pragma pack(pop)
