#pragma once
#include <cstdint>
#include "ABP_Enemy_Character_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EMovementMode.hpp"
#include "ENPC_Mobility.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FOdcPathSpec.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UCapsuleComponent;
class AActor;
class UAnimationComponent;
class UNiagaraSystem;
class UNiagaraComponent;
class UPrimitiveComponent;
class UObject;
class ACharacter;
class ASpellTool;
class USpellToolRecord;
class ANPC_Character;
struct FDamageResult;
#pragma pack(push, 1)
class ABP_Dugbog_C : public ABP_Enemy_Character_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x24f0
    UCapsuleComponent* HeadTarget; // 0x24f8
    UAnimationComponent* Animation; // 0x2500
    UCapsuleComponent* Attack; // 0x2508
    FOdcPathSpec WaterPathSpec; // 0x2510
    FOdcPathSpec GroundPathSpec; // 0x2560
    FOdcPathSpec DefaultPathSpec_0; // 0x25b0
    char pad_2600[0x50];
    UNiagaraComponent* MinorFXHandle; // 0x2650
    UNiagaraComponent* MajorFXHandle; // 0x2658
    UNiagaraSystem* MinorHitVFX_Asset; // 0x2660
    UNiagaraSystem* MajorHitVFX_Asset; // 0x2668
    static ABP_Dugbog_C* StaticClass();
    bool Damaged0(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity, bool CallFunc_Damaged_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_IsStationary_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Hit_Actor(FHitResult HitResult, AActor* HitActor);
    void ReceiveBeginPlay0();
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void MovementModeChangedDelegate_Event_0(ACharacter* Character, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode);
    void Stealth_Attack_Off(UObject* Caller);
    void Stealh_Attack_on(UObject* Caller);
    void SetWaterPathSpec();
    void SetGroundPathSpec();
    void SetDefaultPathSpec();
    void AttackCollisionStop();
    void AttackCollisionStart();
    void BndEvt__Attack_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit);
    void BndEvt__BP_EnemyAI_K2Node_ComponentBoundEvent_1_OnDeadDelegate__DelegateSignature(AActor* pActor);
    void BndEvt__BP_EnemyAI_K2Node_ComponentBoundEvent_2_NPCMobilityChanged__DelegateSignature(ENPC_Mobility Mobility);
    void HitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult Hit, FVector ImpactDirection);
    void ReflectAttack(UObject* Caller, FDamageResult& DamageResult);
    void NewDeathFade0();
    void DamageTaken(UObject* Caller, FDamageResult& DamageResult);
    void BndEvt__BP_Dugbog_BP_EnemyAI_K2Node_ComponentBoundEvent_3_AttackBeginDelegate__DelegateSignature();
    void CombatAggroPlayer(ANPC_Character* NPCChar);
    void MinorHitLoaded(UObject* LoadedObject);
    void MajorHitLoaded(UObject* LoadedObject);
    void ExecuteUbergraph_BP_Dugbog(int32_t EntryPoint, FMaterialSwapParameters Temp_struct_Variable);
}; // Size: 0x2670
#pragma pack(pop)
