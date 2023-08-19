#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECruiseSpeed : uint8_t {
    FastestMotion = 0,
    SlowestMotion = 1,
    AverageSpeed = 2,
    SpecifiedCruisingSpeed = 3,
    ECruiseSpeed_MAX = 4,
};
#pragma pack(pop)
