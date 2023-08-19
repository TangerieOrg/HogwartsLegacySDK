#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWaterType : uint8_t {
    NoWater = 0,
    Shallow = 1,
    Deep = 2,
    EWaterType_MAX = 3,
};
#pragma pack(pop)
