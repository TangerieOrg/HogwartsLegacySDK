#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETurnInType : uint8_t {
    None = 0,
    Item = 1,
    Knowledge = 2,
    Lock = 3,
    ETurnInType_MAX = 4,
};
#pragma pack(pop)
