#include "UGroundSwarmingControlComponent.hpp"
#include "USceneComponent.hpp"
UGroundSwarmingControlComponent* UGroundSwarmingControlComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GroundSwarmingControlComponent");
    return (UGroundSwarmingControlComponent*)res;
}
