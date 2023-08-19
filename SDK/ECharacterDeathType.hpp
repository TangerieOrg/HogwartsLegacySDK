#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECharacterDeathType : uint8_t {
    Default = 0,
    SplatteringHighFallDeath = 1,
    Spell = 2,
    Custom = 3,
    ECharacterDeathType_MAX = 4,
};
#pragma pack(pop)
