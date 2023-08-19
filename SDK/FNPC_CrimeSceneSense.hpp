#pragma once
#include <cstdint>
#include "FNPC_CrimeSceneSense_FOV.hpp"
#include "FNPC_CrimeSceneSense_Hearing.hpp"
#include "FNPC_CrimeSceneSense_LOS.hpp"
#pragma pack(push, 1)
struct FNPC_CrimeSceneSense {
    float PerceiveRadius; // 0x0
    float LoseRadius; // 0x4
    float HeightDifference; // 0x8
    float EvaluateInterval; // 0xc
    FNPC_CrimeSceneSense_LOS LOS; // 0x10
    FNPC_CrimeSceneSense_FOV FOV; // 0x1c
    FNPC_CrimeSceneSense_Hearing Hearing; // 0x2c
}; // Size: 0x30
#pragma pack(pop)
