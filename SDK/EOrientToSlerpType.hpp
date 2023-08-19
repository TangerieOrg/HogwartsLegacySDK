#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOrientToSlerpType : uint8_t {
    Snap = 0,
    Velocity = 1,
    Filter = 2,
    Freeze = 3,
    EOrientToSlerpType_MAX = 4,
};
#pragma pack(pop)
