#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinFXEnvelopeState : uint8_t {
    Done = 0,
    Attack = 1,
    Sustain = 2,
    Release = 3,
    InfiniteSustain = 4,
    ESkinFXEnvelopeState_MAX = 5,
};
#pragma pack(pop)
