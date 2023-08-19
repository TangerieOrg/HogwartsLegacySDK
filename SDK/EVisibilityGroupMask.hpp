#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVisibilityGroupMask : uint8_t {
    Unset = 1,
    Inside = 2,
    Outside = 4,
    InsideOutside = 8,
    EVisibilityGroupMask_MAX = 9,
};
#pragma pack(pop)
