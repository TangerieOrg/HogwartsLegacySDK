#include "AActor.hpp"
#include "AInventoryObject.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "UActorComponent.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UCombativePlantComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraSystem.hpp"
UCombativePlantComponent* UCombativePlantComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CombativePlantComponent");
    return (UCombativePlantComponent*)res;
}
void UCombativePlantComponent::EmitPerceptionEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombativePlantComponent.EmitPerceptionEvent"));
    struct Params_EmitPerceptionEvent {
    }; // Size: 0x0
    Params_EmitPerceptionEvent params{};
    ProcessEvent(func, &params);
}
void UCombativePlantComponent::PickedUp(AInventoryObject* InInventoryObject, int32_t InCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombativePlantComponent.PickedUp"));
    struct Params_PickedUp {
        AInventoryObject* InInventoryObject; // 0x0
        int32_t InCount; // 0x8
    }; // Size: 0xc
    Params_PickedUp params{};
    params.InInventoryObject = (AInventoryObject*)InInventoryObject;
    params.InCount = (int32_t)InCount;
    ProcessEvent(func, &params);
}
void UCombativePlantComponent::GenerateFocus(AActor* InActor, float InDamage, FHitResult& InHit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombativePlantComponent.GenerateFocus"));
    struct Params_GenerateFocus {
        AActor* InActor; // 0x0
        float InDamage; // 0x8
        FHitResult InHit; // 0xc
    }; // Size: 0x94
    Params_GenerateFocus params{};
    params.InActor = (AActor*)InActor;
    params.InDamage = (float)InDamage;
    params.InHit = (FHitResult)InHit;
    ProcessEvent(func, &params);
    InHit = params.InHit;
}
void UCombativePlantComponent::OnRecall() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombativePlantComponent.OnRecall"));
    struct Params_OnRecall {
    }; // Size: 0x0
    Params_OnRecall params{};
    ProcessEvent(func, &params);
}
void UCombativePlantComponent::OnDealDamage__DelegateSignature(AActor* AttackTarget, float Damage, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.CombativePlantComponent.OnDealDamage__DelegateSignature"));
    struct Params_OnDealDamage__DelegateSignature {
        AActor* AttackTarget; // 0x0
        float Damage; // 0x8
        FHitResult Hit; // 0xc
    }; // Size: 0x94
    Params_OnDealDamage__DelegateSignature params{};
    params.AttackTarget = (AActor*)AttackTarget;
    params.Damage = (float)Damage;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void UCombativePlantComponent::OnCinematicChange__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.CombativePlantComponent.OnCinematicChange__DelegateSignature"));
    struct Params_OnCinematicChange__DelegateSignature {
    }; // Size: 0x0
    Params_OnCinematicChange__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UCombativePlantComponent::OnCabbagePerkActivate__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.CombativePlantComponent.OnCabbagePerkActivate__DelegateSignature"));
    struct Params_OnCabbagePerkActivate__DelegateSignature {
    }; // Size: 0x0
    Params_OnCabbagePerkActivate__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UCombativePlantComponent::DisablePickup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombativePlantComponent.DisablePickup"));
    struct Params_DisablePickup {
    }; // Size: 0x0
    Params_DisablePickup params{};
    ProcessEvent(func, &params);
}
bool UCombativePlantComponent::AddObjectToInventory(AActor* InInventoryHolder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombativePlantComponent.AddObjectToInventory"));
    struct Params_AddObjectToInventory {
        AActor* InInventoryHolder; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_AddObjectToInventory params{};
    params.InInventoryHolder = (AActor*)InInventoryHolder;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
