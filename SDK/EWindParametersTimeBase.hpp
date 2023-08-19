#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWindParametersTimeBase : uint8_t {
    GameSeconds = 0,
    GameMinutes = 1,
    GameHours = 2,
    RealSeconds = 3,
    RealMinutes = 4,
    RealHours = 5,
    EWindParametersTimeBase_MAX = 6,
};
#pragma pack(pop)
