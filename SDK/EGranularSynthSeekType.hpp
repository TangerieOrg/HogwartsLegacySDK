#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGranularSynthSeekType : uint8_t {
    FromBeginning = 0,
    FromCurrentPosition = 1,
    Count = 2,
    EGranularSynthSeekType_MAX = 3,
};
#pragma pack(pop)
