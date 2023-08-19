#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EScriptExecutionMode : uint8_t {
    EveryParticle = 0,
    SpawnedParticles = 1,
    SingleParticle = 2,
    EScriptExecutionMode_MAX = 3,
};
#pragma pack(pop)
