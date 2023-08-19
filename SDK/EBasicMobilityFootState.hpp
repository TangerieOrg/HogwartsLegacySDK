#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBasicMobilityFootState : uint8_t {
    Undetermined = 0,
    Left = 1,
    Right = 2,
    EBasicMobilityFootState_MAX = 3,
};
#pragma pack(pop)
