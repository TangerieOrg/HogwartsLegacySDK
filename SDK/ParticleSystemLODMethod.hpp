#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ParticleSystemLODMethod : uint8_t {
    PARTICLESYSTEMLODMETHOD_Automatic = 0,
    PARTICLESYSTEMLODMETHOD_DirectSet = 1,
    PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
    PARTICLESYSTEMLODMETHOD_MAX = 3,
};
#pragma pack(pop)
