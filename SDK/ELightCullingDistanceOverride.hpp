#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightCullingDistanceOverride : uint8_t {
    DoNotTouch = 0,
    AlwaysOverride = 1,
    UseMinimum = 2,
    OnlyIfNotSet = 3,
    ELightCullingDistanceOverride_MAX = 4,
};
#pragma pack(pop)
