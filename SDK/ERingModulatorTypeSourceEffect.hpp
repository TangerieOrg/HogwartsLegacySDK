#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERingModulatorTypeSourceEffect : uint8_t {
    Sine = 0,
    Saw = 1,
    Triangle = 2,
    Square = 3,
    Count = 4,
    ERingModulatorTypeSourceEffect_MAX = 5,
};
#pragma pack(pop)
