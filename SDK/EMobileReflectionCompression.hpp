#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMobileReflectionCompression : uint8_t {
    Default = 0,
    On = 1,
    Off = 2,
    EMobileReflectionCompression_MAX = 3,
};
#pragma pack(pop)
