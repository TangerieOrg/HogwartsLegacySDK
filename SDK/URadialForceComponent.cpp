#include "EObjectTypeQuery.hpp"
#include "ERadialImpulseFalloff.hpp"
#include "UFunction.hpp"
#include "URadialForceComponent.hpp"
#include "USceneComponent.hpp"
void URadialForceComponent::AddObjectTypeToAffect(EObjectTypeQuery ObjectType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RadialForceComponent.AddObjectTypeToAffect"));
    struct Params_AddObjectTypeToAffect {
        EObjectTypeQuery ObjectType; // 0x0
    }; // Size: 0x1
    Params_AddObjectTypeToAffect params{};
    params.ObjectType = (EObjectTypeQuery)ObjectType;
    ProcessEvent(func, &params);
}
URadialForceComponent* URadialForceComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.RadialForceComponent");
    return (URadialForceComponent*)res;
}
void URadialForceComponent::RemoveObjectTypeToAffect(EObjectTypeQuery ObjectType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RadialForceComponent.RemoveObjectTypeToAffect"));
    struct Params_RemoveObjectTypeToAffect {
        EObjectTypeQuery ObjectType; // 0x0
    }; // Size: 0x1
    Params_RemoveObjectTypeToAffect params{};
    params.ObjectType = (EObjectTypeQuery)ObjectType;
    ProcessEvent(func, &params);
}
void URadialForceComponent::FireImpulse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RadialForceComponent.FireImpulse"));
    struct Params_FireImpulse {
    }; // Size: 0x0
    Params_FireImpulse params{};
    ProcessEvent(func, &params);
}
