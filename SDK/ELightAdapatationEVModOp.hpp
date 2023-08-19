#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightAdapatationEVModOp : uint8_t {
    Set = 0,
    Add = 1,
    Subtract = 2,
    Min = 3,
    Max = 4,
};
#pragma pack(pop)
