#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFlowDirectionPreference : uint8_t {
    Inherit = 0,
    Culture = 1,
    LeftToRight = 2,
    RightToLeft = 3,
    EFlowDirectionPreference_MAX = 4,
};
#pragma pack(pop)
