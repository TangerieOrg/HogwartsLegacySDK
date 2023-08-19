#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum AnimationCompressionFormat : uint8_t {
    ACF_None = 0,
    ACF_Float96NoW = 1,
    ACF_Fixed48NoW = 2,
    ACF_IntervalFixed32NoW = 3,
    ACF_Fixed32NoW = 4,
    ACF_Float32NoW = 5,
    ACF_Identity = 6,
    ACF_MAX = 7,
};
#pragma pack(pop)
