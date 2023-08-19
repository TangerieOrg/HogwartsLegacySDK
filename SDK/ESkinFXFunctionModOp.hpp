#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinFXFunctionModOp : uint8_t {
    Add = 0,
    Subtract = 1,
    Multiply = 2,
    Divide = 3,
    Mod = 4,
    Power = 5,
    Min = 6,
    Max = 7,
};
#pragma pack(pop)
