#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERelativeToEnum : uint8_t {
    RELATIVETO_START = 0,
    RELATIVETO_END = 1,
    RELATIVETO_MAX = 2,
};
#pragma pack(pop)
