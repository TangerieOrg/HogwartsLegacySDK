#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EListItemAlignment : uint8_t {
    EvenlyDistributed = 0,
    EvenlySize = 1,
    EvenlyWide = 2,
    LeftAligned = 3,
    RightAligned = 4,
    CenterAligned = 5,
    Fill = 6,
    EListItemAlignment_MAX = 7,
};
#pragma pack(pop)
