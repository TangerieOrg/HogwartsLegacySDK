#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBreakableState : uint8_t {
    Inactive = 0,
    Unbroken = 1,
    Broken = 2,
    EBreakableState_MAX = 3,
};
#pragma pack(pop)
