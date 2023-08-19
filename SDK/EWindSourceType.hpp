#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWindSourceType : uint8_t {
    Directional = 0,
    Point = 1,
    EWindSourceType_MAX = 2,
};
#pragma pack(pop)
