#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_HitDirection : uint8_t {
    None = 0,
    Front = 1,
    Left = 2,
    Right = 3,
    Back = 4,
    ENPC_MAX = 5,
};
#pragma pack(pop)
