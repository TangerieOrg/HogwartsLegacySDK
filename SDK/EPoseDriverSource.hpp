#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPoseDriverSource : uint8_t {
    Rotation = 0,
    Translation = 1,
    EPoseDriverSource_MAX = 2,
};
#pragma pack(pop)
