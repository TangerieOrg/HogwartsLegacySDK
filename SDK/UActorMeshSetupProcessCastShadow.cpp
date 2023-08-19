#include "UActorMeshSetupProcessCastShadow.hpp"
#include "UActorMeshSetupProcessFiltered.hpp"
UActorMeshSetupProcessCastShadow* UActorMeshSetupProcessCastShadow::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessCastShadow");
    return (UActorMeshSetupProcessCastShadow*)res;
}
