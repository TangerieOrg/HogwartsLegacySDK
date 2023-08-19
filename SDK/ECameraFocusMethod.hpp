#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraFocusMethod : uint8_t {
    DoNotOverride = 0,
    Manual = 1,
    Tracking = 2,
    Disable = 3,
    MAX = 4,
};
#pragma pack(pop)
