#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightAdapatationModOp : uint8_t {
    Set = 0,
    Multiply = 1,
    Divide = 2,
    Add = 3,
    Subtract = 4,
    Min = 5,
    Max = 6,
};
#pragma pack(pop)
