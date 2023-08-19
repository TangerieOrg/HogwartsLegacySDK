#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConstraintOffsetOption : uint8_t {
    None = 0,
    Offset_RefPose = 1,
    EConstraintOffsetOption_MAX = 2,
};
#pragma pack(pop)
