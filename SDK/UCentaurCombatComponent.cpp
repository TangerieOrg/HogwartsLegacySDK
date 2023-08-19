#include "AActor.hpp"
#include "FCentaurRepositionDescriptor.hpp"
#include "FGameplayTagContainer.hpp"
#include "UActorComponent.hpp"
#include "UCentaurCombatComponent.hpp"
#include "UFunction.hpp"
UCentaurCombatComponent* UCentaurCombatComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CentaurCombatComponent");
    return (UCentaurCombatComponent*)res;
}
bool UCentaurCombatComponent::IsUsingStanceA() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CentaurCombatComponent.IsUsingStanceA"));
    struct Params_IsUsingStanceA {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUsingStanceA params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
