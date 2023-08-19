#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class UStreamlineReflexMode : uint8_t {
    Disabled = 0,
    Enabled = 1,
    EnabledPlusBoost = 3,
    UStreamlineReflexMode_MAX = 4,
};
#pragma pack(pop)
