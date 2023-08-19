#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVolumeType : uint8_t {
    None = 0,
    Box = 1,
    EVolumeType_MAX = 2,
};
#pragma pack(pop)
