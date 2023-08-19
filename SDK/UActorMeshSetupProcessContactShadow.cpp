#include "UActorMeshSetupProcessContactShadow.hpp"
#include "UActorMeshSetupProcessFiltered.hpp"
UActorMeshSetupProcessContactShadow* UActorMeshSetupProcessContactShadow::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessContactShadow");
    return (UActorMeshSetupProcessContactShadow*)res;
}
