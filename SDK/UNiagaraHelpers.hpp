#pragma once
#include <cstdint>
#include "ENiagaraHelpersPrimMatchMode.hpp"
#include "ENiagaraHelpersPrimRule.hpp"
#include "ENiagaraSpawnBoundsMethod.hpp"
#include "FLinearColor.hpp"
#include "FNiagaraHelpersPrimFilter.hpp"
#include "FNiagaraSystemSpawnAttachedInfo.hpp"
#include "FNiagaraSystemSpawnAttachedPointInfo.hpp"
#include "FNiagaraSystemSpawnInfo.hpp"
#include "FNiagaraSystemSpawnMultiSkeletalInfo.hpp"
#include "FNiagaraSystemSpawnMultiStaticInfo.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
class UNiagaraSystem;
class UNiagaraComponent;
class USceneComponent;
class UObject;
class USkinnedMeshComponent;
class UNiagaraParameterCollectionInstance;
class UPrimitiveComponent;
#pragma pack(push, 1)
class UNiagaraHelpers : public UBlueprintFunctionLibrary {
public:
    static UNiagaraHelpers* StaticClass();
    static void SpawnSystemOnStaticMeshes(AActor* Actor, UNiagaraSystem* NiagaraSystem, FNiagaraSystemSpawnMultiStaticInfo SpawnInfo, FNiagaraHelpersPrimFilter Filter, TArray<UNiagaraComponent*>& NiagaraComponents);
    static void SpawnSystemOnSkeletalMeshes(AActor* Actor, UNiagaraSystem* NiagaraSystem, FNiagaraSystemSpawnMultiSkeletalInfo SpawnInfo, FNiagaraHelpersPrimFilter Filter, TArray<UNiagaraComponent*>& NiagaraComponents);
    static void SpawnSystemOnPrimitives(AActor* Actor, UNiagaraSystem* NiagaraSystem, FNiagaraSystemSpawnAttachedInfo SpawnInfo, FNiagaraHelpersPrimFilter Filter, TArray<UNiagaraComponent*>& NiagaraComponents);
    static void SpawnInWorld(UObject* WorldContextObject, UNiagaraSystem* NiagaraSystem, FNiagaraSystemSpawnInfo SpawnInfo, UNiagaraComponent*& NiagaraComponent);
    static void SpawnAttachedActor(AActor* Actor, UNiagaraSystem* NiagaraSystem, FNiagaraSystemSpawnAttachedPointInfo SpawnInfo, UNiagaraComponent*& NiagaraComponent);
    static void SpawnAttached(USceneComponent* SceneComponent, UNiagaraSystem* NiagaraSystem, FNiagaraSystemSpawnAttachedPointInfo SpawnInfo, UNiagaraComponent*& NiagaraComponent);
    static void NPCSetParameterVector(UNiagaraParameterCollectionInstance* npci, FString ParamName, FVector Value);
    static void NPCSetParameterFloat(UNiagaraParameterCollectionInstance* npci, FString ParamName, float Value);
    static void NPCSetParameterColor(UNiagaraParameterCollectionInstance* npci, FString ParamName, FLinearColor Value);
    static FNiagaraHelpersPrimFilter MakePrimFilterPrimitives(ENiagaraHelpersPrimRule Rule, TArray<UPrimitiveComponent*> Primitives, ENiagaraHelpersPrimMatchMode MatchMode);
    static FNiagaraHelpersPrimFilter MakePrimFilterPrimitive(ENiagaraHelpersPrimRule Rule, UPrimitiveComponent* Primitive, ENiagaraHelpersPrimMatchMode MatchMode);
    static FNiagaraHelpersPrimFilter MakePrimFilterNames(ENiagaraHelpersPrimRule Rule, TArray<FName> Primitives, ENiagaraHelpersPrimMatchMode MatchMode);
    static FNiagaraHelpersPrimFilter MakePrimFilterName(ENiagaraHelpersPrimRule Rule, FName Primitive, ENiagaraHelpersPrimMatchMode MatchMode);
    static void GetEmitterNames(UNiagaraSystem* NiagaraSystem, TArray<FName>& emitterNames, bool includeHidden);
    static void ComputeComponentBoundsMeasure(TArray<USceneComponent*> Components, ENiagaraSpawnBoundsMethod Method, float& Measure, float LinearPower);
    static void ComputeActorStaticMeshBoundsMeasure(AActor* Actor, ENiagaraSpawnBoundsMethod Method, float& Measure, float LinearPower);
    static void ComputeActorSkeletalMeshBoundsMeasure(AActor* Actor, ENiagaraSpawnBoundsMethod Method, float& Measure, float LinearPower);
    static void ComputeActorPrimitiveBoundsMeasure(AActor* Actor, ENiagaraSpawnBoundsMethod Method, float& Measure, float LinearPower);
    static void ComputeActorMeshBoundsMeasure(AActor* Actor, ENiagaraSpawnBoundsMethod Method, float& Measure, float LinearPower);
    static void ActorFindSocketOnComponent(AActor* Actor, FName SocketName, USceneComponent*& ComponentWithSocket, bool bDeepSearchComponents);
    static void ActorFindBoneOrSocketOnComponent(AActor* Actor, FName BoneOrSocketName, USceneComponent*& ComponentWithBoneOrSocket, int32_t& BoneIndex, bool bDeepSearchComponents);
    static void ActorFindBoneOnComponent(AActor* Actor, FName BoneName, USkinnedMeshComponent*& ComponentWithBone, int32_t& BoneIndex, bool bDeepSearchComponents);
    static void ActorBestDefaultAttachComponent(AActor* Actor, USceneComponent*& AttachComponent);
}; // Size: 0x28
#pragma pack(pop)
