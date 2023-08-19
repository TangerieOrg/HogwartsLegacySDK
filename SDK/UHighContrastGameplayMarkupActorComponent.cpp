#include "EHighContrastGameplayMarkup.hpp"
#include "FStencilValueRenderCustomDepthFilter.hpp"
#include "UHighContrastGameplayMarkupActorComponent.hpp"
#include "UHighContrastGameplayMarkupComponent.hpp"
UHighContrastGameplayMarkupActorComponent* UHighContrastGameplayMarkupActorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HighContrastGameplayMarkupActorComponent");
    return (UHighContrastGameplayMarkupActorComponent*)res;
}
