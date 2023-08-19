#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAntiAliasingMode : uint8_t {
    TAA_Low = 0,
    TAA_High = 1,
    Nvidia_DLAA = 2,
    EAntiAliasingMode_MAX = 3,
};
#pragma pack(pop)
