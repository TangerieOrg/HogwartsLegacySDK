#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELocalStencilBoundsHintMode : uint8_t {
    Override = 0,
    Maximum = 1,
    Minimum = 2,
    ELocalStencilBoundsHintMode_MAX = 3,
};
#pragma pack(pop)
