#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class FCPMovementType : int32_t {
    Ignore = 0,
    None = 1,
    Upward = 2,
    Downward = 3,
    FCPMovementType_MAX = 4,
};
#pragma pack(pop)
