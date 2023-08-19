#include "UActorComponent.hpp"
#include "UVegetationInteractionComponent.hpp"
UVegetationInteractionComponent* UVegetationInteractionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VegetationInteractionComponent");
    return (UVegetationInteractionComponent*)res;
}
