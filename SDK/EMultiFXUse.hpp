#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMultiFXUse : uint8_t {
    Target = 0,
    Instigator = 1,
    TargetCharacter = 2,
    InstigatorCharacter = 3,
    EMultiFXUse_MAX = 4,
};
#pragma pack(pop)
