#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELerpEasingType : uint8_t {
    EaseIn = 0,
    EaseOut = 1,
    EaseInOut = 2,
    ELerpEasingType_MAX = 3,
};
#pragma pack(pop)
