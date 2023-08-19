#pragma once
#include <cstdint>
#include "EAttachmentRule.hpp"
#include "ENiagaraAgeUpdateMode.hpp"
#include "ENiagaraTickBehavior.hpp"
#include "FNiagaraMaterialOverride.hpp"
#include "FNiagaraUserRedirectionParameterStore.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UFXSystemComponent.hpp"
class UNiagaraSystem;
struct FVector4;
struct FQuat;
class UTextureRenderTarget;
class UObject;
class UMaterialInterface;
struct FLinearColor;
class AActor;
class UNiagaraDataInterface;
#pragma pack(push, 1)
class UNiagaraComponent : public UFXSystemComponent {
public:
    UNiagaraSystem* Asset; // 0x480
    ENiagaraTickBehavior TickBehavior; // 0x488
    char pad_489[0x3];
    int32_t RandomSeedOffset; // 0x48c
    FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x490
    uint8_t bForceSolo : 1; // 0x558
    uint8_t bEnableGpuComputeDebug : 1; // 0x558
    uint8_t pad_bitfield_558_2 : 6;
    char pad_559[0x2f];
    uint8_t bAutoDestroy : 1; // 0x588
    uint8_t bRenderingEnabled : 1; // 0x588
    uint8_t bAutoManageAttachment : 1; // 0x588
    uint8_t bAutoAttachWeldSimulatedBodies : 1; // 0x588
    uint8_t pad_bitfield_588_4 : 4;
    char pad_589[0x3];
    float MaxTimeBeforeForceUpdateTransform; // 0x58c
    TArray<FNiagaraMaterialOverride> EmitterMaterials; // 0x590
    float StreamingDistanceMultiplier; // 0x5a0
    char pad_5a4[0x1c];
    FName AutoAttachSocketName; // 0x5c0
    EAttachmentRule AutoAttachLocationRule; // 0x5c8
    EAttachmentRule AutoAttachRotationRule; // 0x5c9
    EAttachmentRule AutoAttachScaleRule; // 0x5ca
    char pad_5cb[0x65];
    static UNiagaraComponent* StaticClass();
    void SetVariableVec4(FName InVariableName, FVector4& InValue);
    void SetVariableVec3(FName InVariableName, FVector InValue);
    void SetVariableVec2(FName InVariableName, FVector2D InValue);
    void SetVariableTextureRenderTarget(FName InVariableName, UTextureRenderTarget* TextureRenderTarget);
    void SetVariableQuat(FName InVariableName, FQuat& InValue);
    void SetVariableObject(FName InVariableName, UObject* Object);
    void SetVariableMaterial(FName InVariableName, UMaterialInterface* Object);
    void SetVariableLinearColor(FName InVariableName, FLinearColor& InValue);
    void SetVariableInt(FName InVariableName, int32_t InValue);
    void SetVariableFloat(FName InVariableName, float InValue);
    void SetVariableBool(FName InVariableName, bool InValue);
    void SetVariableActor(FName InVariableName, AActor* Actor);
    void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);
    void SetSeekDelta(float InSeekDelta);
    void SetRenderingEnabled(bool bInRenderingEnabled);
    void SetRandomSeedOffset(int32_t NewRandomSeedOffset);
    void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
    void SetPaused(bool bInPaused, bool bCalledFromVisibility);
    void SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue);
    void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);
    void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);
    void SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue);
    void SetNiagaraVariableObject(FString InVariableName, UObject* Object);
    void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue);
    void SetNiagaraVariableInt(FString InVariableName, int32_t InValue);
    void SetNiagaraVariableFloat(FString InVariableName, float InValue);
    void SetNiagaraVariableBool(FString InVariableName, bool InValue);
    void SetNiagaraVariableActor(FString InVariableName, AActor* Actor);
    void SetMaxSimTime(float InMaxTime);
    void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);
    void SetGpuComputeDebug(bool bEnableDebug);
    void SetForceSolo(bool bInForceSolo);
    void SetDesiredAge(float InDesiredAge);
    void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
    void SetAutoDestroy(bool bInAutoDestroy);
    void SetAsset(UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);
    void SetAllowScalability(bool bAllow);
    void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
    void SeekToDesiredAge(float InDesiredAge);
    void ResetSystem();
    void ReinitializeSystem();
    bool IsPaused();
    void InitForPerformanceBaseline();
    ENiagaraTickBehavior GetTickBehavior();
    float GetSeekDelta();
    int32_t GetRandomSeedOffset();
    bool GetPreviewLODDistanceEnabled();
    float GetPreviewLODDistance();
    TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);
    TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);
    TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);
    float GetMaxSimTime();
    bool GetLockDesiredAgeDeltaTimeToSeekDelta();
    bool GetForceSolo();
    float GetDesiredAge();
    UNiagaraDataInterface* GetDataInterface(FString Name);
    UNiagaraSystem* GetAsset();
    ENiagaraAgeUpdateMode GetAgeUpdateMode();
    void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
    void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);
}; // Size: 0x630
#pragma pack(pop)
