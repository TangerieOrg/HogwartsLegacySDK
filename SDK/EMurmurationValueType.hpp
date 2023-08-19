#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMurmurationValueType : uint8_t {
    Absolute = 0,
    Relative = 1,
    EMurmurationValueType_MAX = 2,
};
#pragma pack(pop)
