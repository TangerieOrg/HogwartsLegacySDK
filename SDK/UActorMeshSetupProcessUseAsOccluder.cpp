#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessUseAsOccluder.hpp"
UActorMeshSetupProcessUseAsOccluder* UActorMeshSetupProcessUseAsOccluder::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessUseAsOccluder");
    return (UActorMeshSetupProcessUseAsOccluder*)res;
}
