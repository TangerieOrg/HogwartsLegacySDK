#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGloveTypeEnum : uint8_t {
    GLOVE_TYPE_NORMAL = 0,
    GLOVE_TYPE_FINGERLESS = 1,
    GLOVE_TYPE_MAX = 2,
};
#pragma pack(pop)
