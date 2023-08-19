#include "FLightingChannels.hpp"
#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessLightingChannels.hpp"
UActorMeshSetupProcessLightingChannels* UActorMeshSetupProcessLightingChannels::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessLightingChannels");
    return (UActorMeshSetupProcessLightingChannels*)res;
}
