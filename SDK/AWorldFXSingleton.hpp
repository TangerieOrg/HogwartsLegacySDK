#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FCameraFXRoot.hpp"
#include "FVector.hpp"
#include "FWorldFXGenericManageSettings.hpp"
#include "FWorldFXOctreeStack.hpp"
#include "FWorldFXPerWorldSettings.hpp"
#include "FWorldFXPresetRuleName.hpp"
class UWorldFXOctreeFXDummy;
class UObject;
class UActorComponent;
class UParticleSystemComponent;
class UAkComponent;
struct FWorldFXSpawnOverrides;
class UWorldFXRule;
class UNiagaraComponent;
#pragma pack(push, 1)
class AWorldFXSingleton : public AActor {
public:
    FWorldFXPerWorldSettings Settings; // 0x248
    FCameraFXRoot CameraFXRoot; // 0x268
    FWorldFXOctreeStack Octree; // 0x278
    bool bCullingDisabled; // 0x2e8
    char pad_2e9[0x3];
    int32_t AutoCascadeCullingLevel; // 0x2ec
    int32_t AutoNiagaraCullingLevel; // 0x2f0
    int32_t AutoAkAmbientCullingLevel; // 0x2f4
    char pad_2f8[0x140];
    UWorldFXOctreeFXDummy* FXOctreeFXDummy; // 0x438
    FVector LastEye; // 0x440
    bool bLastEyeValid; // 0x44c
    char pad_44d[0xa33];
    static AWorldFXSingleton* StaticClass();
    static void UnregisterWorldFXInterface();
    static void RegisterWorldFXInterface();
    static void PresetRuleExists(FWorldFXPresetRuleName PresetName, bool& bResult);
    static void PresetRuleEvaluateWithSpawnParameters(UObject* WorldContextObject, FWorldFXPresetRuleName PresetName, FVector FXSpawnPosition, FWorldFXSpawnOverrides& SpawnOverrides, bool& bResult);
    static void PresetRuleEvaluate(UObject* WorldContextObject, FWorldFXPresetRuleName PresetName, FVector FXSpawnPosition, bool& bResult);
    static void IsWorldFXInterfaceRegistered();
    static UWorldFXRule* GetPresetRule(FWorldFXPresetRuleName PresetRuleName);
    static void ForgetManagedNiagaraComponent(UNiagaraComponent* NiagaraComponent);
    static void ForgetManagedGenericComponent(UActorComponent* ActorComponent);
    static void ForgetManagedCascadeComponent(UParticleSystemComponent* ParticleSystemComponent);
    static void ForgetManagedAudioComponent(UAkComponent* AudioComponent);
    static void AutoManageNiagaraComponent(UNiagaraComponent* NiagaraComponent, float CullDistanceMeters);
    static void AutoManageGenericComponent(UActorComponent* ActorComponent, FWorldFXGenericManageSettings Manage, float CullDistanceMeters);
    static void AutoManageCascadeComponent(UParticleSystemComponent* ParticleSystemComponent, float CullDistanceMeters);
    static void AutoManageAudioComponent(UAkComponent* AudioComponent, float CullDistanceMeters);
}; // Size: 0xe80
#pragma pack(pop)
