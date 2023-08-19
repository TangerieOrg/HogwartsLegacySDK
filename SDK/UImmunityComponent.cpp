#include "FGameplayTagContainer.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UImmunityComponent.hpp"
bool UImmunityComponent::IsImmuneTo(FGameplayTagContainer& InImpactTagContainer, bool bCritical) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ImmunityComponent.IsImmuneTo"));
    struct Params_IsImmuneTo {
        FGameplayTagContainer InImpactTagContainer; // 0x0
        bool bCritical; // 0x20
        bool ReturnValue; // 0x21
    }; // Size: 0x22
    Params_IsImmuneTo params{};
    params.InImpactTagContainer = (FGameplayTagContainer)InImpactTagContainer;
    params.bCritical = (bool)bCritical;
    ProcessEvent(func, &params);
    InImpactTagContainer = params.InImpactTagContainer;
    return (bool)params.ReturnValue;
}
UImmunityComponent* UImmunityComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ImmunityComponent");
    return (UImmunityComponent*)res;
}
void UImmunityComponent::ClearImmuneToEverythingExcept() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ImmunityComponent.ClearImmuneToEverythingExcept"));
    struct Params_ClearImmuneToEverythingExcept {
    }; // Size: 0x0
    Params_ClearImmuneToEverythingExcept params{};
    ProcessEvent(func, &params);
}
void UImmunityComponent::SetImmuneToEverythingExcept(FGameplayTagContainer& InImpactTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ImmunityComponent.SetImmuneToEverythingExcept"));
    struct Params_SetImmuneToEverythingExcept {
        FGameplayTagContainer InImpactTagContainer; // 0x0
    }; // Size: 0x20
    Params_SetImmuneToEverythingExcept params{};
    params.InImpactTagContainer = (FGameplayTagContainer)InImpactTagContainer;
    ProcessEvent(func, &params);
    InImpactTagContainer = params.InImpactTagContainer;
}
void UImmunityComponent::RemoveImmunity(FGameplayTagContainer& InImpactTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ImmunityComponent.RemoveImmunity"));
    struct Params_RemoveImmunity {
        FGameplayTagContainer InImpactTagContainer; // 0x0
    }; // Size: 0x20
    Params_RemoveImmunity params{};
    params.InImpactTagContainer = (FGameplayTagContainer)InImpactTagContainer;
    ProcessEvent(func, &params);
    InImpactTagContainer = params.InImpactTagContainer;
}
void UImmunityComponent::RemoveImmuneUnlessCritical(FGameplayTagContainer& InImpactTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ImmunityComponent.RemoveImmuneUnlessCritical"));
    struct Params_RemoveImmuneUnlessCritical {
        FGameplayTagContainer InImpactTagContainer; // 0x0
    }; // Size: 0x20
    Params_RemoveImmuneUnlessCritical params{};
    params.InImpactTagContainer = (FGameplayTagContainer)InImpactTagContainer;
    ProcessEvent(func, &params);
    InImpactTagContainer = params.InImpactTagContainer;
}
void UImmunityComponent::RemoveAllImmunity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ImmunityComponent.RemoveAllImmunity"));
    struct Params_RemoveAllImmunity {
    }; // Size: 0x0
    Params_RemoveAllImmunity params{};
    ProcessEvent(func, &params);
}
void UImmunityComponent::RemoveAllImmuneUnlessCritical() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ImmunityComponent.RemoveAllImmuneUnlessCritical"));
    struct Params_RemoveAllImmuneUnlessCritical {
    }; // Size: 0x0
    Params_RemoveAllImmuneUnlessCritical params{};
    ProcessEvent(func, &params);
}
void UImmunityComponent::AddImmunity(FGameplayTagContainer& InImpactTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ImmunityComponent.AddImmunity"));
    struct Params_AddImmunity {
        FGameplayTagContainer InImpactTagContainer; // 0x0
    }; // Size: 0x20
    Params_AddImmunity params{};
    params.InImpactTagContainer = (FGameplayTagContainer)InImpactTagContainer;
    ProcessEvent(func, &params);
    InImpactTagContainer = params.InImpactTagContainer;
}
void UImmunityComponent::AddImmuneUnlessCritical(FGameplayTagContainer& InImpactTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ImmunityComponent.AddImmuneUnlessCritical"));
    struct Params_AddImmuneUnlessCritical {
        FGameplayTagContainer InImpactTagContainer; // 0x0
    }; // Size: 0x20
    Params_AddImmuneUnlessCritical params{};
    params.InImpactTagContainer = (FGameplayTagContainer)InImpactTagContainer;
    ProcessEvent(func, &params);
    InImpactTagContainer = params.InImpactTagContainer;
}
