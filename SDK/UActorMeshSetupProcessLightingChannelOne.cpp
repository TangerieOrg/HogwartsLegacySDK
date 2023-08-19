#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessLightingChannelOne.hpp"
UActorMeshSetupProcessLightingChannelOne* UActorMeshSetupProcessLightingChannelOne::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessLightingChannelOne");
    return (UActorMeshSetupProcessLightingChannelOne*)res;
}
