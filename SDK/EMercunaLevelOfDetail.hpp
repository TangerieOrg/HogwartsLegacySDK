#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMercunaLevelOfDetail : uint8_t {
    Full = 0,
    Half = 1,
    Quarter = 2,
    Eighth = 3,
    Sixteenth = 4,
    EMercunaLevelOfDetail_MAX = 5,
};
#pragma pack(pop)
