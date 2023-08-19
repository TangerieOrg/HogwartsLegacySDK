#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessStaticShadow.hpp"
UActorMeshSetupProcessStaticShadow* UActorMeshSetupProcessStaticShadow::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessStaticShadow");
    return (UActorMeshSetupProcessStaticShadow*)res;
}
