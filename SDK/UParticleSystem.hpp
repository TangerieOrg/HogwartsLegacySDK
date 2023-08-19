#pragma once
#include <cstdint>
#include "EParticleSignificanceLevel.hpp"
#include "EParticleSystemInsignificanceReaction.hpp"
#include "EParticleSystemOcclusionBoundsMethod.hpp"
#include "EParticleSystemUpdateMode.hpp"
#include "FBox.hpp"
#include "FLODSoloTrack.hpp"
#include "FNamedEmitterMaterial.hpp"
#include "FParticleSystemLOD.hpp"
#include "FVector.hpp"
#include "ParticleSystemLODMethod.hpp"
#include "UFXSystemAsset.hpp"
class UParticleEmitter;
class UParticleSystemComponent;
class UInterpCurveEdSetup;
class UClass;
#pragma pack(push, 1)
class UParticleSystem : public UFXSystemAsset {
public:
    float UpdateTime_FPS; // 0x30
    float UpdateTime_Delta; // 0x34
    float WarmupTime; // 0x38
    float WarmupTickRate; // 0x3c
    TArray<UParticleEmitter*> Emitters; // 0x40
    UParticleSystemComponent* PreviewComponent; // 0x50
    UInterpCurveEdSetup* CurveEdSetup; // 0x58
    float LODDistanceCheckTime; // 0x60
    float MacroUVRadius; // 0x64
    TArray<float> LODDistances; // 0x68
    TArray<FParticleSystemLOD> LODSettings; // 0x78
    FBox FixedRelativeBoundingBox; // 0x88
    float SecondsBeforeInactive; // 0xa4
    float Delay; // 0xa8
    float DelayLow; // 0xac
    uint8_t bOrientZAxisTowardCamera : 1; // 0xb0
    uint8_t bUseFixedRelativeBoundingBox : 1; // 0xb0
    uint8_t bShouldResetPeakCounts : 1; // 0xb0
    uint8_t bHasPhysics : 1; // 0xb0
    uint8_t bUseRealtimeThumbnail : 1; // 0xb0
    uint8_t ThumbnailImageOutOfDate : 1; // 0xb0
    uint8_t pad_bitfield_b0_6 : 2;
    uint8_t bUseDelayRange : 1; // 0xb1
    uint8_t bAllowManagedTicking : 1; // 0xb1
    uint8_t bAutoDeactivate : 1; // 0xb1
    uint8_t bRegenerateLODDuplicate : 1; // 0xb1
    uint8_t pad_bitfield_b1_4 : 4;
    EParticleSystemUpdateMode SystemUpdateMode; // 0xb2
    ParticleSystemLODMethod LODMethod; // 0xb3
    EParticleSystemInsignificanceReaction InsignificantReaction; // 0xb4
    EParticleSystemOcclusionBoundsMethod OcclusionBoundsMethod; // 0xb5
    char pad_b6[0x1];
    EParticleSignificanceLevel MaxSignificanceLevel; // 0xb7
    uint32_t MinTimeBetweenTicks; // 0xb8
    float InsignificanceDelay; // 0xbc
    FVector MacroUVPosition; // 0xc0
    FBox CustomOcclusionBounds; // 0xcc
    TArray<FLODSoloTrack> SoloTracking; // 0xe8
    TArray<FNamedEmitterMaterial> NamedMaterialSlots; // 0xf8
    char pad_108[0x8];
    static UParticleSystem* StaticClass();
    bool ContainsEmitterType(UClass* TypeData);
}; // Size: 0x110
#pragma pack(pop)
