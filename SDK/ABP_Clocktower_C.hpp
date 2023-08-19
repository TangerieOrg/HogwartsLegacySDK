#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UAkComponent;
class ASpellTool;
class USkeletalMeshComponent;
class UChildActorComponent;
class USendTargetComponent;
class USphereComponent;
struct FVector;
class UObjectStateComponent;
class UInteractionArchitectAsset;
class USpellToolRecord;
struct FHitResult;
class UArrestoMomentumComponent;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_Clocktower_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UAkComponent* Ak_BP_Clocktower_Gears_Turning_Loop; // 0x250
    UAkComponent* Ak_BP_Clocktower_Ring_Bells; // 0x258
    USkeletalMeshComponent* SkeletalMesh; // 0x260
    UChildActorComponent* ChildActor_Low_Target; // 0x268
    UChildActorComponent* ChildActor_High_Target; // 0x270
    UChildActorComponent* ChildActor_Mid_Target; // 0x278
    USendTargetComponent* SendTarget; // 0x280
    UAkComponent* Ak_BP_Clocktower_pendulum_whoosh; // 0x288
    USphereComponent* PendulumTrigger; // 0x290
    UAkComponent* Ak_BP_Clocktower_pendulum_whoosh_motion; // 0x298
    UObjectStateComponent* ObjectState; // 0x2a0
    float TimeDilation; // 0x2a8
    char pad_2ac[0x34];
    bool bRingBells; // 0x2e0
    bool bTurnOnOverlaps; // 0x2e1
    char pad_2e2[0x6];
    static ABP_Clocktower_C* StaticClass();
    bool StartFreeze(AActor* Instigator, float Amount);
    bool DisallowArrestoMomentum();
    void UserConstructionScript0(float Rate, float Scale);
    void OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection);
    void OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact);
    void OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation);
    void OnSpellEffective(AActor* Instigator);
    void OnSpellIneffective(AActor* Instigator);
    void OnSpellTooWeak(AActor* Instigator);
    void OnAttemptToFreeze();
    void OnFailedToFreeze();
    void ReceiveBeginPlay0();
    void Play_Whoosh();
    void OnThaw(AActor* Instigator);
    void OnArrestoMomentumBegin(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation);
    void OnArrestoMomentumEnd(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent);
    void BndEvt__BP_Clocktower_AudioTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection);
    void ExecuteUbergraph_BP_Clocktower(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    void ArrestoEnd__DelegateSignature();
    void Frozen__DelegateSignature(bool bFreeze, AActor* Instigator);
    void Arresto__DelegateSignature(float Duration);
}; // Size: 0x2e8
#pragma pack(pop)
