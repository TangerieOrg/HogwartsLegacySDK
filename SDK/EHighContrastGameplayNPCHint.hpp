#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHighContrastGameplayNPCHint : uint8_t {
    Enemy = 0,
    Companion = 1,
    Friendly = 2,
    EHighContrastGameplayNPCHint_MAX = 3,
};
#pragma pack(pop)
