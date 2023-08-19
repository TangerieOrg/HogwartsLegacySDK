#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMultiFXPropertyOwner : uint8_t {
    FX = 0,
    Target = 1,
    Instigator = 2,
    EMultiFXPropertyOwner_MAX = 3,
};
#pragma pack(pop)
