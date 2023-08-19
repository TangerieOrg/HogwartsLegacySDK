#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGenderEnum : uint8_t {
    GENDER_MALE = 0,
    GENDER_FEMALE = 1,
    GENDER_UNKNOWN = 2,
    GENDER_MAX = 3,
};
#pragma pack(pop)
