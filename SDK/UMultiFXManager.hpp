#pragma once
#include <cstdint>
#include "EAttachLocation\Type.hpp"
#include "EDetachmentRule.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "FMultiFXHandle.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
struct FMultiFXPlus;
struct FMultiFXPlusHandles;
class USceneComponent;
struct FMultiFX;
class AActor;
struct FMaterialSwapParameters;
class UParticleSystemComponent;
class USkinFXComponent;
class UNiagaraComponent;
#pragma pack(push, 1)
class UMultiFXManager : public UObject {
public:
    static UMultiFXManager* StaticClass();
    void UpdateFX();
    static void SpawnMultiFXPlus(FMultiFXPlus& MultiPlus, UObject* Object, FMultiFXPlusHandles& FXHandles, FVector& Location, FRotator& Rotation);
    static FMultiFXHandle SpawnMultiFXAttached(FMultiFX& MultiFX, USceneComponent* AttachToComponent, FMaterialSwapParameters& MaterialSwapParameters, FName AttachPointName, FVector& Location, FRotator& Rotation, FVector& Scale, EAttachLocation::Type LocationType, bool bAutoDestroy);
    static FMultiFXHandle SpawnMultiFXAtLocation(FMultiFX& MultiFX, UObject* WorldContextObject, FMaterialSwapParameters& MaterialSwapParameters, FVector& Location, FRotator& Rotation, FVector& Scale, bool bAutoDestroy);
    static void SetVfxRotation(FMultiFXHandle& InHandle, FRotator& Rotation);
    static void SetVfxLocation(FMultiFXHandle& InHandle, FVector& Location);
    static void SetCustomTimeDilation(FMultiFXHandle& InHandle, float Dilation);
    void MovementStopped(AActor* InActor);
    static bool IsVfxPlaying(FMultiFXHandle& InHandle);
    static bool IsVfxLooping(FMultiFXHandle& InHandle);
    static bool IsValid(FMultiFXHandle& InHandle);
    static bool IsPlusComplete(FMultiFXPlusHandles& InHandles);
    static FRotator GetVfxRotation(FMultiFXHandle& InHandle);
    static FVector GetVfxLocation(FMultiFXHandle& InHandle);
    static USkinFXComponent* GetSkinFxComponent(FMultiFXHandle& InHandle);
    static int32_t GetSfxHandle(FMultiFXHandle& InHandle);
    static UParticleSystemComponent* GetParticleSystemComponent(FMultiFXHandle& InHandle);
    static UNiagaraComponent* GetNiagaraComponent(FMultiFXHandle& InHandle);
    static float GetCustomTimeDilation(FMultiFXHandle& InHandle);
    static void DetachVfxRule(FMultiFXHandle& InHandle, EDetachmentRule DetachmentRules);
    static void DestroyPlus(FMultiFXPlusHandles& InHandles, bool bImmediate, ESkinFXEffectEndStyle EndStyle);
    static void Destroy(FMultiFXHandle& InHandle, bool bImmediate, ESkinFXEffectEndStyle EndStyle);
}; // Size: 0x28
#pragma pack(pop)
