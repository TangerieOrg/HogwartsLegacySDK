#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConsumeMouseWheel : uint8_t {
    WhenScrollingPossible = 0,
    Always = 1,
    Never = 2,
    EConsumeMouseWheel_MAX = 3,
};
#pragma pack(pop)
