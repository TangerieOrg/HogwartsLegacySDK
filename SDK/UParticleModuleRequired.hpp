#pragma once
#include <cstdint>
#include "EEmitterNormalsMode.hpp"
#include "EOpacitySourceMode.hpp"
#include "EParticleBurstMethod.hpp"
#include "EParticleScreenAlignment.hpp"
#include "EParticleSortMode.hpp"
#include "EParticleSubUVInterpMethod.hpp"
#include "EParticleUVFlipMode.hpp"
#include "ESubUVBoundingVertexCount.hpp"
#include "FParticleBurst.hpp"
#include "FRawDistributionFloat.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UParticleModule.hpp"
class UMaterialInterface;
class UTexture2D;
#pragma pack(push, 1)
class UParticleModuleRequired : public UParticleModule {
public:
    UMaterialInterface* Material; // 0x30
    float MinFacingCameraBlendDistance; // 0x38
    float MaxFacingCameraBlendDistance; // 0x3c
    FVector EmitterOrigin; // 0x40
    FRotator EmitterRotation; // 0x4c
    EParticleScreenAlignment ScreenAlignment; // 0x58
    uint8_t bUseLocalSpace : 1; // 0x59
    uint8_t bKillOnDeactivate : 1; // 0x59
    uint8_t bKillOnCompleted : 1; // 0x59
    uint8_t pad_bitfield_59_3 : 5;
    EParticleSortMode SortMode; // 0x5a
    uint8_t bUseLegacyEmitterTime : 1; // 0x5b
    uint8_t bRemoveHMDRoll : 1; // 0x5b
    uint8_t bEmitterDurationUseRange : 1; // 0x5b
    uint8_t pad_bitfield_5b_3 : 5;
    float EmitterDuration; // 0x5c
    FRawDistributionFloat Spawnrate; // 0x60
    TArray<FParticleBurst> BurstList; // 0x90
    float EmitterDelay; // 0xa0
    float EmitterDelayLow; // 0xa4
    uint8_t bDelayFirstLoopOnly : 1; // 0xa8
    uint8_t pad_bitfield_a8_1 : 7;
    EParticleSubUVInterpMethod InterpolationMethod; // 0xa9
    uint8_t bScaleUV : 1; // 0xaa
    uint8_t bEmitterDelayUseRange : 1; // 0xaa
    uint8_t pad_bitfield_aa_2 : 6;
    EParticleBurstMethod ParticleBurstMethod; // 0xab
    uint8_t bOverrideSystemMacroUV : 1; // 0xac
    uint8_t bUseMaxDrawCount : 1; // 0xac
    uint8_t pad_bitfield_ac_2 : 6;
    EOpacitySourceMode OpacitySourceMode; // 0xad
    EEmitterNormalsMode EmitterNormalsMode; // 0xae
    uint8_t bOrbitModuleAffectsVelocityAlignment : 1; // 0xaf
    uint8_t pad_bitfield_af_1 : 7;
    int32_t SubImages_Horizontal; // 0xb0
    int32_t SubImages_Vertical; // 0xb4
    float RandomImageTime; // 0xb8
    int32_t RandomImageChanges; // 0xbc
    FVector MacroUVPosition; // 0xc0
    float MacroUVRadius; // 0xcc
    EParticleUVFlipMode UVFlippingMode; // 0xd0
    ESubUVBoundingVertexCount BoundingMode; // 0xd1
    uint8_t bDurationRecalcEachLoop : 1; // 0xd2
    uint8_t pad_bitfield_d2_1 : 7;
    char pad_d3[0x1];
    FVector NormalsSphereCenter; // 0xd4
    float AlphaThreshold; // 0xe0
    int32_t EmitterLoops; // 0xe4
    UTexture2D* CutoutTexture; // 0xe8
    int32_t MaxDrawCount; // 0xf0
    float EmitterDurationLow; // 0xf4
    FVector NormalsCylinderDirection; // 0xf8
    char pad_104[0x4];
    TArray<FName> NamedMaterialOverrides; // 0x108
    char pad_118[0x28];
    static UParticleModuleRequired* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
