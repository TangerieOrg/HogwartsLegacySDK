#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESlateAccessibleBehavior : uint8_t {
    NotAccessible = 0,
    Auto = 1,
    Summary = 2,
    Custom = 3,
    ToolTip = 4,
    ESlateAccessibleBehavior_MAX = 5,
};
#pragma pack(pop)
