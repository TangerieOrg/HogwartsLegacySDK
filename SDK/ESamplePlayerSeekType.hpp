#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESamplePlayerSeekType : uint8_t {
    FromBeginning = 0,
    FromCurrentPosition = 1,
    FromEnd = 2,
    Count = 3,
    ESamplePlayerSeekType_MAX = 4,
};
#pragma pack(pop)
