#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPinContainerType : uint8_t {
    None = 0,
    Array = 1,
    Set = 2,
    Map = 3,
    EPinContainerType_MAX = 4,
};
#pragma pack(pop)
