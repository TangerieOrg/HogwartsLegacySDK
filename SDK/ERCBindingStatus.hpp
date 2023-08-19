#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERCBindingStatus : uint8_t {
    Unassigned = 0,
    Awaiting = 1,
    Bound = 2,
    ERCBindingStatus_MAX = 3,
};
#pragma pack(pop)
