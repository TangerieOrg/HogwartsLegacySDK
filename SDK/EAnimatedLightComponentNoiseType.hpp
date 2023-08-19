#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAnimatedLightComponentNoiseType : uint8_t {
    AddAndSubtract = 0,
    AddOnly = 1,
    SubtractOnly = 2,
    EAnimatedLightComponentNoiseType_MAX = 3,
};
#pragma pack(pop)
