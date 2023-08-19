#include "UHighContrastGameplayMarkupActorComponent.hpp"
#include "UHighContrastGameplayMarkupOwnerComponent.hpp"
UHighContrastGameplayMarkupOwnerComponent* UHighContrastGameplayMarkupOwnerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HighContrastGameplayMarkupOwnerComponent");
    return (UHighContrastGameplayMarkupOwnerComponent*)res;
}
