#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class UStreamlineReflexSupport : uint8_t {
    Supported = 0,
    NotSupported = 1,
    UStreamlineReflexSupport_MAX = 2,
};
#pragma pack(pop)
