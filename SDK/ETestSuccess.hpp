#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETestSuccess : uint8_t {
    Default = 0,
    Success = 1,
    Failure = 2,
    ETestSuccess_MAX = 3,
};
#pragma pack(pop)
