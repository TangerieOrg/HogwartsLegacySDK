#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessShadows.hpp"
UActorMeshSetupProcessShadows* UActorMeshSetupProcessShadows::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessShadows");
    return (UActorMeshSetupProcessShadows*)res;
}
