#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimeDateChangeValueType : uint8_t {
    None = 0,
    Relative = 1,
    Absolute = 2,
    ETimeDateChangeValueType_MAX = 3,
};
#pragma pack(pop)
