#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessLightingChannelTwo.hpp"
UActorMeshSetupProcessLightingChannelTwo* UActorMeshSetupProcessLightingChannelTwo::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessLightingChannelTwo");
    return (UActorMeshSetupProcessLightingChannelTwo*)res;
}
