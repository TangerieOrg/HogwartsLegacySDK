#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FFXAutoTriggerAnyName.hpp"
#include "FFXAutoTriggerRunningFXCollection.hpp"
class UFXAutoTriggerGlobalDefinitionAsset;
class UObject;
struct FMultiFX2Handle;
class UClass;
class UFXAutoTriggerDefinitionAsset;
#pragma pack(push, 1)
class AFXAutoTriggerSingleton : public AActor {
public:
    UFXAutoTriggerGlobalDefinitionAsset* Globals; // 0x248
    FFXAutoTriggerRunningFXCollection FX; // 0x250
    char pad_278[0x50];
    static AFXAutoTriggerSingleton* StaticClass();
    static void SetWorldCustomCondition(UObject* WorldContextObject, FName WorldConditionName, bool bEnabled);
    static void SetActorCustomCondition(AActor* Actor, FName ActorConditionName, bool bEnabled);
    static void RemoveManualActors(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, TArray<AActor*> Actors, bool& bResult);
    static void RemoveManualActor(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, bool& bResult);
    static void RemoveCustomBucketActor(AActor* Actor, FName CustomBucket);
    static void RemoveActorByClass(AActor* Actor, UClass* ActorClass);
    static void ManuallyTriggerPrerequisite(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, bool& bResult, bool bTrigger);
    static void KillAutoTriggerFX(UObject* WorldContextObject, UObject* FXOwner, UFXAutoTriggerDefinitionAsset* FXAutoTriggerDefinition, bool& bResult);
    static void IsManualPrerequisiteTriggered(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, bool& bResult);
    static void HasManualActor(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, bool& bResult);
    static void HasAutoTriggerFX(UObject* WorldContextObject, UObject* FXOwner, UFXAutoTriggerDefinitionAsset* FXAutoTriggerDefinition, bool& bResult);
    static void GetWorldCustomCondition(UObject* WorldContextObject, FName WorldConditionName, bool& bEnabled);
    static void GetEffectIsActive(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, bool& bIsActive);
    static void GetEffectHandle(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, FMultiFX2Handle& FXHandle);
    static void GetAnyEffectIsActive(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, bool& bAnyIsActive);
    static void GetActorCustomCondition(AActor* Actor, FName ActorConditionName, bool& bEnabled);
    static void EffectUpdatesDisabled(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, bool& bIsDisabled);
    static void EffectParameterUpdatesDisabled(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, FName Parameter, bool& bIsDisabled);
    static void DisableEffectUpdates(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, bool bDisableUpdates, bool& bResult);
    static void DisableEffectParameterUpdates(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, FName Parameter, bool bDisableUpdates, bool& bResult);
    static void AddManualActors(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, TArray<AActor*> Actors, bool& bResult);
    static void AddManualActor(UObject* WorldContextObject, FFXAutoTriggerAnyName FXName, AActor* Actor, bool& bResult);
    static void AddCustomBucketActor(AActor* Actor, FName CustomBucket);
    static void AddAutoTriggerFX(UObject* WorldContextObject, UObject* FXOwner, UFXAutoTriggerDefinitionAsset* FXAutoTriggerDefinition, bool& bResult);
    static void AddActorByClass(AActor* Actor, UClass* ActorClass, FName ClassTag);
    static void ActorIsInCustomBucket(AActor* Actor, FName CustomBucket, bool& bIsIn);
}; // Size: 0x2c8
#pragma pack(pop)
