#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERigUnitDebugPointMode : uint8_t {
    Point = 0,
    Vector = 1,
    Max = 2,
};
#pragma pack(pop)
