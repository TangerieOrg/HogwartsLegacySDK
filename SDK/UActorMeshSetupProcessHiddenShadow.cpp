#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessHiddenShadow.hpp"
UActorMeshSetupProcessHiddenShadow* UActorMeshSetupProcessHiddenShadow::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessHiddenShadow");
    return (UActorMeshSetupProcessHiddenShadow*)res;
}
