#pragma once
#include <cstdint>
#include "ABroomFlightVFXActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FLinearColor.hpp"
#include "FMultiFX2Handle.hpp"
#include "FNiagaraSystemSpawnAttachedPointInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_AccentVFX.hpp"
#include "FVector.hpp"
class UWindPointSourceWithEnvelopeComponent;
class ABP_FlyingBroomCapsule_C;
class UPostProcessComponent;
class USkeletalMeshComponent;
class USceneComponent;
struct FHitResult;
class UNiagaraComponent;
class UFlyingBroomPhysics_FreeRoam;
class AFlyingBroom;
class AActor;
#pragma pack(push, 1)
class ABP_BroomFlightVFXActor_C : public ABroomFlightVFXActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UWindPointSourceWithEnvelopeComponent* WindSource; // 0x378
    UPostProcessComponent* PostProcess; // 0x380
    UNiagaraComponent* Niagara; // 0x388
    USceneComponent* DefaultSceneRoot; // 0x390
    FSTR_AccentVFX STR_AccentVFX; // 0x398
    USkeletalMeshComponent* BroomMesh; // 0x468
    int32_t VFX_MaterialSlot; // 0x470
    char pad_474[0x4];
    ABP_FlyingBroomCapsule_C* BroomCapsule; // 0x478
    FMultiFX2Handle FX2Handle; // 0x480
    UNiagaraComponent* TrailEmitter; // 0x488
    UFlyingBroomPhysics_FreeRoam* FreeRoamPhysics; // 0x490
    UNiagaraComponent* BoostGainNiagaraComponent; // 0x498
    static ABP_BroomFlightVFXActor_C* StaticClass();
    UPostProcessComponent* GetPostProcess0();
    UNiagaraComponent* GetNiagara0();
    AFlyingBroom* GetBroomCapsule0();
    UNiagaraComponent* SpawnNiagaraSystem0(UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
    void EndBoostGainVFX(bool CallFunc_IsValid_ReturnValue);
    void StartBoostGainVFX(FNiagaraSystemSpawnAttachedPointInfo K2Node_MakeStruct_NiagaraSystemSpawnAttachedPointInfo, UNiagaraComponent* CallFunc_SpawnAttached_NiagaraComponent);
    void SetupCollisionVFX();
    void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
    void SetupVFXRefs0();
    void SetupBroomTrailVFX0();
    void DestroyNiagaraAndPostProcessComponent0();
    void CreateBroomMaterialDynamic0();
    void SetupGroundVFX0();
    void SetRadialBlurParameterValues0(float EffectAmount, FLinearColor TargetPos);
    void SetRadialBlurToggleParameterValue0(float ToggleAmount);
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_BroomFlightVFXActor(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x4a0
#pragma pack(pop)
