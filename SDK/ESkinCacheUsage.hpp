#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinCacheUsage : uint8_t {
    Auto = 0,
    Disabled = 255,
    Enabled = 1,
};
#pragma pack(pop)
