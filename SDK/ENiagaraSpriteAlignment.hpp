#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraSpriteAlignment : uint8_t {
    Unaligned = 0,
    VelocityAligned = 1,
    CustomAlignment = 2,
    ENiagaraSpriteAlignment_MAX = 3,
};
#pragma pack(pop)
