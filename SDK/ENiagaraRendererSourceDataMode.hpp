#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraRendererSourceDataMode : uint8_t {
    Particles = 0,
    Emitter = 1,
    ENiagaraRendererSourceDataMode_MAX = 2,
};
#pragma pack(pop)
