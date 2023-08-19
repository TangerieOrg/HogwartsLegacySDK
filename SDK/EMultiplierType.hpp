#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMultiplierType : uint8_t {
    MultiplyByAxis = 0,
    MultiplyByValue = 1,
    MultiplyByCustomValue = 2,
    EMultiplierType_MAX = 3,
};
#pragma pack(pop)
