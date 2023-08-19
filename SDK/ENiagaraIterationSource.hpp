#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraIterationSource : uint8_t {
    Particles = 0,
    DataInterface = 1,
    ENiagaraIterationSource_MAX = 2,
};
#pragma pack(pop)
