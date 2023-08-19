#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureFleeFlyingOption : uint8_t {
    DontFly = 0,
    TakeoffImmediately = 1,
    TakeoffFromSprint = 2,
    ECreatureFleeFlyingOption_MAX = 3,
};
#pragma pack(pop)
