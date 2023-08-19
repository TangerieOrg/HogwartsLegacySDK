#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureLandingType : uint8_t {
    None = 0,
    Standing = 1,
    Gallop = 2,
    Trot = 3,
    FromHover = 4,
    Num = 5,
    ECreatureLandingType_MAX = 6,
};
#pragma pack(pop)
