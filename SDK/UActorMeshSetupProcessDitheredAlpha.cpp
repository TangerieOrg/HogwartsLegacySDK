#include "UActorMeshSetupProcessDitheredAlpha.hpp"
#include "UActorMeshSetupProcessFiltered.hpp"
UActorMeshSetupProcessDitheredAlpha* UActorMeshSetupProcessDitheredAlpha::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessDitheredAlpha");
    return (UActorMeshSetupProcessDitheredAlpha*)res;
}
