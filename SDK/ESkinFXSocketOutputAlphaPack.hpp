#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinFXSocketOutputAlphaPack : uint8_t {
    SFXSAP_NONE = 0,
    SFXSAP_SPEED = 1,
    SFXSAP_SCALE = 2,
    SFXSAP_MAX = 3,
};
#pragma pack(pop)
