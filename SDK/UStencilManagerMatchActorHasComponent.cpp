#include "UStencilManagerMatchActor.hpp"
#include "UStencilManagerMatchActorHasComponent.hpp"
UStencilManagerMatchActorHasComponent* UStencilManagerMatchActorHasComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManagerMatchActorHasComponent");
    return (UStencilManagerMatchActorHasComponent*)res;
}
