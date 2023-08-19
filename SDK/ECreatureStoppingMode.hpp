#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureStoppingMode : uint8_t {
    Standard = 0,
    Rapid = 1,
    Num = 2,
    ECreatureStoppingMode_MAX = 3,
};
#pragma pack(pop)
