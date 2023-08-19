#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UActorComponent.hpp"
class UAkAudioEvent;
class UNiagaraSystem;
struct FHitResult;
class UClass;
class UCognitionStimuliSourceComponent;
class AInventoryObject;
class AActor;
#pragma pack(push, 1)
class UCombativePlantComponent : public UActorComponent {
public:
    bool bCanBePickedUp; // 0xc8
    char pad_c9[0x47];
    UAkAudioEvent* RecallAudioEffect; // 0x110
    UNiagaraSystem* RecallVisualEffect; // 0x118
    UClass* RespondToPlayerAbility; // 0x120
    FGameplayTagContainer PerkFinalAttackContainer; // 0x128
    float SwitchTime; // 0x148
    bool bPlayerIsInstigator; // 0x14c
    bool bShouldEmitPerceptionEvents; // 0x14d
    char pad_14e[0x2];
    float PerceptionEventTimePeriod; // 0x150
    char pad_154[0x4];
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x158
    char pad_160[0x80];
    static UCombativePlantComponent* StaticClass();
    void PickedUp(AInventoryObject* InInventoryObject, int32_t InCount);
    void OnRecall();
    void OnDealDamage__DelegateSignature(AActor* AttackTarget, float Damage, FHitResult& Hit);
    void OnCinematicChange__DelegateSignature();
    void OnCabbagePerkActivate__DelegateSignature();
    void GenerateFocus(AActor* InActor, float InDamage, FHitResult& InHit);
    void EmitPerceptionEvent();
    void DisablePickup();
    bool AddObjectToInventory(AActor* InInventoryHolder);
}; // Size: 0x1e0
#pragma pack(pop)
