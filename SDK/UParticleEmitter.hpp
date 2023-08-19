#pragma once
#include <cstdint>
#include "EEmitterRenderMode.hpp"
#include "EParticleSignificanceLevel.hpp"
#include "UObject.hpp"
class UParticleLODLevel;
#pragma pack(push, 1)
class UParticleEmitter : public UObject {
public:
    FName EmitterName; // 0x28
    int32_t SubUVDataOffset; // 0x30
    EEmitterRenderMode EmitterRenderMode; // 0x34
    EParticleSignificanceLevel SignificanceLevel; // 0x35
    char pad_36[0x1];
    uint8_t bUseLegacySpawningBehavior : 1; // 0x37
    uint8_t pad_bitfield_37_1 : 3;
    uint8_t ConvertedModules : 1; // 0x37
    uint8_t bIsSoloing : 1; // 0x37
    uint8_t bCookedOut : 1; // 0x37
    uint8_t bDisabledLODsKeepEmitterAlive : 1; // 0x37
    uint8_t bDisableWhenInsignficant : 1; // 0x38
    uint8_t pad_bitfield_38_1 : 7;
    char pad_39[0x7];
    TArray<UParticleLODLevel*> LODLevels; // 0x40
    int32_t PeakActiveParticles; // 0x50
    int32_t InitialAllocationCount; // 0x54
    float QualityLevelSpawnRateScale; // 0x58
    uint32_t DetailModeBitmask; // 0x5c
    char pad_60[0x158];
    static UParticleEmitter* StaticClass();
}; // Size: 0x1b8
#pragma pack(pop)
