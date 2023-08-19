#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UImmunityComponent : public UActorComponent {
public:
    FGameplayTagContainer ImmunityTagContainer; // 0xc8
    FGameplayTagContainer ImmuneUnlessCriticalTagContainer; // 0xe8
    bool bImmuneToEverythingExcept; // 0x108
    char pad_109[0x7];
    FGameplayTagContainer ImmuneToEverythingExceptTagContainer; // 0x110
    static UImmunityComponent* StaticClass();
    void SetImmuneToEverythingExcept(FGameplayTagContainer& InImpactTagContainer);
    void RemoveImmunity(FGameplayTagContainer& InImpactTagContainer);
    void RemoveImmuneUnlessCritical(FGameplayTagContainer& InImpactTagContainer);
    void RemoveAllImmunity();
    void RemoveAllImmuneUnlessCritical();
    bool IsImmuneTo(FGameplayTagContainer& InImpactTagContainer, bool bCritical);
    void ClearImmuneToEverythingExcept();
    void AddImmunity(FGameplayTagContainer& InImpactTagContainer);
    void AddImmuneUnlessCritical(FGameplayTagContainer& InImpactTagContainer);
}; // Size: 0x130
#pragma pack(pop)
