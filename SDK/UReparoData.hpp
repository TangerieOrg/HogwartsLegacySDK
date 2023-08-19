#pragma once
#include <cstdint>
#include "FMultiVfx.hpp"
#include "FVector.hpp"
#include "UDataAsset.hpp"
class UParticleSystem;
class UNiagaraSystem;
class UAkAudioEvent;
class UCurveVector;
class UCurveFloat;
#pragma pack(push, 1)
class UReparoData : public UDataAsset {
public:
    float RepairTime; // 0x30
    float DelayBetweenChunks; // 0x34
    bool ScaleDelayBasedOnChunkZ; // 0x38
    bool ScaleDelayBasedOnDistanceFromPoint; // 0x39
    char pad_3a[0x2];
    FVector ReferencePoint; // 0x3c
    bool DiminishDelay; // 0x48
    char pad_49[0x3];
    float MaxDelayBetweenSpells; // 0x4c
    UParticleSystem* RepairChunkParticleSystem; // 0x50
    UNiagaraSystem* RepairChunkNiagaraVfx; // 0x58
    UParticleSystem* SmallRepairChunkParticleSystem; // 0x60
    UNiagaraSystem* SmallRepairChunkNiagaraVfx; // 0x68
    float SmallChunkSize; // 0x70
    float ChunkParticleProbability; // 0x74
    UAkAudioEvent* RepairSfx; // 0x78
    float RepairAlmostCompleteTime; // 0x80
    char pad_84[0x4];
    UAkAudioEvent* RepairAlmostCompleteSfx; // 0x88
    UParticleSystem* RepairSwapParticleSystem; // 0x90
    UNiagaraSystem* RepairSwapNiagaraVfx; // 0x98
    UAkAudioEvent* RepairCompleteSfx; // 0xa0
    FMultiVfx RepairCompleteChunkVfx; // 0xa8
    float EaseForRepairParticles; // 0xc0
    FVector OffsetForRepairParticles; // 0xc4
    UCurveVector* SpellTranslate; // 0xd0
    UCurveVector* SpellScale; // 0xd8
    UCurveVector* SpellRotate; // 0xe0
    UCurveFloat* ChunkEase; // 0xe8
    UCurveVector* EaseResultsScale; // 0xf0
    bool RepeatCurveOverDistance; // 0xf8
    char pad_f9[0x3];
    float RepeatDistance; // 0xfc
    bool ScaleDistanceBasedOnChunkSize; // 0x100
    char pad_101[0x3];
    float ReferenceChunkSize; // 0x104
    UCurveVector* ChunkTranslate; // 0x108
    UCurveVector* ChunkScale; // 0x110
    UCurveVector* ChunkRotate; // 0x118
    FVector RandomMinFactor; // 0x120
    FVector RandomMaxFactor; // 0x12c
    static UReparoData* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
