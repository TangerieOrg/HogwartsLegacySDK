#include "UHighContrastGameplayMarkupActorComponent.hpp"
#include "UHighContrastGameplayMarkupOtherActorComponent.hpp"
UHighContrastGameplayMarkupOtherActorComponent* UHighContrastGameplayMarkupOtherActorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HighContrastGameplayMarkupOtherActorComponent");
    return (UHighContrastGameplayMarkupOtherActorComponent*)res;
}
