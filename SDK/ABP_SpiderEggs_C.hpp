#pragma once
#include <cstdint>
#include "ASpiderEggs.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_SpiderEggsacParams.hpp"
#include "FVector.hpp"
class UCapsuleComponent;
class UUprightAttachSceneComponent;
class ASpellTool;
class USceneComponent;
struct FHitResult;
class AActor;
class USpellToolRecord;
class UPrimitiveComponent;
class UInteractionArchitectAsset;
class URepairComponent;
class UGeometryCollectionComponent;
class UIncendioComponent;
class UArrestoMomentumComponent;
#pragma pack(push, 1)
class ABP_SpiderEggs_C : public ASpiderEggs {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x5c0
    UCapsuleComponent* HitBox; // 0x5c8
    UUprightAttachSceneComponent* UprightAttachScene; // 0x5d0
    USceneComponent* AlertCalloutAttachComponent; // 0x5d8
    USceneComponent* CalloutAttachComponent; // 0x5e0
    int32_t PropIndex; // 0x5e8
    char pad_5ec[0x54];
    bool CompiledList; // 0x640
    char pad_641[0x6f];
    static ABP_SpiderEggs_C* StaticClass();
    bool DisallowArrestoMomentum();
    bool StartFreeze(AActor* Instigator, float Amount);
    bool IncreaseWetness(AActor* Instigator, float increaseAmount, FVector Location);
    bool StartWetness(AActor* Instigator, float Amount, FVector Location);
    bool NearDeathKneeling(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity);
    bool Damaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    bool Destroyed(float DamageAmount, AActor* Instigator, FGameplayTagContainer MunitionTagContainer, FVector Velocity, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    bool DecreaseFire(float decreaseAmount);
    bool IncreaseFire(float increaseAmount, FVector Location);
    bool IsPointOnFire(FVector Point, bool& OnFire);
    bool StartFire(float Amount, FVector Location);
    void SetupParamsForSpawnType(float CallFunc_RandomFloatInRange_ReturnValue, FSTR_SpiderEggsacParams CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void UserConstructionScript();
    void OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection);
    void OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact);
    void OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation);
    void OnSpellEffective(AActor* Instigator);
    void OnSpellIneffective(AActor* Instigator);
    void OnSpellTooWeak(AActor* Instigator);
    void OnAttemptToFreeze();
    void OnFailedToFreeze();
    void SwitchOff(AActor* SwitchActor);
    void OnDecreaseWetness(float decreaseAmount);
    void OnDry(AActor* Instigator);
    void OnFailedToWet();
    void OnAttemptToHeal();
    void OnAttemptToRepair();
    void OnBeginRepairing();
    void OnCriticalHealthReached();
    void OnDoneRepairing();
    void OnFailedToBeDamaged(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity);
    void OnFailedToBeDestroyed();
    void OnFailedToBeHealed();
    void OnGeometryCollectionCompletelyBroken(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection);
    void OnGeometryCollectionDamaged(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection);
    void OnGeometryCollectionSpawned(URepairComponent* RepairComponent, UGeometryCollectionComponent* GeometryCollectionComponent, float impulseStr, float Radius, FVector HitLocation, FVector HitDirection, bool bCompletelyBroken);
    void OnHealed(float healAmount, UPrimitiveComponent* PrimComp);
    void OnCaughtFire(UIncendioComponent* IncendioComponent);
    void OnCompletelyCharred();
    void OnFailedToLight();
    void OnFireExtinguished();
    void OnAttemptToApplyWetness(float Amount, FVector Location);
    void SwitchOn(AActor* SwitchActor);
    void OnThaw(AActor* Instigator);
    void OnArrestoMomentumBegin(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation);
    void OnArrestoMomentumEnd(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent);
    void OnAttemptToSetOnFire(FVector Location);
    void OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection);
    void _StartExplode0();
    void _CancelExplode0();
    void _StartFireLight0();
    void _StopFireLight0();
    void _CallDispatcher0();
    void DoExplode();
    void ReceiveBeginPlay();
    void OnBurst0();
    void OnStartPulse0();
    void OnStopPulse0();
    void ExecuteUbergraph_BP_SpiderEggs(int32_t EntryPoint);
    void BurstDispatcher__DelegateSignature();
}; // Size: 0x6b0
#pragma pack(pop)
