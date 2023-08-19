#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EParticleSystemActivation : int8_t {
    Activate = 0,
    Deactivate = 1,
    ActivateAndDeactivate = 2,
    EParticleSystemActivation_MAX = 3,
};
#pragma pack(pop)
