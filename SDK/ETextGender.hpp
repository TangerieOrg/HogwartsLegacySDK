#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETextGender : uint8_t {
    Masculine = 0,
    Feminine = 1,
    Neuter = 2,
    ETextGender_MAX = 3,
};
#pragma pack(pop)
