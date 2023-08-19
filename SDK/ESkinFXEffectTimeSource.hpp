#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinFXEffectTimeSource : uint8_t {
    Actor = 0,
    World = 1,
    ESkinFXEffectTimeSource_MAX = 2,
};
#pragma pack(pop)
