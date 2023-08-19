#include "FGroundSwarmingDeathVolume.hpp"
#include "UGroundSwarmingControlComponent.hpp"
#include "UGroundSwarmingDeathVolumeComponent.hpp"
UGroundSwarmingDeathVolumeComponent* UGroundSwarmingDeathVolumeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GroundSwarmingDeathVolumeComponent");
    return (UGroundSwarmingDeathVolumeComponent*)res;
}
