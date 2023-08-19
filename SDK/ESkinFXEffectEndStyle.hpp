#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinFXEffectEndStyle : uint8_t {
    Immediately = 0,
    JumpToRelease = 1,
    EndSustainHold = 2,
    ESkinFXEffectEndStyle_MAX = 3,
};
#pragma pack(pop)
