#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWindSourceCombine : uint8_t {
    Add = 0,
    Subtract = 1,
    Replace = 2,
    EWindSourceCombine_MAX = 3,
};
#pragma pack(pop)
