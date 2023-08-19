#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESynthSlateSizeType : uint8_t {
    Small = 0,
    Medium = 1,
    Large = 2,
    Count = 3,
    ESynthSlateSizeType_MAX = 4,
};
#pragma pack(pop)
