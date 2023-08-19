#include "AActor.hpp"
#include "EInteractiveAction.hpp"
#include "EObjectTypeQuery.hpp"
#include "UAkAudioEvent.hpp"
#include "UFunction.hpp"
#include "UParticleSystem.hpp"
#include "UParticleSystemComponent.hpp"
#include "USceneComponent.hpp"
#include "USpellToolRecord.hpp"
#include "UTriggerEffectComponent.hpp"
UTriggerEffectComponent* UTriggerEffectComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TriggerEffectComponent");
    return (UTriggerEffectComponent*)res;
}
void UTriggerEffectComponent::RemoveObjectTypeToAffect(EObjectTypeQuery ObjectType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TriggerEffectComponent.RemoveObjectTypeToAffect"));
    struct Params_RemoveObjectTypeToAffect {
        EObjectTypeQuery ObjectType; // 0x0
    }; // Size: 0x1
    Params_RemoveObjectTypeToAffect params{};
    params.ObjectType = (EObjectTypeQuery)ObjectType;
    ProcessEvent(func, &params);
}
void UTriggerEffectComponent::AddObjectTypeToAffect(EObjectTypeQuery ObjectType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TriggerEffectComponent.AddObjectTypeToAffect"));
    struct Params_AddObjectTypeToAffect {
        EObjectTypeQuery ObjectType; // 0x0
    }; // Size: 0x1
    Params_AddObjectTypeToAffect params{};
    params.ObjectType = (EObjectTypeQuery)ObjectType;
    ProcessEvent(func, &params);
}
