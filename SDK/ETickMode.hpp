#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETickMode : uint8_t {
    Disabled = 0,
    Enabled = 1,
    Automatic = 2,
    ETickMode_MAX = 3,
};
#pragma pack(pop)
