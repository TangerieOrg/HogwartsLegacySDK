#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHighContrastMode : uint8_t {
    Text = 0,
    Gameplay = 1,
    EHighContrastMode_MAX = 2,
};
#pragma pack(pop)
