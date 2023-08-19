#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGameLogicElementSize : uint8_t {
    Smallest = 0,
    Small = 1,
    Normal = 2,
    Large = 3,
    Largest = 4,
    MAX_SIZE = 5,
    EGameLogicElementSize_MAX = 6,
};
#pragma pack(pop)
