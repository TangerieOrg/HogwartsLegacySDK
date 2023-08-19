#pragma once
#include <cstdint>
#include "EAttachLocation\Type.hpp"
#include "ENCPoolMethod.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UTexture2DArray;
class USceneComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UStaticMeshComponent;
class UObject;
class UVolumeTexture;
class UTexture;
class UStaticMesh;
class USkeletalMeshComponent;
class UNiagaraParameterCollection;
class UNiagaraParameterCollectionInstance;
#pragma pack(push, 1)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UNiagaraFunctionLibrary* StaticClass();
    static UNiagaraComponent* SpawnSystemAttached(UNiagaraSystem* SystemTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    static UNiagaraComponent* SpawnSystemAtLocation(UObject* WorldContextObject, UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    static void SetVolumeTextureObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UVolumeTexture* Texture);
    static void SetTextureObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UTexture* Texture);
    static void SetTexture2DArrayObject(UNiagaraComponent* NiagaraSystem, FString OverrideName, UTexture2DArray* Texture);
    static void SetSkeletalMeshDataInterfaceSamplingRegions(UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& SamplingRegions);
    static void OverrideSystemUserVariableStaticMeshComponent(UNiagaraComponent* NiagaraSystem, FString OverrideName, UStaticMeshComponent* StaticMeshComponent);
    static void OverrideSystemUserVariableStaticMesh(UNiagaraComponent* NiagaraSystem, FString OverrideName, UStaticMesh* StaticMesh);
    static void OverrideSystemUserVariableSkeletalMeshComponent(UNiagaraComponent* NiagaraSystem, FString OverrideName, USkeletalMeshComponent* SkeletalMeshComponent);
    static UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(UObject* WorldContextObject, UNiagaraParameterCollection* Collection);
}; // Size: 0x28
#pragma pack(pop)
