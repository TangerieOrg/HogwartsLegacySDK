#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ENiagaraBindingSource : uint8_t {
    ImplicitFromSource = 0,
    ExplicitParticles = 1,
    ExplicitEmitter = 2,
    ExplicitSystem = 3,
    ExplicitUser = 4,
    MaxBindingSource = 5,
    ENiagaraBindingSource_MAX = 6,
};
#pragma pack(pop)
