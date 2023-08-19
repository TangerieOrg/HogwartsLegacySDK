#pragma once
#include <cstdint>
#include "APhoenixBudgetedActor.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FSceneRigParameters.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class ULocalStencilBoundsHintComponent;
class USceneComponent;
struct FHitResult;
class USkeletalMeshComponent;
class UBoxComponent;
class UObjectStateComponent;
class USphereComponent;
class UCognitionStimuliSourceComponent;
class UObject;
class UCapsuleComponent;
class ASceneRigActor;
class USceneRig;
class USceneRig_Interaction;
class AActor;
class UNiagaraComponent;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_Merlin_Gazebo_C : public APhoenixBudgetedActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    ULocalStencilBoundsHintComponent* LocalStencilBoundsHint; // 0x270
    USkeletalMeshComponent* Gazebo_ActivationBase; // 0x278
    USkeletalMeshComponent* Gazebo_Base; // 0x280
    USceneComponent* Gazebo_Root; // 0x288
    USkeletalMeshComponent* Gazebo_Foliage; // 0x290
    USkeletalMeshComponent* Gazebo_Pillars2; // 0x298
    USkeletalMeshComponent* Gazebo_Roots; // 0x2a0
    USkeletalMeshComponent* Gazebo_Pillars; // 0x2a8
    UObjectStateComponent* ObjectState; // 0x2b0
    USphereComponent* SpellSphere; // 0x2b8
    USphereComponent* PlayerSphere; // 0x2c0
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c8
    UBoxComponent* Box7; // 0x2d0
    UBoxComponent* Box6; // 0x2d8
    UBoxComponent* Box5; // 0x2e0
    UBoxComponent* Box4; // 0x2e8
    UBoxComponent* Box3; // 0x2f0
    UBoxComponent* Box2; // 0x2f8
    UBoxComponent* Box1; // 0x300
    UBoxComponent* Box; // 0x308
    UCapsuleComponent* Pillar_Collision4; // 0x310
    UCapsuleComponent* Pillar_Collision3; // 0x318
    UCapsuleComponent* Pillar_Collision2; // 0x320
    UCapsuleComponent* Pillar_Collision1; // 0x328
    USceneComponent* DefaultSceneRoot; // 0x330
    float PillarPlayRate; // 0x338
    float RandDelay; // 0x33c
    int32_t Time1; // 0x340
    int32_t Time2; // 0x344
    bool bSolved; // 0x348
    char pad_349[0x17];
    bool bMissionLock; // 0x360
    char pad_361[0x7];
    FHermesBPDelegateHandle InteractHandle; // 0x368
    USceneRig* ActivationSR; // 0x378
    USceneRig_Interaction* GazeboSR; // 0x380
    FRotator RotationalOffset; // 0x388
    FVector LocationOffset; // 0x394
    ASceneRigActor* ActivationSRActor; // 0x3a0
    ASceneRigActor* GazeboSRActor; // 0x3a8
    bool bCollected; // 0x3b0
    char pad_3b1[0x7];
    UNiagaraComponent* CollectibleLoopSystem; // 0x3b8
    char pad_3c0[0x10];
    UNiagaraComponent* FX_ActivationBaseGlowStone; // 0x3d0
    char pad_3d8[0x8];
    FTransform StencilBounds_Large; // 0x3e0
    static ABP_Merlin_Gazebo_C* StaticClass();
    void PlayFinishedScenerig(FSceneRigParameters CallFunc_CreateDefaultParameters_Parameters, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_ComposeRotators_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
    void PlayActivationSceneRig();
    void Start(float Delay, bool bSolved);
    void CollisionRise1();
    void CollisionRise2();
    void Inactive();
    void InteractionInitiated(UObject* Caller);
    void BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void MissionUnlock();
    void ReceiveBeginPlay();
    void GazeboSRFinished();
    void GazeboRevealedAudio();
    void ActivationSRFinished();
    void CreateCollectibleLoop();
    void SetCollected();
    void CreateCollectible();
    void Deactivate();
    void ExecuteUbergraph_BP_Merlin_Gazebo(int32_t EntryPoint);
    void MerlinGazeboStarted__DelegateSignature();
    void Activated__DelegateSignature();
}; // Size: 0x410
#pragma pack(pop)
