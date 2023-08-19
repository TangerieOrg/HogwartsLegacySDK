#include "AActor.hpp"
#include "FGameplayTagContainer.hpp"
#include "UFunction.hpp"
#include "UImmunityInterface.hpp"
#include "UInterface.hpp"
UImmunityInterface* UImmunityInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ImmunityInterface");
    return (UImmunityInterface*)res;
}
bool UImmunityInterface::ImmunityActivated(AActor* Instigator, FGameplayTagContainer Immunity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ImmunityInterface.ImmunityActivated"));
    struct Params_ImmunityActivated {
        AActor* Instigator; // 0x0
        FGameplayTagContainer Immunity; // 0x8
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_ImmunityActivated params{};
    params.Instigator = (AActor*)Instigator;
    params.Immunity = (FGameplayTagContainer)Immunity;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
