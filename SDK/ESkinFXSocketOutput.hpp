#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinFXSocketOutput : uint8_t {
    SFXS_POSITION = 0,
    SFXS_VELOCITY = 1,
    SFXS_VELOCITYDIR = 2,
    SFXS_DIR = 3,
    SFXS_UP = 4,
    SFXS_RIGHT = 5,
    SFXS_SCALE3D = 6,
    SFXS_SCALARSPEED = 7,
    SFXS_SCALARSCALEU = 8,
    SFXS_MAX = 9,
};
#pragma pack(pop)
