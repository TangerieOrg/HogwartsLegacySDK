#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraSimTarget : uint8_t {
    CPUSim = 0,
    GPUComputeSim = 1,
    ENiagaraSimTarget_MAX = 2,
};
#pragma pack(pop)
