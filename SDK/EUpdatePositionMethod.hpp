#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUpdatePositionMethod : uint8_t {
    Play = 0,
    Jump = 1,
    Scrub = 2,
    EUpdatePositionMethod_MAX = 3,
};
#pragma pack(pop)
