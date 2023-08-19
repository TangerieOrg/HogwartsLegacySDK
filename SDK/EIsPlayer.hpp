#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EIsPlayer : uint8_t {
    IsPlayer = 0,
    IsNotPlayer = 1,
    EIsPlayer_MAX = 2,
};
#pragma pack(pop)
