#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMultiFXBeamSource : uint8_t {
    Target = 0,
    Instigator = 1,
    BeamSourceProperty = 2,
    EMultiFXBeamSource_MAX = 3,
};
#pragma pack(pop)
