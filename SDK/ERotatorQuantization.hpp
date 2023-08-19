#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERotatorQuantization : uint8_t {
    ByteComponents = 0,
    ShortComponents = 1,
    ERotatorQuantization_MAX = 2,
};
#pragma pack(pop)
