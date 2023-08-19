#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWidgetBlendMode : uint8_t {
    Opaque = 0,
    Masked = 1,
    Transparent = 2,
    EWidgetBlendMode_MAX = 3,
};
#pragma pack(pop)
