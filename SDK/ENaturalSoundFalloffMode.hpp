#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENaturalSoundFalloffMode : uint8_t {
    Continues = 0,
    Silent = 1,
    Hold = 2,
    ENaturalSoundFalloffMode_MAX = 3,
};
#pragma pack(pop)
