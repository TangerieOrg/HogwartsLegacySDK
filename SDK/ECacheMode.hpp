#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECacheMode : uint8_t {
    None = 0,
    Play = 1,
    Record = 2,
    ECacheMode_MAX = 3,
};
#pragma pack(pop)
