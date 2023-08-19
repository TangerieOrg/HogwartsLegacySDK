#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENavSystemOverridePolicy : uint8_t {
    Override = 0,
    Append = 1,
    Skip = 2,
    ENavSystemOverridePolicy_MAX = 3,
};
#pragma pack(pop)
