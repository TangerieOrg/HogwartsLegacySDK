#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERemeshSmoothingType : uint8_t {
    Uniform = 0,
    Cotangent = 1,
    MeanValue = 2,
    ERemeshSmoothingType_MAX = 3,
};
#pragma pack(pop)
