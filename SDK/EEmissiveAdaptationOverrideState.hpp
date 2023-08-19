#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEmissiveAdaptationOverrideState : uint8_t {
    Begin = 0,
    BlendIn = 1,
    One = 2,
    BlendOut = 3,
    Complete = 4,
    EEmissiveAdaptationOverrideState_MAX = 5,
};
#pragma pack(pop)
