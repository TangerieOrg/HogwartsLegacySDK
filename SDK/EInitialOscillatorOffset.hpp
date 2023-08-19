#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EInitialOscillatorOffset : uint8_t {
    EOO_OffsetRandom = 0,
    EOO_OffsetZero = 1,
    EOO_MAX = 2,
};
#pragma pack(pop)
