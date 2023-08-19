#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELumosLightingScenario : uint8_t {
    Legacy = 0,
    CheapSpot = 1,
    SanderRework = 2,
    ELumosLightingScenario_MAX = 3,
};
#pragma pack(pop)
