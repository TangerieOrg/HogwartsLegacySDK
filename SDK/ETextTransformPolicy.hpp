#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETextTransformPolicy : uint8_t {
    None = 0,
    ToLower = 1,
    ToUpper = 2,
    ETextTransformPolicy_MAX = 3,
};
#pragma pack(pop)
