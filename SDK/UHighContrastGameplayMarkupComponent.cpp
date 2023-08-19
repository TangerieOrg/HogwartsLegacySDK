#include "UActorComponent.hpp"
#include "UHighContrastGameplayMarkupComponent.hpp"
UHighContrastGameplayMarkupComponent* UHighContrastGameplayMarkupComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AccessibilitySettings.HighContrastGameplayMarkupComponent");
    return (UHighContrastGameplayMarkupComponent*)res;
}
