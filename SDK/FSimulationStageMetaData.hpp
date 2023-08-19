#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSimulationStageMetaData {
    FName SimulationStageName; // 0x0
    FName IterationSource; // 0x8
    uint8_t bSpawnOnly : 1; // 0x10
    uint8_t bWritesParticles : 1; // 0x10
    uint8_t bPartialParticleUpdate : 1; // 0x10
    uint8_t pad_bitfield_10_3 : 5;
    char pad_11[0x7];
    TArray<FName> OutputDestinations; // 0x18
    int32_t MinStage; // 0x28
    int32_t MaxStage; // 0x2c
}; // Size: 0x30
#pragma pack(pop)
