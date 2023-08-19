#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessLightingChannelZero.hpp"
UActorMeshSetupProcessLightingChannelZero* UActorMeshSetupProcessLightingChannelZero::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessLightingChannelZero");
    return (UActorMeshSetupProcessLightingChannelZero*)res;
}
