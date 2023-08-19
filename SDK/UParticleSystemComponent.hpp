#pragma once
#include <cstdint>
#include "EAttachLocation\Type.hpp"
#include "EAttachmentRule.hpp"
#include "EParticleSignificanceLevel.hpp"
#include "ETrailWidthMode.hpp"
#include "FParticleSysParam.hpp"
#include "FVector.hpp"
#include "ParticleSystemLODMethod.hpp"
#include "UFXSystemComponent.hpp"
class UParticleSystem;
class USkeletalMeshComponent;
class USceneComponent;
class UMaterialInterface;
class UParticleSystemReplay;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UParticleSystemComponent : public UFXSystemComponent {
public:
    UParticleSystem* Template; // 0x480
    TArray<UMaterialInterface*> EmitterMaterials; // 0x488
    TArray<USkeletalMeshComponent*> SkelMeshComponents; // 0x498
    char pad_4a8[0x8];
    uint8_t pad_bitfield_4b0_0 : 6;
    uint8_t bResetOnDetach : 1; // 0x4b0
    uint8_t bUpdateOnDedicatedServer : 1; // 0x4b0
    uint8_t pad_bitfield_4b1_0 : 2;
    uint8_t bAllowRecycling : 1; // 0x4b1
    uint8_t bAutoManageAttachment : 1; // 0x4b1
    uint8_t bAutoAttachWeldSimulatedBodies : 1; // 0x4b1
    uint8_t pad_bitfield_4b1_5 : 2;
    uint8_t bWarmingUp : 1; // 0x4b1
    uint8_t bOverrideLODMethod : 1; // 0x4b2
    uint8_t bSkipUpdateDynamicDataDuringTick : 1; // 0x4b2
    uint8_t pad_bitfield_4b2_2 : 6;
    char pad_4b3[0xa];
    ParticleSystemLODMethod LODMethod; // 0x4bd
    EParticleSignificanceLevel RequiredSignificance; // 0x4be
    char pad_4bf[0x1];
    TArray<FParticleSysParam> InstanceParameters; // 0x4c0
    char pad_4d0[0x40];
    bool bOldPositionValid; // 0x510
    char pad_511[0x3];
    FVector OldPosition; // 0x514
    FVector PartSysVelocity; // 0x520
    float WarmupTime; // 0x52c
    float WarmupTickRate; // 0x530
    char pad_534[0x4];
    float SecondsBeforeInactive; // 0x538
    char pad_53c[0x4];
    float MaxTimeBeforeForceUpdateTransform; // 0x540
    char pad_544[0x1c];
    TArray<UParticleSystemReplay*> ReplayClips; // 0x560
    char pad_570[0x8];
    float CustomTimeDilation; // 0x578
    char pad_57c[0x5c];
    FName AutoAttachSocketName; // 0x5d8
    EAttachmentRule AutoAttachLocationRule; // 0x5e0
    EAttachmentRule AutoAttachRotationRule; // 0x5e1
    EAttachmentRule AutoAttachScaleRule; // 0x5e2
    char pad_5e3[0x10d];
    static UParticleSystemComponent* StaticClass();
    void SetTrailSourceData(FName InFirstSocketName, FName InSecondSocketName, ETrailWidthMode InWidthMode, float InWidth);
    void SetTemplate(UParticleSystem* NewTemplate);
    void SetMaterialParameter(FName ParameterName, UMaterialInterface* Param);
    void SetBeamTargetTangent(int32_t EmitterIndex, FVector NewTangentPoint, int32_t TargetIndex);
    void SetBeamTargetStrength(int32_t EmitterIndex, float NewTargetStrength, int32_t TargetIndex);
    void SetBeamTargetPoint(int32_t EmitterIndex, FVector NewTargetPoint, int32_t TargetIndex);
    void SetBeamSourceTangent(int32_t EmitterIndex, FVector NewTangentPoint, int32_t SourceIndex);
    void SetBeamSourceStrength(int32_t EmitterIndex, float NewSourceStrength, int32_t SourceIndex);
    void SetBeamSourcePoint(int32_t EmitterIndex, FVector NewSourcePoint, int32_t SourceIndex);
    void SetBeamEndPoint(int32_t EmitterIndex, FVector NewEndPoint);
    void SetAutoAttachParams(USceneComponent* Parent, FName SocketName, EAttachLocation::Type LocationType);
    int32_t GetNumActiveParticles();
    UMaterialInterface* GetNamedMaterial(FName InName);
    bool GetBeamTargetTangent(int32_t EmitterIndex, int32_t TargetIndex, FVector& OutTangentPoint);
    bool GetBeamTargetStrength(int32_t EmitterIndex, int32_t TargetIndex, float& OutTargetStrength);
    bool GetBeamTargetPoint(int32_t EmitterIndex, int32_t TargetIndex, FVector& OutTargetPoint);
    bool GetBeamSourceTangent(int32_t EmitterIndex, int32_t SourceIndex, FVector& OutTangentPoint);
    bool GetBeamSourceStrength(int32_t EmitterIndex, int32_t SourceIndex, float& OutSourceStrength);
    bool GetBeamSourcePoint(int32_t EmitterIndex, int32_t SourceIndex, FVector& OutSourcePoint);
    bool GetBeamEndPoint(int32_t EmitterIndex, FVector& OutEndPoint);
    void GenerateParticleEvent(FName InEventName, float InEmitterTime, FVector InLocation, FVector InDirection, FVector InVelocity);
    void EndTrails();
    UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(FName InName, UMaterialInterface* SourceMaterial);
    void BeginTrails(FName InFirstSocketName, FName InSecondSocketName, ETrailWidthMode InWidthMode, float InWidth);
}; // Size: 0x6f0
#pragma pack(pop)
