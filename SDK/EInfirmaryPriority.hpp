#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInfirmaryPriority : uint8_t {
    Systemic = 0,
    WorldEvent = 1,
    Mission = 2,
    Count = 3,
    EInfirmaryPriority_MAX = 4,
};
#pragma pack(pop)
