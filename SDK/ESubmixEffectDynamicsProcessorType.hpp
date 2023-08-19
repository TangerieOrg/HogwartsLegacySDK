#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESubmixEffectDynamicsProcessorType : uint8_t {
    Compressor = 0,
    Limiter = 1,
    Expander = 2,
    Gate = 3,
    Count = 4,
    ESubmixEffectDynamicsProcessorType_MAX = 5,
};
#pragma pack(pop)
