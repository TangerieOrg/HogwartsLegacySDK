#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EItemConversionState : uint8_t {
    Available = 0,
    Converting = 1,
    Converted = 2,
    Pending = 3,
    EItemConversionState_MAX = 4,
};
#pragma pack(pop)
