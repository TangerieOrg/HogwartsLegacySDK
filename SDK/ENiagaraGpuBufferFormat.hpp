#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraGpuBufferFormat : uint8_t {
    Float = 0,
    HalfFloat = 1,
    UnsignedNormalizedByte = 2,
    Max = 3,
};
#pragma pack(pop)
