#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESphericalLimitType : uint8_t {
    Inner = 0,
    Outer = 1,
    ESphericalLimitType_MAX = 2,
};
#pragma pack(pop)
